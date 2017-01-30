#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;
using UnityEditorInternal;
using System;
using System.Reflection;

namespace Kit.Editor
{
    public sealed class EditorGUIExtend
    {
        #region SortingLayer
        public static string[] GetSortingLayerNames()
        {
            Type internalEditorUtilityType = typeof(InternalEditorUtility);
            PropertyInfo sortingLayersProperty = internalEditorUtilityType.GetProperty("sortingLayerNames", BindingFlags.Static | BindingFlags.NonPublic);
            return (string[])sortingLayersProperty.GetValue(null, new object[0]);
        }
        public static int[] GetSortingLayerUniqueIDs()
        {
            Type internalEditorUtilityType = typeof(InternalEditorUtility);
            PropertyInfo sortingLayerUniqueIDsProperty = internalEditorUtilityType.GetProperty("sortingLayerUniqueIDs", BindingFlags.Static | BindingFlags.NonPublic);
            return (int[])sortingLayerUniqueIDsProperty.GetValue(null, new object[0]);
        }
        public static int SortingLayerField(Rect position, SerializedProperty property)
        {
            return SortingLayerField(position, property, property.displayName);
        }
        public static int SortingLayerField(Rect position, SerializedProperty property, string label)
        {
            int selectedIndex = property.intValue;
            string[] values = GetSortingLayerNames();
            EditorGUI.BeginChangeCheck();
            selectedIndex = EditorGUI.Popup(position, label, selectedIndex, values);
            if (selectedIndex >= values.Length)
            {
                selectedIndex = 0; // hotfix
                property.intValue = selectedIndex;
            }
            if(GUI.changed)
            {
                property.intValue = selectedIndex;
            }
            EditorGUI.EndChangeCheck();
            return selectedIndex;
        }
        #endregion

        #region Tag
        public static string TagField(Rect position, SerializedProperty property, GUIContent label)
        {
            string layerName = property.stringValue;
            EditorGUI.BeginChangeCheck();
            {
                if (string.IsNullOrEmpty(layerName))
                {
                    layerName = "Untagged";
                    property.stringValue = layerName;
                }
                layerName = EditorGUI.TagField(position, label, layerName);
                if (GUI.changed)
                {
                    property.stringValue = layerName;
                }
            }
            EditorGUI.EndChangeCheck();
            return layerName;
        }
        #endregion

        #region LayerField
        public static int LayerField(Rect position, SerializedProperty property, GUIContent label)
        {
            int layerId = property.intValue;
            EditorGUI.BeginChangeCheck();
            {
                layerId = EditorGUI.LayerField(position, label, layerId);
                if (GUI.changed)
                    property.intValue = layerId;
            }
            EditorGUI.EndChangeCheck();
            return layerId;
        }
        #endregion
    }
}

#endif