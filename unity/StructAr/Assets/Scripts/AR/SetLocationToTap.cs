using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.ARFoundation;

public class SetLocationToTap : MonoBehaviour {
    [Header ("OpacityStuff")]
    [SerializeField] bool toggleFadeObj = false;

    [Header ("ARStuff")]
    [SerializeField] ARPlaneManager planeManager;
    [SerializeField] ARRaycastManager raycastManager;
    [SerializeField] static List<ARRaycastHit> hits = new List<ARRaycastHit> ();
    
    [Header ("Prefabs")]
    [SerializeField] GameObject virtualObj;
    [SerializeField] GameObject sphereMarker;
    [SerializeField] Material virtualMat;

    [SerializeField] GameObject[] virtualMarkers = new GameObject[2];
    [SerializeField] GameObject[] realMarkers = new GameObject[2];
    bool switchReality = true; //true = real; false= 3d

    private void Start () {
        raycastManager = GetComponent<ARRaycastManager> ();
        planeManager = GetComponent<ARPlaneManager> ();
        planeManager.enabled = false;
    }

    private void Update () {
        touchStuff ();
        //clickStuff();
    }
    public void touchStuff () {
        if (Input.touchCount > 0) {
            Debug.Log ("Touch!");
            Touch touch = Input.GetTouch (0);
            if (touch.phase == TouchPhase.Began) {
                Debug.Log ("Touch phase");
                Vector3 touchPos = touch.position;
                if (EventSystem.current.IsPointerOverGameObject (touch.fingerId)) {
                    Debug.Log ("Clicked on the UI");
                    return;
                }
                if (switchReality) { //Raycast on the virtual world
                    Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
                    RaycastHit hitObject;
                    if (Physics.Raycast (ray, out hitObject, 1000f)) {
                        if (virtualMarkers[0] != null) {
                            Destroy (virtualMarkers[0]);
                        }
                        virtualMarkers[0] = Instantiate (sphereMarker, hitObject.point, Quaternion.identity);
                        virtualMarkers[0].GetComponent<Renderer> ().material = virtualMat;
                    }
                } else {
                    if (raycastManager.Raycast (touchPos, hits, trackableTypes : UnityEngine.XR.ARSubsystems.TrackableType.Planes)) { //Raycast on the trackable plane
                        var hitPose = hits[0].pose;
                        if (realMarkers[0] != null) {
                            Destroy (realMarkers[0]);
                        }
                        realMarkers[0] = Instantiate (sphereMarker, hitPose.position, hitPose.rotation);
                    }
                }
            }
        }
    }

    public void DoPositioningStuff () {
        if (!virtualObj.activeSelf) {
            virtualObj.SetActive (true);
        }
        if (virtualMarkers[0] == null || realMarkers[0] == null) {
            Debug.Log ("Not enough markers");
            GameManagerScript.Instance.Messages.SendMessage ("Not enough markers", 3);
            return;
        }
        virtualObj.transform.SetParent (virtualMarkers[0].transform);
        virtualMarkers[0].transform.position = realMarkers[0].transform.position;
    }

    public void SwitchRealityView () {
        switchReality = !switchReality;
        //virtualObj.SetActive(switchReality);
        foreach (var plane in planeManager.trackables)
            plane.gameObject.SetActive (!switchReality);

        planeManager.enabled = !switchReality;

        if (toggleFadeObj) {
            foreach (Transform child in virtualObj.transform) {
                Color color = child.GetComponent<Renderer> ().material.color;
                if (switchReality) { color.a = 1; } else { color.a = 0.5f; }
                child.GetComponent<Renderer> ().material.color = color;
            }
        } else { virtualObj.SetActive (switchReality); }
    }
}