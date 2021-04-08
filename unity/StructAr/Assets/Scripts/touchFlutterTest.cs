using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class touchFlutterTest : MonoBehaviour {
    void Update () {
        if (Input.GetMouseButtonDown (0)) {
            if (EventSystem.current.IsPointerOverGameObject ()) {
                Debug.Log ("Click on UI on" + EventSystem.current.currentSelectedGameObject.name);
            } else {
                Debug.Log ("No click on UI");
            }
        }
    }
}