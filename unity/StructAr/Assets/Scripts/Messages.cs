using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Messages : MonoBehaviour {
    [SerializeField] Text text;
    private void Start () {
        text.enabled = false;
    }

    public void SendMessage (string message, float time) {
        text.enabled = true;
        text.text = message;
        StartCoroutine (ShowAndGo (time));
    }

    IEnumerator ShowAndGo (float time) {
        yield return new WaitForSeconds (time);
        text.enabled = false;

    }
}