using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.ARFoundation;

public class ARManager : MonoBehaviour {

    [Header ("Toggles")]
    [SerializeField] bool touch;
    [SerializeField] bool arRaycastState;

    Touch currentTouch;

    private ARSession arSession;
    private Camera arCamera;
    private Camera mainCamera;

    [Header ("Raycast/Plane")]
    [SerializeField] ARPlaneManager planeManager;
    [SerializeField] ARRaycastManager raycastManager;
    [SerializeField] static List<ARRaycastHit> hits = new List<ARRaycastHit> ();
    [SerializeField] Vector3 touchPos;

    [Header ("Anchors")]
    [SerializeField] GameObject[] vrMarkers = new GameObject[2];
    [SerializeField] GameObject[] arMarkers = new GameObject[2];
    [SerializeField] GameObject prefabMarker;
    [SerializeField] GameObject lineObj;
    [SerializeField] LineRenderer[] lines = new LineRenderer[2];

    private enum Phase { First, Second, Third, Off }
    private Phase currentphase;

    Pose hitPose;
    RaycastHit hitObject;
    GameObject obj;
    private void Start () {
        lines[0] = Instantiate (lineObj, Vector3.zero, Quaternion.identity).GetComponent<LineRenderer> ();
        lines[1] = Instantiate (lineObj, Vector3.zero, Quaternion.identity).GetComponent<LineRenderer> ();

        lines[0].enabled = false;
        arSession = GameManagerScript.Instance.ARSession;
        arCamera = GameManagerScript.Instance.ARcamera;
        mainCamera = GameManagerScript.Instance.MainCamera;
        arCamera.enabled = false;

        planeManager = GameManagerScript.Instance.planeManager;
        raycastManager = GameManagerScript.Instance.raycastManager;

        currentphase = Phase.First;
    }

    private void Update () {
        touch = TouchInput ();
    }

    private bool TouchInput () {
        if (Input.touchCount > 0) {
            Debug.Log ("Touch!");
            currentTouch = Input.GetTouch (0);
            return true;
        }
        return false;
    }

    public void ToggleAR (bool _state) {
        arSession.enabled = _state;
        arCamera.enabled = _state;
        mainCamera.enabled = !_state;
    }
    public void startFirstPhase () {
        obj = GameManagerScript.Instance.ImportedOBJ;
        StartCoroutine ("FirstPhase");
    }

    IEnumerator FirstPhase () {
        //Place the obj, move it on a AR Plane then, make it smaller and await confirmation
        Debug.Log ("1º Phase");
        currentphase = Phase.First;
        GameManagerScript.Instance.Messages.SendMessage ("Place on a surface", 4);

        yield return new WaitUntil (() => touch == true);
        touch = false;

        obj.transform.position = hitPose.position;
        obj.transform.localScale = new Vector3 (0.1f, 0.1f, 0.1f);
        while (currentphase == Phase.First) {
            obj.SetActive (true);
            if (currentTouch.phase == TouchPhase.Began) {

                touchPos = currentTouch.position;
                Debug.Log ("Effective Touch");
                GetTouchLocationARVR (touchPos, true);
                obj.transform.position = hitPose.position;

            }
            if (currentTouch.phase == TouchPhase.Moved) {

                touchPos = currentTouch.position;
                Debug.Log ("Effective Touch");
                GetTouchLocationARVR (touchPos, true);
                obj.transform.position = hitPose.position;

            }
            yield return new WaitForFixedUpdate ();
        }

        Debug.Log ("Coroutine Ended, starting SecondPhase");
        StartCoroutine ("SecondPhase");
        yield break;
    }

    IEnumerator SecondPhase () {
        //Place 2 anchors on obj
        Debug.Log ("2º Phase");
        currentphase = Phase.Second;
        GameManagerScript.Instance.Messages.SendMessage ("Tap on the OBJ 2 points", 5);

        yield return new WaitUntil (() => touch == true);
        touch = false;

        vrMarkers[0] = Instantiate (prefabMarker, Vector3.zero, Quaternion.identity);
        vrMarkers[1] = Instantiate (prefabMarker, Vector3.zero, Quaternion.identity);
        vrMarkers[0].SetActive (false);
        vrMarkers[1].SetActive (false);

        RaycastHit firstHit;
        RaycastHit secondHit;

        while (currentphase == Phase.Second) {
            if (currentTouch.phase == TouchPhase.Began) {

                touchPos = currentTouch.position;
                Debug.Log ("Effective Touch");
                GetTouchLocationARVR (touchPos, false);
                firstHit = hitObject;
                vrMarkers[0].transform.position = firstHit.point;
                vrMarkers[0].SetActive (true);

                lines[0].enabled = true;
                lines[0].SetPosition (0, vrMarkers[0].transform.position);

            }
            if (currentTouch.phase == TouchPhase.Moved) {

                touchPos = currentTouch.position;
                Debug.Log ("Effective Touch");
                GetTouchLocationARVR (touchPos, false);
                secondHit = hitObject;
                vrMarkers[1].transform.position = secondHit.point;
                vrMarkers[1].SetActive (true);

                lines[0].SetPosition (1, vrMarkers[1].transform.position);

            }
            yield return new WaitForFixedUpdate ();
        }

        Debug.Log ("Coroutine ended, starting ThirdPhase");
        StartCoroutine ("ThirdPhase");
        yield break;
    }

    IEnumerator ThirdPhase () {
        Debug.Log ("3º Phase");
        currentphase = Phase.Third;
        GameManagerScript.Instance.Messages.SendMessage ("Tap on the same places on AR", 5);

        yield return new WaitUntil (() => touch == true);
        touch = false;

        arMarkers[0] = Instantiate (prefabMarker, Vector3.zero, Quaternion.identity);
        arMarkers[1] = Instantiate (prefabMarker, Vector3.zero, Quaternion.identity);
        arMarkers[0].SetActive (false);
        arMarkers[1].SetActive (false);

        Pose firstHit;
        Pose secondHit;

        while (currentphase == Phase.Third) {
            if (currentTouch.phase == TouchPhase.Began) {

                touchPos = currentTouch.position;
                Debug.Log ("Effective Touch");
                GetTouchLocationARVR (touchPos, true);
                firstHit = hitPose;
                arMarkers[0].transform.position = firstHit.position;
                arMarkers[0].SetActive (true);

                lines[1].enabled = true;
                lines[1].SetPosition (0, arMarkers[0].transform.position);

            }
            if (currentTouch.phase == TouchPhase.Moved) {

                touchPos = currentTouch.position;
                Debug.Log ("Effective Touch");
                GetTouchLocationARVR (touchPos, true);
                secondHit = hitPose;
                arMarkers[1].transform.position = secondHit.position;
                arMarkers[1].SetActive (true);

                lines[1].SetPosition (1, arMarkers[1].transform.position);

            }
            yield return new WaitForFixedUpdate ();
        }

        obj.transform.SetParent (vrMarkers[0].transform);
        vrMarkers[0].transform.localScale = new Vector3 (1, 1, 1);
        vrMarkers[0].transform.position = arMarkers[0].transform.position;

        Vector3 targetPostition = new Vector3 (arMarkers[1].transform.position.x,
            vrMarkers[0].transform.position.y,
            arMarkers[1].transform.position.z);
        vrMarkers[0].transform.LookAt (targetPostition);
        vrMarkers[0].transform.Rotate (0, 270, 0);

        obj.transform.SetParent(null);
        arMarkers[0].SetActive (false);
        arMarkers[1].SetActive (false);
        vrMarkers[0].SetActive (false);
        vrMarkers[1].SetActive (false);
        Debug.Log ("Last Coroutine ended");
        yield break;
    }
    private void GetTouchLocationARVR (Vector3 touchPos, bool raycastOnAR) {
        if (!raycastOnAR) {
            Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
            if (Physics.Raycast (ray, out hitObject, 1000f)) {
                //Hit OBJ hitObject.point
                Debug.Log ("Hit On OBJ");
                return;
            }
        }
        if (raycastManager.Raycast (touchPos, hits, trackableTypes : UnityEngine.XR.ARSubsystems.TrackableType.Planes)) { //Raycast on the trackable plane
            hitPose = hits[0].pose;
            //Hit ARPlane hitPose.position
            Debug.Log ("Hit On ARPlane");
            return;
        }
    }

    public void BtnState () {
        if (currentphase == Phase.First) {
            currentphase = Phase.Second;
        }
        if (currentphase == Phase.Second) {
            currentphase = Phase.Third;
        }
        if (currentphase == Phase.Third) {
            currentphase = Phase.Off;
        }

    }

    public void BtnRefreshARPlanes () {
        arSession.Reset ();
    }

    public void BtnImportNew () {
        Destroy (obj);
        ToggleAR (false);
        currentphase = Phase.Off;
        arMarkers[0].SetActive (false);
        arMarkers[1].SetActive (false);
        vrMarkers[0].SetActive (false);
        vrMarkers[1].SetActive (false);
    }

}