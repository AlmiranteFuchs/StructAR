using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIController : MonoBehaviour {
    private bool _UILocked;
    public bool UILocked { get { return _UILocked; } set { } }
    public void BlockUI (bool state) {
        _UILocked = state;
    }
}