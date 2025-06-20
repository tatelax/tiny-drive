﻿#if UNITY_EDITOR

using NWH.Common.AssetInfo;
using NWH.Common.WelcomeMessage;
using NWH.NUI;
using UnityEditor;
using UnityEngine;

namespace NWH.VehiclePhysics2
{
    /// <summary>
    ///     Inspector for VehicleController.
    /// </summary>
    [CustomEditor(typeof(VehicleController))]
    [CanEditMultipleObjects]
    public partial class VehicleControllerEditor : NVP_NUIEditor
    {
        private GUIStyle _editorBackgroundStyle;
        private GUIStyle _editorTabStyle;
        private float    _logoHeight;

        private GUIStyle          staticRectStyle;
        private VehicleController vehicleController;


        public override bool OnInspectorNUI()
        {
            if (!base.OnInspectorNUI())
            {
                return false;
            }

            vehicleController = (VehicleController) target;

            Rect awakeButtonRect = new Rect(drawer.positionRect.x + drawer.positionRect.width - 58f,
                                            drawer.positionRect.y - 20f,
                                            56f, 15f);

            // Draw logo texture
            Rect logoRect = drawer.positionRect;
            logoRect.height = 60f;
            drawer.DrawEditorTexture(logoRect, "NWH Vehicle Physics/Editor/logo_bg", ScaleMode.ScaleAndCrop);
            drawer.DrawEditorTexture(
                new Rect(logoRect.x + 8f, logoRect.y + 11f, logoRect.width - 8f, logoRect.height - 22f),
                "NWH Vehicle Physics/Editor/logo_light", ScaleMode.ScaleToFit);
            drawer.AdvancePosition(logoRect.height);

            // Draw awake button
            Color initGUIColor = GUI.color;
            GUI.color = vehicleController.IsAwake ? NUISettings.enabledColor : NUISettings.disabledColor;
            GUIStyle awakeButtonStyle = new GUIStyle(EditorStyles.miniButton);
            awakeButtonStyle.fixedHeight = 15f;

            if (Application.isPlaying)
            {
                if (GUI.Button(awakeButtonRect, vehicleController.IsAwake ? "AWAKE" : "ASLEEP", awakeButtonStyle))
                {
                    if (vehicleController.IsAwake)
                    {
                        vehicleController.Sleep();
                    }
                    else
                    {
                        vehicleController.Wake();
                    }
                }

                GUI.color = initGUIColor;

                // Draw lod text
                Rect lodRect = awakeButtonRect;
                lodRect.y += 22f;
                GUI.Label(lodRect, "LOD " + vehicleController.activeLODIndex, EditorStyles.whiteMiniLabel);
            }

            GUI.color = initGUIColor;

            
            if (Application.isPlaying)
            {
                drawer.Info("Performance will be somewhat reduced while VehicleController inspector is open due to its complexity.\n" +
                            "When doing any performance testing please collapse or close this inspector window.");
            }
            
            if (Time.fixedDeltaTime >= 0.02f)
            {
                drawer.Info("Current Project Settings > Time > Fixed Timestep is higher than 0.02.\n " +
                            "For best results use 0.02 (50Hz physics update) or lower for desktop (0.016667, 0.01333 or 0.01).");
            }


            // Draw toolbar
            int categoryTab = drawer.HorizontalToolbar("categoryTab",
                                                       new[]
                                                       {
                                                           "Sound", "FX", "PWR", "Control", "Modules",
                                                           "Settings", "About",
                                                       }, true, true);
            drawer.Space(2);

            if (categoryTab == 0) // FX
            {
                drawer.Property("soundManager");
            }
            else if (categoryTab == 1)
            {
                int fxTab = drawer.HorizontalToolbar("fxTab",
                                                     new[] {"Effects", "Grnd. Det.", "Damage",}, true, true);
                drawer.Space(2);

                if (fxTab == 0) // Effects
                {
                    drawer.Property("effectsManager");
                }
                else if (fxTab == 1)
                {
                    drawer.Property("groundDetection");
                }
                else if (fxTab == 2)
                {
                    drawer.Property("damageHandler");
                }
            }
            else if (categoryTab == 2) // Powertrain
            {
                drawer.Property("powertrain");
            }                          // Powertrain
            else if (categoryTab == 3) // Control
            {
                int controlTab =
                    drawer.HorizontalToolbar("controlTab", new[] {"Input", "Steering", "Brakes",}, true, true);
                switch (controlTab)
                {
                    case 0:
                        DrawInputTab();
                        break;
                    case 1:
                        drawer.Property("steering");
                        break;
                    case 2:
                        drawer.Property("brakes");
                        break;
                }
            }
            else if (categoryTab == 4) // Modules
            {
                DrawModulesTab(vehicleController);
            }                          // Modules
            else if (categoryTab == 5) // Settings
            {
                DrawSettingsTab();
            }
            else if (categoryTab == 6)
            {
                DrawAboutTab();
            }

            if (drawer.totalHeight < 800)
            {
                drawer.totalHeight = 800;
            }

            drawer.EndEditor(this);
            return true;
        }


        public override bool UseDefaultMargins()
        {
            return false;
        }


        private void DrawInputTab()
        {
            drawer.Property("input");
        }


        private void DrawModulesTab(VehicleController vc)
        {
            drawer.Property("moduleManager");
        }

        private void DrawAboutTab()
        {
            AssetInfo assetInfo = Resources.Load("NWH Vehicle Physics/NWH Vehicle Physics 2 AssetInfo") as AssetInfo;
            if (assetInfo == null)
            {
                return;
            }
            
            GUILayout.Space(drawer.positionRect.y - 20f);
            WelcomeMessageWindow.DrawWelcomeMessage(assetInfo, drawer.positionRect.width - 20f);
        }

        private void DrawSettingsTab()
        {
            drawer.Header("Settings");

            drawer.BeginSubsection("Actions");
            if (drawer.Button("Validate Setup"))
            {
                vehicleController.Validate();
            }

            drawer.EndSubsection();

            drawer.BeginSubsection("Physics Sub-stepping");
            drawer.Field("lowSpeedSubsteps");
            drawer.Field("highSpeedSubsteps");
            drawer.Field("asleepSubsteps");
            drawer.EndSubsection();

            drawer.BeginSubsection("Physical Properties");

            if (!Application.isPlaying)
            {
                drawer.Field("vehicleDimensions");
                drawer.Info("Make sure to use 'Calculate Inertia Tensor' after adjusting vehicle dimensions.");

                drawer.BeginSubsection("Center Of Mass");
                drawer.Field("centerOfMass");
                if (drawer.Button("Calculate Center Of Mass"))
                {
                    vehicleController.UpdateCenterOfMass();
                    Undo.RecordObject(vehicleController, "Update CoM");
                    EditorUtility.SetDirty(vehicleController);
                }
                drawer.EndSubsection();

                drawer.BeginSubsection("Inertia");
                drawer.Field("inertiaTensor");
                if (drawer.Button("Calculate Inertia Tensor"))
                {
                    vehicleController.UpdateInertiaTensor();
                    Undo.RecordObject(vehicleController, "Update Inertia Tensor");
                    EditorUtility.SetDirty(vehicleController);
                }
                drawer.EndSubsection();

                drawer.BeginSubsection("Rigidbody");
                drawer.Field("interpolation");
                drawer.Field("mass", true, "kg");
                drawer.Field("drag");
                drawer.Field("angularDrag");
                drawer.Field("maxAngularVelocity");
                drawer.Field("physicsMaterial");
                drawer.EndSubsection();
            }
            else
            {
                drawer.Info("Physical properties can only be adjusted out of play mode.");
            }

            drawer.EndSubsection();

            drawer.BeginSubsection("State Settings");
            drawer.Field("awakeOnStart");
            drawer.Field("stateSettings");
            if (vehicleController.stateSettings == null)
            {
                drawer.Info("StateSettings not assigned. To use component states and LODs assign StateSettings.",
                            MessageType.Warning);
            }

            drawer.EndSubsection();

            drawer.BeginSubsection("LODs");
            drawer.Info("Individual LOD settings can be changed through StateSettings above.");
            drawer.Field("updateLODs", true, null, "Update LODs");
            if (!drawer.Field("useCameraMainForLOD", true, null, "Use Camera.main For LOD").boolValue)
            {
                drawer.Field("LODCamera");
            }

            if (Application.isPlaying)
            {
                drawer.Label($"Distance To Camera: {vehicleController.vehicleToCamDistance}m");
                string lodName = vehicleController.activeLOD != null ? vehicleController.activeLOD.name : "[not set]";
                drawer.Label($"Active LOD: {vehicleController.activeLODIndex} ({lodName})");
            }
            else
            {
                drawer.Info("Enter play mode to view LOD debug data.");
            }

            drawer.EndSubsection();

            drawer.BeginSubsection("Positions");
            drawer.Field("enginePosition");
            drawer.Field("transmissionPosition");
            drawer.Field("exhaustPosition");
            drawer.EndSubsection();

            drawer.BeginSubsection("General");
            drawer.Field("freezeWhileAsleep");
            drawer.Field("freezeWhileIdle");
            drawer.Info("Freeze options should not be used with trailers due to problems with joints and Rigidbody constraints.");
            drawer.Space();
            drawer.Field("longitudinalSlipThreshold");
            drawer.Field("lateralSlipThreshold");
            drawer.Info("Slip threshold values are used only for effects and sound and do not affect handling.");
            drawer.EndSubsection();

            drawer.Space(50f);
        }
    }
}
#endif