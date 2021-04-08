import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

void main() => runApp(MyApp());

class MyApp extends StatefulWidget {
  @override
  _MyAppState createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  static final GlobalKey<ScaffoldState> _scaffoldKey =
      GlobalKey<ScaffoldState>();
  UnityWidgetController _unityWidgetController;
  bool swapAR = false;
  @override
  void initState() {
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      darkTheme: ThemeData.dark(),
      home: Scaffold(
        key: _scaffoldKey,
        appBar: AppBar(
          title: const Text('StructAr -- v2.3.5'),
        ),
        body: Card(
          margin: const EdgeInsets.all(8),
          clipBehavior: Clip.antiAlias,
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(20.0),
          ),
          child: Stack(
            children: <Widget>[
              UnityWidget(
                onUnityCreated: onUnityCreated,
                onUnityMessage: onUnityMessage,
                onUnitySceneLoaded: onUnitySceneLoaded,
                fullscreen: false,
              ),
            ],
          ),
        ),
        floatingActionButton: FloatingActionButton(
          onPressed: () {
            btnState();
          },
          child: const Icon(Icons.add),
        ),
        drawer: Drawer(
          child: ListView(
            padding: EdgeInsets.zero,
            children: <Widget>[
              ListTile(
                  leading: Icon(Icons.file_upload),
                  title: Text("Abrir Arquivo"),
                  subtitle: Text("carrega novo projeto..."),
                  onTap: () {
                    btnExplorer();
                    toggleDrawer();
                  }),
              ListTile(
                  leading: Icon(Icons.refresh),
                  title: Text("Recomeçar"),
                  subtitle: Text("recomeça o processo..."),
                  onTap: () {
                    toggleDrawer();
                  }),
              ListTile(
                  leading: Icon(Icons.refresh),
                  title: Text("Refresh"),
                  subtitle: Text("refresh ARPlanes..."),
                  onTap: () {
                    btnRefreshARPlanes();
                    toggleDrawer();
                  }),
              ListTile(
                  leading: Icon(Icons.flip_camera_android_rounded),
                  title: Text("Alterar Realidade"),
                  subtitle: Text("alterna a AR..."),
                  onTap: () {
                    btnToggleAR();
                    toggleDrawer();
                  })
            ],
          ),
        ),
      ),
    );
  }

  // Communcation from Flutter to Unity
  void setRotationSpeed(String speed) {
    _unityWidgetController.postMessage(
      'Cube',
      'SetRotationSpeed',
      speed,
    );
  }

  void btnExplorer() {
    _unityWidgetController.postMessage('Importer', 'BtnExplorer', null);
  }

  void btnState() {
    _unityWidgetController.postMessage('GameManager', 'BtnState', null);
  }

  void btnRefreshARPlanes() {
    _unityWidgetController.postMessage(
        'GameManager', 'BtnRefreshARPlanes', null);
  }

  void btnToggleAR() {
    _unityWidgetController.postMessage('GameManager', 'ToggleAR', swapAR);
    swapAR = !swapAR;
  }

  void toggleDrawer() async {
    if (_scaffoldKey.currentState.isDrawerOpen) {
      _scaffoldKey.currentState.openEndDrawer();
    } else {
      _scaffoldKey.currentState.openDrawer();
    }
  }

  // Communication from Unity to Flutter
  void onUnityMessage(message) {
    print('Received message from unity: ${message.toString()}');
  }

  // Callback that connects the created controller to the unity controller
  void onUnityCreated(controller) {
    this._unityWidgetController = controller;
  }

  // Communication from Unity when new scene is loaded to Flutter
  void onUnitySceneLoaded(SceneLoaded sceneInfo) {
    print('Received scene loaded from unity: ${sceneInfo.name}');
    print(
        'Received scene loaded from unity buildIndex: ${sceneInfo.buildIndex}');
  }
}
