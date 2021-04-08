using UnityEngine;
using UnityEngine.Android;

namespace AsImpL {

    public class OBJImporterCaller : MonoBehaviour {
        [SerializeField]
        private string filePath = "models/OBJ_test/objtest_zup.obj";
        [SerializeField]
        private string objectName = "MyObject";
        [SerializeField]
        private ImportOptions importOptions = new ImportOptions ();

        [SerializeField]
        private PathSettings pathSettings;
        private ObjectImporter objImporter;

        private void Awake () {
            objImporter = gameObject.GetComponent<ObjectImporter> ();
            if (objImporter == null) {
                objImporter = gameObject.AddComponent<ObjectImporter> ();
            }
        }

        private void OnValidate () {
            if (pathSettings == null) {
                pathSettings = PathSettings.FindPathComponent (gameObject);
            }
        }

        /*  public void OnPathChanged (string _filePath) {
             //Called by TxtInput Changes
             filePath = pathSettings.RootPath + _filePath;
             Debug.Log (filePath);
         } */
        public void LoadObj (string _filePath) {
            //Called by button pressing
            if (checkPermission ()) {
                filePath = pathSettings.RootPath + _filePath;
                objImporter.ImportModelAsync (objectName, filePath, null, importOptions);
            }
        }
        private bool checkPermission () {
            if (Permission.HasUserAuthorizedPermission (Permission.ExternalStorageRead)) {
                // The user authorized;
                return true;
            } else {
                // We do not have permission;
                // Ask for permission or proceed without the functionality enabled.
                Permission.RequestUserPermission (Permission.ExternalStorageRead);
                return false;
            }
        }
    }
}