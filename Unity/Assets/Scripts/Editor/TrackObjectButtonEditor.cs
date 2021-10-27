using Gameplay;
using UI;
using UnityEditor;
using UnityEditor.UI;
using UnityEngine;

[CustomEditor(typeof(PointerTrackingButton))]
[CanEditMultipleObjects]
public class TrackObjectButtonEditor : ButtonEditor
{
    public override void OnInspectorGUI()
    {
        serializedObject.Update();

        PointerTrackingButton targetMyButton = (PointerTrackingButton)target;
        EditorGUILayout.HelpBox("Custom Data For Spawning Track Objects", MessageType.Info);

        targetMyButton.DragAmountBeforeSpawn = EditorGUILayout.FloatField("Drag Amount Before Spawn", targetMyButton.DragAmountBeforeSpawn);
        targetMyButton.ObjAddress = EditorGUILayout.TextField("Object Address", targetMyButton.ObjAddress);
        
        EditorGUILayout.Space();

        serializedObject.ApplyModifiedProperties();
        
        base.OnInspectorGUI();
    }
}
