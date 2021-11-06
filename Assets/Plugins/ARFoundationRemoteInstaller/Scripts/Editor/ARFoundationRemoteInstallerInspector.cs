#if UNITY_EDITOR
using System;
using System.Linq;
using UnityEditor;
using UnityEditor.PackageManager;
using UnityEngine;
using UnityEngine.Assertions;
using Object = UnityEngine.Object;


namespace ARFoundationRemote.Editor {
    [CustomEditor(typeof(ARFoundationRemoteInstaller), true), CanEditMultipleObjects]
    public class ARFoundationRemoteInstallerInspector : UnityEditor.Editor {
        bool isARFoundationEmbedded;
        
        
        void OnEnable() {
            isARFoundationEmbedded = ARFoundationRemoteInstaller.getArf()?.source == PackageSource.Embedded;
            var instance = (ARFoundationRemoteInstaller) target;
            if (isARFoundationEmbedded) {
                #if AR_FOUNDATION_REMOTE_INSTALLED
                FixesForEditorSupport.Apply();
                #endif
            }
        }

        public override void OnInspectorGUI() {
            if (EditorApplication.isCompiling) {
                return;
            }
            
            DrawDefaultInspector();
            showMethodsInInspector(targets);
        }

        void showMethodsInInspector(params Object[] inspectorTargets) {
            GUILayout.Space(8);
            var instance = inspectorTargets.First() as ARFoundationRemoteInstaller;
            Assert.IsNotNull(instance);

            if (!isInstalled) {
                if (GUILayout.Button("Install Plugin")) {
                    instance.InstallPlugin();
                }
            } else {
                if (isARFoundationEmbedded) {
                    GUILayout.Space(16);
                    GUILayout.Label("AR Companion app", EditorStyles.boldLabel);
                    var boldButtonStyle = new GUIStyle(GUI.skin.button) {fontStyle = FontStyle.Bold};
                    if (GUILayout.Button("Install AR Companion App", boldButtonStyle)) {
                        execute(CompanionAppInstaller.BuildAndRun);
                    }

                    if (GUILayout.Button("Build AR Companion and show in folder", new GUIStyle(GUI.skin.button))) {
                        execute(CompanionAppInstaller.Build);
                    }

                    if (GUILayout.Button("Delete AR Companion app build folder")) {
                        execute(CompanionAppInstaller.DeleteCompanionAppBuildFolder);
                    }

                    GUILayout.Space(8);
                    if (GUILayout.Button("Open Settings", boldButtonStyle)) {
                        #if AR_FOUNDATION_REMOTE_INSTALLED
                        SettingsService.OpenProjectSettings($"Project/XR Plug-in Management/{Runtime.Constants.packageName}");
                        #endif
                    }

                    GUILayout.Space(16);
                    /*if (GUILayout.Button("Apply AR Foundation fixes")) {
                        AutoARFoundationFixes.Enabled = true;
                        #if AR_FOUNDATION_REMOTE_INSTALLED
                            FixesForEditorSupport.Apply();
                        #endif
                    }*/

                    /*if (GUILayout.Button("Undo AR Foundation fixes")) {
                        AutoARFoundationFixes.Enabled = false;
                        #if AR_FOUNDATION_REMOTE_INSTALLED
                        FixesForEditorSupport.Undo();
                        #endif
                    }*/
                } else {
                    if (GUILayout.Button("Embed AR Foundation Package")) {
                        ARFoundationRemoteInstaller.EmbedARFoundation();
                    }        
                }
            
                GUILayout.Space(16);
                GUILayout.Label("Plugin", EditorStyles.boldLabel);
                if (!isARFoundationEmbedded && GUILayout.Button("Un-install Plugin", new GUIStyle(GUI.skin.button) {normal = {textColor = Color.red}})) {
                    instance.UnInstallPlugin();
                }
            }
            
            if (isARFoundationEmbedded && GUILayout.Button("Un-embed AR Foundation Package")) {
                ARFoundationRemoteInstaller.UnEmbedARFoundation();
            }

            #if AR_FOUNDATION_REMOTE_INSTALLED
            ARFoundationRemoteLoaderSettingsInspector.TryDrawVersionUpgrade();
            #endif
            
            /*if (GUILayout.Button("DEBUG")) {
            }*/
        }

        static bool isInstalled {
            get {
                return
                #if AR_FOUNDATION_REMOTE_INSTALLED
                    true;
                #else
                    false;
                #endif
            }
        }
        
        static void execute(Action action) {
            action();
        }
    }
}
#endif // UNITY_EDITOR
