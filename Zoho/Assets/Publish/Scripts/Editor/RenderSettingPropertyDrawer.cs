using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
using UnityEditorInternal;
#endif
using Kit.Editor;

namespace CyberUI
{
    [CustomPropertyDrawer(typeof(RandomCircleMatrix.RenderSetting))]
    public class RenderSettingPropertyDrawer : PropertyDrawerExtend
    {
        private GUIContent TagLayerField = new GUIContent("Tag Layer");
        private GUIContent SortingLayerField = new GUIContent("Sorting Layer");
        private GUIContent LayerField = new GUIContent("GameObject Layer");
        public override void OnPreviewGUI(Rect position, SerializedProperty property, GUIContent label, bool preview = true)
        {
            base.OnPreviewGUI(position, property, label, preview);
            EditorGUI.BeginProperty(position, label, property);
            
            property.isExpanded = EditorGUI.Foldout(NewLine(position), property.isExpanded, "Render Setting");
            if (property.isExpanded)
            {
                EditorGUI.indentLevel++;
                EditorGUIExtend.LayerField(NextLine(), property.FindPropertyRelative("layerId"), LayerField);
                AddHeight(10f);
                EditorGUIExtend.TagField(NextLine(), property.FindPropertyRelative("layerTag"), TagLayerField);
                AddHeight(10f);
                EditorGUIExtend.SortingLayerField(NextLine(), property.FindPropertyRelative("sortingLayerId"));
                EditorGUI.PropertyField(NextLine(), property.FindPropertyRelative("sortingOrder"));
                EditorGUI.indentLevel--;
            }

            EditorGUI.EndProperty();
        }
    }
}