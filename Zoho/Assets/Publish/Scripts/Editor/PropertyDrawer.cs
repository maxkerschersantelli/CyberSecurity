using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;

namespace Kit.Editor
{
    public class PropertyDrawerExtend : UnityEditor.PropertyDrawer
    {
        #region layout tools
        private Rect initArea;
        private Rect drawArea;
        private bool IsPreview = false;
        protected Rect NewLine(Rect rect, float percent = 1f)
        {
            initArea = rect;
            drawArea = new Rect(rect.x, rect.y, (percent >= 1f) ? rect.width : rect.width * percent, EditorGUIUtility.singleLineHeight);
            height = drawArea.y + drawArea.height + EditorGUIUtility.standardVerticalSpacing;
            return drawArea;
        }
        protected Rect NextLine(float percent = 1f, float overrideHeight = -1f)
        {
            Rect tmp = initArea;
            drawArea = new Rect(
                tmp.x,
                drawArea.y + drawArea.height,
                (percent >= 1f) ? tmp.width : tmp.width * percent,
                (overrideHeight >= 0f) ? overrideHeight : EditorGUIUtility.singleLineHeight);
            height = drawArea.y + drawArea.height + EditorGUIUtility.standardVerticalSpacing;
            return drawArea;
        }
        protected Rect CurrentLine(float percent = 1f, object leftDrawArea = null)
        {
            if (percent >= 1f)
                return drawArea;
            else
            {
                Rect leftSide = (ReferenceEquals(leftDrawArea, null)) ? drawArea : (Rect)leftDrawArea;
                drawArea = new Rect(leftSide.x + leftSide.width, drawArea.y, initArea.width * percent, drawArea.height);
                return drawArea;
            }
        }
        protected enum OverrideAnchor{x=0,y,width,height}
        protected Rect CurrentAnchor(OverrideAnchor anchor, float value)
        {
            Rect rst = new Rect(CurrentLine());
            switch(anchor)
            {
                case OverrideAnchor.x: rst.x = value; break;
                case OverrideAnchor.y: rst.y = value; break;
                case OverrideAnchor.width: rst.width = value; break;
                case OverrideAnchor.height: rst.height = value; break;
            }
            return rst;
        }
        protected void DrawLine(float height=5f, float margin=1f)
        {
            AddHeight(margin);
            NextLine(1f, height);
            GUI.Box(CurrentAnchor(OverrideAnchor.height, height), GUIContent.none, GUI.skin.textArea);
            AddHeight(height + margin);
        }

        private Rect boxArea;
        protected void BeginDrawBox()
        {
            boxArea = new Rect(CurrentLine());
        }
        protected Rect EndDrawBox()
        {
            boxArea.height = CurrentHeight - boxArea.y;
            if (!IsPreview) GUI.Box(boxArea, GUIContent.none);
            return boxArea;
        }
        #endregion

        #region height calculate
        private float height;
        protected float CurrentHeight { get { return height; } }
        protected void FixHeight(SerializedProperty property, bool condition = false)
        {
            if (property.isExpanded || condition)
                AddHeight(EditorGUI.GetPropertyHeight(property));
        }
        protected void AddHeight(float fix)
        {
            // Hotfix : for adjust height on special layout.
            drawArea.height += fix;
            if( drawArea.height < 0f)
            {   // Negative number cannot less than zero.
                drawArea.y += (drawArea.y + drawArea.height < 0f) ? -drawArea.y : drawArea.height;
                drawArea.height = 0f;
            }
            height += (height + fix < 0f) ? -height : fix;
        }
        #endregion

        #region Drawer
        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            // Hack : displayed but you can't see it.
            GUI.BeginGroup(new Rect());
            OnPreviewGUI(new Rect(), property, GUIContent.none, true);
            GUI.EndGroup();
            return this.CurrentHeight;
        }
        public virtual void OnPreviewGUI(Rect position, SerializedProperty property, GUIContent label, bool preview = true)
        {
            // Your OnGUI code here, instead of write it in OnGUI;
            IsPreview = preview;
        }
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            OnPreviewGUI(position, property, label, false);
        }
        #endregion
    }
}
#endif