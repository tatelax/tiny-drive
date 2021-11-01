using Gameplay;
using UI;
using UnityEditor;
using UnityEditor.UI;
using UnityEngine;
using UnityEngine.UI;

[CustomEditor(typeof(PointerTrackingButton))]
[CanEditMultipleObjects]
public class PointerTrackingButtonEditor : ButtonEditor
{
    public override void OnInspectorGUI()
    {
        serializedObject.Update();

        PointerTrackingButton targetMyButton = (PointerTrackingButton)target;

        targetMyButton.ScrollRect = (ScrollRect)EditorGUILayout.ObjectField("Scroll Rect (Optional)", targetMyButton.ScrollRect, typeof(ScrollRect), true);
        targetMyButton.RequiredDragAmount = EditorGUILayout.FloatField("Required Drag Amount", targetMyButton.RequiredDragAmount);
        targetMyButton.HoldDownTime = EditorGUILayout.FloatField("Hold Down Time", targetMyButton.HoldDownTime);
        
        EditorGUILayout.Space();

        serializedObject.ApplyModifiedProperties();
        
        base.OnInspectorGUI();
    }
}
