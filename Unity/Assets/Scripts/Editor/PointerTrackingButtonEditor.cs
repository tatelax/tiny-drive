using Gameplay;
using UI;
using UnityEditor;
using UnityEditor.UI;
using UnityEngine;

[CustomEditor(typeof(PointerTrackingButton))]
[CanEditMultipleObjects]
public class PointerTrackingButtonEditor : ButtonEditor
{
    public override void OnInspectorGUI()
    {
        serializedObject.Update();

        PointerTrackingButton targetMyButton = (PointerTrackingButton)target;

        targetMyButton.RequiredDragAmount = EditorGUILayout.FloatField("Required Drag Amount", targetMyButton.RequiredDragAmount);
        
        EditorGUILayout.Space();

        serializedObject.ApplyModifiedProperties();
        
        base.OnInspectorGUI();
    }
}
