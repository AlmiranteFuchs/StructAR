using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class GameManagerScript : MonoBehaviour {
    private static GameManagerScript _instance;
    public static GameManagerScript Instance { get { return _instance; } }
    private void Awake () {
        if (_instance != null && _instance != this) {
            Destroy (this.gameObject);
        } else {
            _instance = this;
        }
    }

    [Header ("Scripts")]
    public ARSession ARSession;
    public ARSessionOrigin ARSessionOrigin;
    public ARManager ARManager;
    public AsImpL.FileBrowserToImport browserToImport;

    [Header ("Components")]
    public GameObject ImportedOBJ;
    public Messages Messages;
    public Camera ARcamera;
    public Camera MainCamera;

    public ARPlaneManager planeManager;
    public ARRaycastManager raycastManager;

    private void Start () {
        Messages = this.gameObject.GetComponent<Messages> ();
    }

}