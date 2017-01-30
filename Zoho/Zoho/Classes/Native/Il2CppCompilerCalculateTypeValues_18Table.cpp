#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MovingCharacterController552840279.h"
#include "AssemblyU2DCSharp_RotatingCube1799172045.h"
#include "AssemblyU2DCSharp_CardboardControl480265927.h"
#include "AssemblyU2DCSharp_CardboardControlBox1066235268.h"
#include "AssemblyU2DCSharp_CardboardControlGaze2988657900.h"
#include "AssemblyU2DCSharp_CardboardControlReticle1717251949.h"
#include "AssemblyU2DCSharp_CardboardControlReticle_FadeStat3999341363.h"
#include "AssemblyU2DCSharp_CardboardControlReticle_ColorFad2579923005.h"
#include "AssemblyU2DCSharp_CardboardControlReticle_AlphaFade5344440.h"
#include "AssemblyU2DCSharp_CardboardControlTrigger3854223601.h"
#include "AssemblyU2DCSharp_CardboardControlTrigger_TriggerS2305547831.h"
#include "AssemblyU2DCSharp_ParsedMagnetData1462532421.h"
#include "AssemblyU2DCSharp_ParsedMagnetData_MagnetMoment1734236852.h"
#include "AssemblyU2DCSharp_ParsedMagnetData_MagnetWindowSta3440928333.h"
#include "AssemblyU2DCSharp_ParsedMagnetData_TriggerState1325291107.h"
#include "AssemblyU2DCSharp_ParsedTouchData214248024.h"
#include "AssemblyU2DCSharp_Fading2096705625.h"
#include "AssemblyU2DCSharp_CubeEnemyBehavior2181416869.h"
#include "AssemblyU2DCSharp_PointDisplay3071954226.h"
#include "AssemblyU2DCSharp_SphereEnemyBehavior1564230413.h"
#include "AssemblyU2DCSharp_GameOverUI2508142874.h"
#include "AssemblyU2DCSharp_LevelController812318240.h"
#include "AssemblyU2DCSharp_LevelController_U3CSwitchSceneU32311110386.h"
#include "AssemblyU2DCSharp_LevelController_U3CWaveOneCoU3Ec4247225234.h"
#include "AssemblyU2DCSharp_LevelController_U3CWaveTwoCoU3Ec2041341677.h"
#include "AssemblyU2DCSharp_LevelController_U3CWaveThreeCoU33366550492.h"
#include "AssemblyU2DCSharp_LevelController_U3CWaveFourCoU3E2929823497.h"
#include "AssemblyU2DCSharp_BulletBehavior979510676.h"
#include "AssemblyU2DCSharp_Shooting4014346115.h"
#include "AssemblyU2DCSharp_Shooting_U3CWaitToShootU3Ec__Ite1059091075.h"
#include "AssemblyU2DCSharp_GreenPowerUp1055926813.h"
#include "AssemblyU2DCSharp_GreenShield3715298348.h"
#include "AssemblyU2DCSharp_GreenShield_U3CEndShieldU3Ec__Ite519869784.h"
#include "AssemblyU2DCSharp_ScoreKeeper2936965124.h"
#include "AssemblyU2DCSharp_TargetBehavior3211801379.h"
#include "AssemblyU2DCSharp_ControllerDemoManager1306021614.h"
#include "AssemblyU2DCSharp_Teleport2999409483.h"
#include "AssemblyU2DCSharp_GvrHead2074018243.h"
#include "AssemblyU2DCSharp_GvrHead_HeadUpdatedDelegate4119218932.h"
#include "AssemblyU2DCSharp_GvrCameraUtils3751592777.h"
#include "AssemblyU2DCSharp_GvrEye2145111534.h"
#include "AssemblyU2DCSharp_GvrPostRender3571076089.h"
#include "AssemblyU2DCSharp_GvrPreRender2492587030.h"
#include "AssemblyU2DCSharp_GvrProfile2868291302.h"
#include "AssemblyU2DCSharp_GvrProfile_Screen3577771989.h"
#include "AssemblyU2DCSharp_GvrProfile_Lenses3379109269.h"
#include "AssemblyU2DCSharp_GvrProfile_MaxFOV3404298290.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion2316389254.h"
#include "AssemblyU2DCSharp_GvrProfile_Viewer3668830587.h"
#include "AssemblyU2DCSharp_GvrProfile_ScreenSizes4088223165.h"
#include "AssemblyU2DCSharp_GvrProfile_ViewerTypes962081726.h"
#include "AssemblyU2DCSharp_StereoController1637909972.h"
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU33320551400.h"
#include "AssemblyU2DCSharp_StereoRenderEffect4012593919.h"
#include "AssemblyU2DCSharp_Gvr_Internal_BaseVRDevice591083105.h"
#include "AssemblyU2DCSharp_Gvr_Internal_GvrDevice2458844523.h"
#include "AssemblyU2DCSharp_Gvr_Internal_iOSDevice141998261.h"
#include "AssemblyU2DCSharp_GvrAudio4159038547.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality3830609699.h"
#include "AssemblyU2DCSharp_GvrAudio_SpatializerType3928244512.h"
#include "AssemblyU2DCSharp_GvrAudioListener2617838119.h"
#include "AssemblyU2DCSharp_GvrAudioRoom252475342.h"
#include "AssemblyU2DCSharp_GvrAudioRoom_SurfaceMaterial3675539603.h"
#include "AssemblyU2DCSharp_GvrAudioSoundfield1975836158.h"
#include "AssemblyU2DCSharp_GvrAudioSource2139450958.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorClientSocke2137111857.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig3000403349.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig_Mode884064821.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent3657941864.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent2349426533.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent2112311150.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_A926435919.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3710907716.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation3989687101.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent200175493.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent3065328481.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager622010154.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnG1752883023.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnA1207501038.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnTo970385655.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnO2004619270.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnB1240547244.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_U3C2571948939.h"
#include "AssemblyU2DCSharp_proto_Proto_PhoneEvent4294543246.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent1948414762.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types1856670140.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type923828173.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2659645585.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1994437979.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEven190725481.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1865844949.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2183502845.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Gyroscope2921203048.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Gyroscope3312050644.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerome148610782.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1359586634.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE3758135118.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (MovingCharacterController_t552840279), -1, sizeof(MovingCharacterController_t552840279_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1800[7] = 
{
	MovingCharacterController_t552840279::get_offset_of_speed_2(),
	MovingCharacterController_t552840279::get_offset_of_reticleMaxLength_3(),
	MovingCharacterController_t552840279::get_offset_of_laserPrefab_4(),
	MovingCharacterController_t552840279_StaticFields::get_offset_of_cardboard_5(),
	MovingCharacterController_t552840279::get_offset_of_moving_6(),
	MovingCharacterController_t552840279::get_offset_of_reticleTimer_7(),
	MovingCharacterController_t552840279::get_offset_of_evenLaser_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (RotatingCube_t1799172045), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1801[3] = 
{
	RotatingCube_t1799172045::get_offset_of_xRotationSpeed_2(),
	RotatingCube_t1799172045::get_offset_of_yRotationSpeed_3(),
	RotatingCube_t1799172045::get_offset_of_zRotationSpeed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (CardboardControl_t480265927), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1802[7] = 
{
	0,
	CardboardControl_t480265927::get_offset_of_trigger_3(),
	CardboardControl_t480265927::get_offset_of_gaze_4(),
	CardboardControl_t480265927::get_offset_of_box_5(),
	CardboardControl_t480265927::get_offset_of_reticle_6(),
	CardboardControl_t480265927::get_offset_of_cooldownCounter_7(),
	CardboardControl_t480265927::get_offset_of_eventCooldown_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (CardboardControlBox_t1066235268), -1, sizeof(CardboardControlBox_t1066235268_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1803[9] = 
{
	0,
	CardboardControlBox_t1066235268::get_offset_of_useEventCooldowns_3(),
	CardboardControlBox_t1066235268::get_offset_of_vibrateOnOrientationTilt_4(),
	CardboardControlBox_t1066235268::get_offset_of_tiltKey_5(),
	CardboardControlBox_t1066235268::get_offset_of_tiltReported_6(),
	CardboardControlBox_t1066235268::get_offset_of_cardboard_7(),
	CardboardControlBox_t1066235268::get_offset_of_OnTilt_8(),
	CardboardControlBox_t1066235268_StaticFields::get_offset_of_U3CU3Ef__amU24cache6_9(),
	CardboardControlBox_t1066235268_StaticFields::get_offset_of_U3CU3Ef__switchU24map0_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (CardboardControlGaze_t2988657900), -1, sizeof(CardboardControlGaze_t2988657900_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1804[18] = 
{
	CardboardControlGaze_t2988657900::get_offset_of_maxDistance_2(),
	CardboardControlGaze_t2988657900::get_offset_of_layerMask_3(),
	CardboardControlGaze_t2988657900::get_offset_of_useEventCooldowns_4(),
	CardboardControlGaze_t2988657900::get_offset_of_vibrateOnChange_5(),
	CardboardControlGaze_t2988657900::get_offset_of_vibrateOnStare_6(),
	CardboardControlGaze_t2988657900::get_offset_of_stareTimeThreshold_7(),
	CardboardControlGaze_t2988657900::get_offset_of_previousObject_8(),
	CardboardControlGaze_t2988657900::get_offset_of_currentObject_9(),
	CardboardControlGaze_t2988657900::get_offset_of_gazeStartTime_10(),
	CardboardControlGaze_t2988657900::get_offset_of_head_11(),
	CardboardControlGaze_t2988657900::get_offset_of_hit_12(),
	CardboardControlGaze_t2988657900::get_offset_of_isHeld_13(),
	CardboardControlGaze_t2988657900::get_offset_of_stared_14(),
	CardboardControlGaze_t2988657900::get_offset_of_cardboard_15(),
	CardboardControlGaze_t2988657900::get_offset_of_OnChange_16(),
	CardboardControlGaze_t2988657900::get_offset_of_OnStare_17(),
	CardboardControlGaze_t2988657900_StaticFields::get_offset_of_U3CU3Ef__amU24cache10_18(),
	CardboardControlGaze_t2988657900_StaticFields::get_offset_of_U3CU3Ef__amU24cache11_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (CardboardControlReticle_t1717251949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1805[7] = 
{
	CardboardControlReticle_t1717251949::get_offset_of_fadeTime_2(),
	CardboardControlReticle_t1717251949::get_offset_of_startHidden_3(),
	CardboardControlReticle_t1717251949::get_offset_of_layerMask_4(),
	CardboardControlReticle_t1717251949::get_offset_of_prefab_5(),
	CardboardControlReticle_t1717251949::get_offset_of_reticle_6(),
	CardboardControlReticle_t1717251949::get_offset_of_colorFade_7(),
	CardboardControlReticle_t1717251949::get_offset_of_alphaFade_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (FadeState_t3999341363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1806[3] = 
{
	FadeState_t3999341363::get_offset_of_counter_0(),
	FadeState_t3999341363::get_offset_of_fadeTime_1(),
	FadeState_t3999341363::get_offset_of_reticle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (ColorFade_t2579923005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1807[2] = 
{
	ColorFade_t2579923005::get_offset_of_target_3(),
	ColorFade_t2579923005::get_offset_of_source_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (AlphaFade_t5344440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1808[2] = 
{
	AlphaFade_t5344440::get_offset_of_target_3(),
	AlphaFade_t5344440::get_offset_of_source_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (CardboardControlTrigger_t3854223601), -1, sizeof(CardboardControlTrigger_t3854223601_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1809[23] = 
{
	CardboardControlTrigger_t3854223601::get_offset_of_clickSpeedThreshold_2(),
	CardboardControlTrigger_t3854223601::get_offset_of_useEventCooldowns_3(),
	CardboardControlTrigger_t3854223601::get_offset_of_vibrateOnDown_4(),
	CardboardControlTrigger_t3854223601::get_offset_of_vibrateOnUp_5(),
	CardboardControlTrigger_t3854223601::get_offset_of_vibrateOnClick_6(),
	CardboardControlTrigger_t3854223601::get_offset_of_useMagnet_7(),
	CardboardControlTrigger_t3854223601::get_offset_of_useTouch_8(),
	CardboardControlTrigger_t3854223601::get_offset_of_triggerKey_9(),
	CardboardControlTrigger_t3854223601::get_offset_of_printDebugInfo_10(),
	CardboardControlTrigger_t3854223601::get_offset_of_magnet_11(),
	CardboardControlTrigger_t3854223601::get_offset_of_touch_12(),
	CardboardControlTrigger_t3854223601::get_offset_of_currentTriggerState_13(),
	CardboardControlTrigger_t3854223601::get_offset_of_clickStartTime_14(),
	CardboardControlTrigger_t3854223601::get_offset_of_debugThrottle_15(),
	CardboardControlTrigger_t3854223601::get_offset_of_FRAMES_PER_DEBUG_16(),
	CardboardControlTrigger_t3854223601::get_offset_of_cardboard_17(),
	CardboardControlTrigger_t3854223601::get_offset_of_OnUp_18(),
	CardboardControlTrigger_t3854223601::get_offset_of_OnDown_19(),
	CardboardControlTrigger_t3854223601::get_offset_of_OnClick_20(),
	CardboardControlTrigger_t3854223601_StaticFields::get_offset_of_U3CU3Ef__amU24cache13_21(),
	CardboardControlTrigger_t3854223601_StaticFields::get_offset_of_U3CU3Ef__amU24cache14_22(),
	CardboardControlTrigger_t3854223601_StaticFields::get_offset_of_U3CU3Ef__amU24cache15_23(),
	CardboardControlTrigger_t3854223601_StaticFields::get_offset_of_U3CU3Ef__switchU24map1_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (TriggerState_t2305547831)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1810[3] = 
{
	TriggerState_t2305547831::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (ParsedMagnetData_t1462532421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1811[12] = 
{
	ParsedMagnetData_t1462532421::get_offset_of_magnetWindow_0(),
	ParsedMagnetData_t1462532421::get_offset_of_currentMagnetWindow_1(),
	ParsedMagnetData_t1462532421::get_offset_of_MAX_WINDOW_SECONDS_2(),
	ParsedMagnetData_t1462532421::get_offset_of_MAGNET_RATIO_MIN_THRESHOLD_3(),
	ParsedMagnetData_t1462532421::get_offset_of_MAGNET_RATIO_MAX_THRESHOLD_4(),
	ParsedMagnetData_t1462532421::get_offset_of_MAGNET_MAGNITUDE_THRESHOLD_5(),
	ParsedMagnetData_t1462532421::get_offset_of_STABLE_RATIO_THRESHOLD_6(),
	ParsedMagnetData_t1462532421::get_offset_of_STABLE_DELTA_THRESHOLD_7(),
	ParsedMagnetData_t1462532421::get_offset_of_windowLength_8(),
	ParsedMagnetData_t1462532421::get_offset_of_triggerState_9(),
	ParsedMagnetData_t1462532421::get_offset_of_isDown_10(),
	ParsedMagnetData_t1462532421::get_offset_of_isStable_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (MagnetMoment_t1734236852)+ sizeof (Il2CppObject), sizeof(MagnetMoment_t1734236852_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1812[2] = 
{
	MagnetMoment_t1734236852::get_offset_of_deltaTime_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MagnetMoment_t1734236852::get_offset_of_yMagnitude_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (MagnetWindowState_t3440928333)+ sizeof (Il2CppObject), sizeof(MagnetWindowState_t3440928333_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1813[2] = 
{
	MagnetWindowState_t3440928333::get_offset_of_ratio_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MagnetWindowState_t3440928333::get_offset_of_delta_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (TriggerState_t1325291107)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1814[4] = 
{
	TriggerState_t1325291107::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (ParsedTouchData_t214248024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1815[1] = 
{
	ParsedTouchData_t214248024::get_offset_of_wasTouched_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (Fading_t2096705625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1816[5] = 
{
	Fading_t2096705625::get_offset_of_fadeOutTexture_2(),
	Fading_t2096705625::get_offset_of_fadeSpeed_3(),
	Fading_t2096705625::get_offset_of_drawDepth_4(),
	Fading_t2096705625::get_offset_of_alpha_5(),
	Fading_t2096705625::get_offset_of_fadeDir_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (CubeEnemyBehavior_t2181416869), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1817[6] = 
{
	CubeEnemyBehavior_t2181416869::get_offset_of_pointDisplay_2(),
	CubeEnemyBehavior_t2181416869::get_offset_of_target_3(),
	CubeEnemyBehavior_t2181416869::get_offset_of_speed_4(),
	CubeEnemyBehavior_t2181416869::get_offset_of_damage_5(),
	CubeEnemyBehavior_t2181416869::get_offset_of_points_6(),
	CubeEnemyBehavior_t2181416869::get_offset_of_type_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (PointDisplay_t3071954226), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (SphereEnemyBehavior_t1564230413), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1820[6] = 
{
	SphereEnemyBehavior_t1564230413::get_offset_of_pointDisplay_2(),
	SphereEnemyBehavior_t1564230413::get_offset_of_speed_3(),
	SphereEnemyBehavior_t1564230413::get_offset_of_target_4(),
	SphereEnemyBehavior_t1564230413::get_offset_of_damage_5(),
	SphereEnemyBehavior_t1564230413::get_offset_of_points_6(),
	SphereEnemyBehavior_t1564230413::get_offset_of_type_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (GameOverUI_t2508142874), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (LevelController_t812318240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1822[11] = 
{
	LevelController_t812318240::get_offset_of_enemyCubePrefab_2(),
	LevelController_t812318240::get_offset_of_enemySpherePrefab_3(),
	LevelController_t812318240::get_offset_of_greenPowerUpPrefab_4(),
	LevelController_t812318240::get_offset_of_spawners_5(),
	LevelController_t812318240::get_offset_of_gameOverUI_6(),
	LevelController_t812318240::get_offset_of_WaveText_7(),
	LevelController_t812318240::get_offset_of_currentWave_8(),
	LevelController_t812318240::get_offset_of_WaveOne_9(),
	LevelController_t812318240::get_offset_of_WaveTwo_10(),
	LevelController_t812318240::get_offset_of_WaveThree_11(),
	LevelController_t812318240::get_offset_of_WaveFour_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (U3CSwitchSceneU3Ec__Iterator0_t2311110386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1823[5] = 
{
	U3CSwitchSceneU3Ec__Iterator0_t2311110386::get_offset_of_U3CfadeU3E__0_0(),
	U3CSwitchSceneU3Ec__Iterator0_t2311110386::get_offset_of_U3CfadeTimeU3E__1_1(),
	U3CSwitchSceneU3Ec__Iterator0_t2311110386::get_offset_of_U24PC_2(),
	U3CSwitchSceneU3Ec__Iterator0_t2311110386::get_offset_of_U24current_3(),
	U3CSwitchSceneU3Ec__Iterator0_t2311110386::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (U3CWaveOneCoU3Ec__Iterator1_t4247225234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1824[3] = 
{
	U3CWaveOneCoU3Ec__Iterator1_t4247225234::get_offset_of_U24PC_0(),
	U3CWaveOneCoU3Ec__Iterator1_t4247225234::get_offset_of_U24current_1(),
	U3CWaveOneCoU3Ec__Iterator1_t4247225234::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (U3CWaveTwoCoU3Ec__Iterator2_t2041341677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1825[3] = 
{
	U3CWaveTwoCoU3Ec__Iterator2_t2041341677::get_offset_of_U24PC_0(),
	U3CWaveTwoCoU3Ec__Iterator2_t2041341677::get_offset_of_U24current_1(),
	U3CWaveTwoCoU3Ec__Iterator2_t2041341677::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (U3CWaveThreeCoU3Ec__Iterator3_t3366550492), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1826[3] = 
{
	U3CWaveThreeCoU3Ec__Iterator3_t3366550492::get_offset_of_U24PC_0(),
	U3CWaveThreeCoU3Ec__Iterator3_t3366550492::get_offset_of_U24current_1(),
	U3CWaveThreeCoU3Ec__Iterator3_t3366550492::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (U3CWaveFourCoU3Ec__Iterator4_t2929823497), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1827[3] = 
{
	U3CWaveFourCoU3Ec__Iterator4_t2929823497::get_offset_of_U24PC_0(),
	U3CWaveFourCoU3Ec__Iterator4_t2929823497::get_offset_of_U24current_1(),
	U3CWaveFourCoU3Ec__Iterator4_t2929823497::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (BulletBehavior_t979510676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1828[3] = 
{
	BulletBehavior_t979510676::get_offset_of_bulletSpeed_2(),
	BulletBehavior_t979510676::get_offset_of_bulletLife_3(),
	BulletBehavior_t979510676::get_offset_of_levelController_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (Shooting_t4014346115), -1, sizeof(Shooting_t4014346115_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1829[4] = 
{
	Shooting_t4014346115::get_offset_of_shootInterval_2(),
	Shooting_t4014346115::get_offset_of_canShoot_3(),
	Shooting_t4014346115::get_offset_of_bulletPrefab_4(),
	Shooting_t4014346115_StaticFields::get_offset_of_cardboard_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (U3CWaitToShootU3Ec__Iterator5_t1059091075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1830[5] = 
{
	U3CWaitToShootU3Ec__Iterator5_t1059091075::get_offset_of_waitTime_0(),
	U3CWaitToShootU3Ec__Iterator5_t1059091075::get_offset_of_U24PC_1(),
	U3CWaitToShootU3Ec__Iterator5_t1059091075::get_offset_of_U24current_2(),
	U3CWaitToShootU3Ec__Iterator5_t1059091075::get_offset_of_U3CU24U3EwaitTime_3(),
	U3CWaitToShootU3Ec__Iterator5_t1059091075::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (GreenPowerUp_t1055926813), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1831[3] = 
{
	GreenPowerUp_t1055926813::get_offset_of_color_2(),
	GreenPowerUp_t1055926813::get_offset_of_rotationSpeed_3(),
	GreenPowerUp_t1055926813::get_offset_of_shieldPrefab_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (GreenShield_t3715298348), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1833[2] = 
{
	GreenShield_t3715298348::get_offset_of_color_2(),
	GreenShield_t3715298348::get_offset_of_shieldLength_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (U3CEndShieldU3Ec__Iterator6_t519869784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1834[4] = 
{
	U3CEndShieldU3Ec__Iterator6_t519869784::get_offset_of_U3CmeshU3E__0_0(),
	U3CEndShieldU3Ec__Iterator6_t519869784::get_offset_of_U24PC_1(),
	U3CEndShieldU3Ec__Iterator6_t519869784::get_offset_of_U24current_2(),
	U3CEndShieldU3Ec__Iterator6_t519869784::get_offset_of_U3CU3Ef__this_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (ScoreKeeper_t2936965124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1836[3] = 
{
	ScoreKeeper_t2936965124::get_offset_of_score_2(),
	ScoreKeeper_t2936965124::get_offset_of_scoreUIObject_3(),
	ScoreKeeper_t2936965124::get_offset_of_scoreUI_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (TargetBehavior_t3211801379), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1837[2] = 
{
	TargetBehavior_t3211801379::get_offset_of_health_2(),
	TargetBehavior_t3211801379::get_offset_of_levelController_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (ControllerDemoManager_t1306021614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1838[9] = 
{
	ControllerDemoManager_t1306021614::get_offset_of_controllerPivot_2(),
	ControllerDemoManager_t1306021614::get_offset_of_messageCanvas_3(),
	ControllerDemoManager_t1306021614::get_offset_of_messageText_4(),
	ControllerDemoManager_t1306021614::get_offset_of_cubeInactiveMaterial_5(),
	ControllerDemoManager_t1306021614::get_offset_of_cubeHoverMaterial_6(),
	ControllerDemoManager_t1306021614::get_offset_of_cubeActiveMaterial_7(),
	ControllerDemoManager_t1306021614::get_offset_of_controllerCursorRenderer_8(),
	ControllerDemoManager_t1306021614::get_offset_of_selectedObject_9(),
	ControllerDemoManager_t1306021614::get_offset_of_dragging_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (Teleport_t2999409483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1839[1] = 
{
	Teleport_t2999409483::get_offset_of_startingPosition_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (GvrHead_t2074018243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1840[6] = 
{
	GvrHead_t2074018243::get_offset_of_trackRotation_2(),
	GvrHead_t2074018243::get_offset_of_trackPosition_3(),
	GvrHead_t2074018243::get_offset_of_target_4(),
	GvrHead_t2074018243::get_offset_of_updateEarly_5(),
	GvrHead_t2074018243::get_offset_of_updated_6(),
	GvrHead_t2074018243::get_offset_of_OnHeadUpdated_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (HeadUpdatedDelegate_t4119218932), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (GvrCameraUtils_t3751592777), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (GvrEye_t2145111534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1843[8] = 
{
	GvrEye_t2145111534::get_offset_of_eye_2(),
	GvrEye_t2145111534::get_offset_of_toggleCullingMask_3(),
	GvrEye_t2145111534::get_offset_of_controller_4(),
	GvrEye_t2145111534::get_offset_of_stereoEffect_5(),
	GvrEye_t2145111534::get_offset_of_monoCamera_6(),
	GvrEye_t2145111534::get_offset_of_realProj_7(),
	GvrEye_t2145111534::get_offset_of_interpPosition_8(),
	GvrEye_t2145111534::get_offset_of_U3CcamU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { sizeof (GvrPostRender_t3571076089), -1, sizeof(GvrPostRender_t3571076089_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1844[22] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrPostRender_t3571076089::get_offset_of_distortionMesh_14(),
	GvrPostRender_t3571076089::get_offset_of_meshMaterial_15(),
	GvrPostRender_t3571076089::get_offset_of_uiMaterial_16(),
	GvrPostRender_t3571076089::get_offset_of_centerWidthPx_17(),
	GvrPostRender_t3571076089::get_offset_of_buttonWidthPx_18(),
	GvrPostRender_t3571076089::get_offset_of_xScale_19(),
	GvrPostRender_t3571076089::get_offset_of_yScale_20(),
	GvrPostRender_t3571076089::get_offset_of_xfm_21(),
	GvrPostRender_t3571076089_StaticFields::get_offset_of_Angles_22(),
	GvrPostRender_t3571076089::get_offset_of_U3CcamU3Ek__BackingField_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { sizeof (GvrPreRender_t2492587030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1845[1] = 
{
	GvrPreRender_t2492587030::get_offset_of_U3CcamU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { sizeof (GvrProfile_t2868291302), -1, sizeof(GvrProfile_t2868291302_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1846[15] = 
{
	GvrProfile_t2868291302::get_offset_of_screen_0(),
	GvrProfile_t2868291302::get_offset_of_viewer_1(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_Nexus5_2(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_Nexus6_3(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_GalaxyS6_4(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_GalaxyNote4_5(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_LGG3_6(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_iPhone4_7(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_iPhone5_8(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_iPhone6_9(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_iPhone6p_10(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_CardboardJun2014_11(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_CardboardMay2015_12(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_GoggleTechC1Glass_13(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_Default_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { sizeof (Screen_t3577771989)+ sizeof (Il2CppObject), sizeof(Screen_t3577771989_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1847[3] = 
{
	Screen_t3577771989::get_offset_of_width_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t3577771989::get_offset_of_height_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t3577771989::get_offset_of_border_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { sizeof (Lenses_t3379109269)+ sizeof (Il2CppObject), sizeof(Lenses_t3379109269_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1848[7] = 
{
	0,
	0,
	0,
	Lenses_t3379109269::get_offset_of_separation_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t3379109269::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t3379109269::get_offset_of_screenDistance_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t3379109269::get_offset_of_alignment_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { sizeof (MaxFOV_t3404298290)+ sizeof (Il2CppObject), sizeof(MaxFOV_t3404298290_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1849[4] = 
{
	MaxFOV_t3404298290::get_offset_of_outer_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t3404298290::get_offset_of_inner_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t3404298290::get_offset_of_upper_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t3404298290::get_offset_of_lower_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { sizeof (Distortion_t2316389254)+ sizeof (Il2CppObject), sizeof(Distortion_t2316389254_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1850[1] = 
{
	Distortion_t2316389254::get_offset_of_coef_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { sizeof (Viewer_t3668830587)+ sizeof (Il2CppObject), sizeof(Viewer_t3668830587_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1851[4] = 
{
	Viewer_t3668830587::get_offset_of_lenses_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t3668830587::get_offset_of_maxFOV_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t3668830587::get_offset_of_distortion_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t3668830587::get_offset_of_inverse_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { sizeof (ScreenSizes_t4088223165)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1852[10] = 
{
	ScreenSizes_t4088223165::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { sizeof (ViewerTypes_t962081726)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1853[4] = 
{
	ViewerTypes_t962081726::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { sizeof (StereoController_t1637909972), -1, sizeof(StereoController_t1637909972_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1854[17] = 
{
	StereoController_t1637909972::get_offset_of_directRender_2(),
	StereoController_t1637909972::get_offset_of_keepStereoUpdated_3(),
	StereoController_t1637909972::get_offset_of_stereoMultiplier_4(),
	StereoController_t1637909972::get_offset_of_matchMonoFOV_5(),
	StereoController_t1637909972::get_offset_of_matchByZoom_6(),
	StereoController_t1637909972::get_offset_of_centerOfInterest_7(),
	StereoController_t1637909972::get_offset_of_radiusOfInterest_8(),
	StereoController_t1637909972::get_offset_of_checkStereoComfort_9(),
	StereoController_t1637909972::get_offset_of_stereoAdjustSmoothing_10(),
	StereoController_t1637909972::get_offset_of_screenParallax_11(),
	StereoController_t1637909972::get_offset_of_stereoPaddingX_12(),
	StereoController_t1637909972::get_offset_of_stereoPaddingY_13(),
	StereoController_t1637909972::get_offset_of_renderedStereo_14(),
	StereoController_t1637909972::get_offset_of_eyes_15(),
	StereoController_t1637909972::get_offset_of_head_16(),
	StereoController_t1637909972::get_offset_of_U3CcamU3Ek__BackingField_17(),
	StereoController_t1637909972_StaticFields::get_offset_of_U3CU3Ef__amU24cache10_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { sizeof (U3CEndOfFrameU3Ec__Iterator7_t3320551400), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1855[3] = 
{
	U3CEndOfFrameU3Ec__Iterator7_t3320551400::get_offset_of_U24PC_0(),
	U3CEndOfFrameU3Ec__Iterator7_t3320551400::get_offset_of_U24current_1(),
	U3CEndOfFrameU3Ec__Iterator7_t3320551400::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { sizeof (StereoRenderEffect_t4012593919), -1, sizeof(StereoRenderEffect_t4012593919_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1856[3] = 
{
	StereoRenderEffect_t4012593919::get_offset_of_material_2(),
	StereoRenderEffect_t4012593919::get_offset_of_cam_3(),
	StereoRenderEffect_t4012593919_StaticFields::get_offset_of_fullRect_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { sizeof (BaseVRDevice_t591083105), -1, sizeof(BaseVRDevice_t591083105_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1857[19] = 
{
	BaseVRDevice_t591083105_StaticFields::get_offset_of_device_0(),
	BaseVRDevice_t591083105::get_offset_of_headPose_1(),
	BaseVRDevice_t591083105::get_offset_of_leftEyePose_2(),
	BaseVRDevice_t591083105::get_offset_of_rightEyePose_3(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeDistortedProjection_4(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeDistortedProjection_5(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeUndistortedProjection_6(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeUndistortedProjection_7(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeDistortedViewport_8(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeDistortedViewport_9(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeUndistortedViewport_10(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeUndistortedViewport_11(),
	BaseVRDevice_t591083105::get_offset_of_recommendedTextureSize_12(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeOrientation_13(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeOrientation_14(),
	BaseVRDevice_t591083105::get_offset_of_tilted_15(),
	BaseVRDevice_t591083105::get_offset_of_profileChanged_16(),
	BaseVRDevice_t591083105::get_offset_of_backButtonPressed_17(),
	BaseVRDevice_t591083105::get_offset_of_U3CProfileU3Ek__BackingField_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { sizeof (GvrDevice_t2458844523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1858[13] = 
{
	0,
	0,
	0,
	0,
	0,
	GvrDevice_t2458844523::get_offset_of_headData_24(),
	GvrDevice_t2458844523::get_offset_of_viewData_25(),
	GvrDevice_t2458844523::get_offset_of_profileData_26(),
	GvrDevice_t2458844523::get_offset_of_headView_27(),
	GvrDevice_t2458844523::get_offset_of_leftEyeView_28(),
	GvrDevice_t2458844523::get_offset_of_rightEyeView_29(),
	GvrDevice_t2458844523::get_offset_of_debugDisableNativeProjections_30(),
	GvrDevice_t2458844523::get_offset_of_debugDisableNativeUILayer_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { sizeof (iOSDevice_t141998261), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1859[1] = 
{
	iOSDevice_t141998261::get_offset_of_isOpenGL_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { sizeof (GvrAudio_t4159038547), -1, sizeof(GvrAudio_t4159038547_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1860[25] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrAudio_t4159038547_StaticFields::get_offset_of_sampleRate_15(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_numChannels_16(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_framesPerBuffer_17(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_bounds_18(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_enabledRooms_19(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_initialized_20(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_listenerTransform_21(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_occlusionMaskValue_22(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_pose_23(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_worldScaleInverse_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { sizeof (Quality_t3830609699)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1861[4] = 
{
	Quality_t3830609699::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (SpatializerType_t3928244512)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1862[3] = 
{
	SpatializerType_t3928244512::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (GvrAudioListener_t2617838119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1863[4] = 
{
	GvrAudioListener_t2617838119::get_offset_of_globalGainDb_2(),
	GvrAudioListener_t2617838119::get_offset_of_worldScale_3(),
	GvrAudioListener_t2617838119::get_offset_of_occlusionMask_4(),
	GvrAudioListener_t2617838119::get_offset_of_quality_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (GvrAudioRoom_t252475342), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1864[12] = 
{
	GvrAudioRoom_t252475342::get_offset_of_leftWall_2(),
	GvrAudioRoom_t252475342::get_offset_of_rightWall_3(),
	GvrAudioRoom_t252475342::get_offset_of_floor_4(),
	GvrAudioRoom_t252475342::get_offset_of_ceiling_5(),
	GvrAudioRoom_t252475342::get_offset_of_backWall_6(),
	GvrAudioRoom_t252475342::get_offset_of_frontWall_7(),
	GvrAudioRoom_t252475342::get_offset_of_reflectivity_8(),
	GvrAudioRoom_t252475342::get_offset_of_reverbGainDb_9(),
	GvrAudioRoom_t252475342::get_offset_of_reverbBrightness_10(),
	GvrAudioRoom_t252475342::get_offset_of_reverbTime_11(),
	GvrAudioRoom_t252475342::get_offset_of_size_12(),
	GvrAudioRoom_t252475342::get_offset_of_surfaceMaterials_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (SurfaceMaterial_t3675539603)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1865[24] = 
{
	SurfaceMaterial_t3675539603::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (GvrAudioSoundfield_t1975836158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1866[12] = 
{
	GvrAudioSoundfield_t1975836158::get_offset_of_gainDb_2(),
	GvrAudioSoundfield_t1975836158::get_offset_of_playOnAwake_3(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldClip0102_4(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldClip0304_5(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldLoop_6(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldMute_7(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldPitch_8(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldPriority_9(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldVolume_10(),
	GvrAudioSoundfield_t1975836158::get_offset_of_id_11(),
	GvrAudioSoundfield_t1975836158::get_offset_of_audioSources_12(),
	GvrAudioSoundfield_t1975836158::get_offset_of_isPaused_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { sizeof (GvrAudioSource_t2139450958), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1867[22] = 
{
	GvrAudioSource_t2139450958::get_offset_of_bypassRoomEffects_2(),
	GvrAudioSource_t2139450958::get_offset_of_directivityAlpha_3(),
	GvrAudioSource_t2139450958::get_offset_of_directivitySharpness_4(),
	GvrAudioSource_t2139450958::get_offset_of_gainDb_5(),
	GvrAudioSource_t2139450958::get_offset_of_occlusionEnabled_6(),
	GvrAudioSource_t2139450958::get_offset_of_playOnAwake_7(),
	GvrAudioSource_t2139450958::get_offset_of_rolloffMode_8(),
	GvrAudioSource_t2139450958::get_offset_of_spread_9(),
	GvrAudioSource_t2139450958::get_offset_of_sourceClip_10(),
	GvrAudioSource_t2139450958::get_offset_of_sourceLoop_11(),
	GvrAudioSource_t2139450958::get_offset_of_sourceMute_12(),
	GvrAudioSource_t2139450958::get_offset_of_sourcePitch_13(),
	GvrAudioSource_t2139450958::get_offset_of_sourcePriority_14(),
	GvrAudioSource_t2139450958::get_offset_of_sourceVolume_15(),
	GvrAudioSource_t2139450958::get_offset_of_sourceMaxDistance_16(),
	GvrAudioSource_t2139450958::get_offset_of_sourceMinDistance_17(),
	GvrAudioSource_t2139450958::get_offset_of_hrtfEnabled_18(),
	GvrAudioSource_t2139450958::get_offset_of_audioSource_19(),
	GvrAudioSource_t2139450958::get_offset_of_id_20(),
	GvrAudioSource_t2139450958::get_offset_of_currentOcclusion_21(),
	GvrAudioSource_t2139450958::get_offset_of_nextOcclusionUpdate_22(),
	GvrAudioSource_t2139450958::get_offset_of_isPaused_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { sizeof (EmulatorClientSocket_t2137111857), -1, sizeof(EmulatorClientSocket_t2137111857_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1868[8] = 
{
	0,
	0,
	EmulatorClientSocket_t2137111857_StaticFields::get_offset_of_kPhoneEventPort_4(),
	EmulatorClientSocket_t2137111857::get_offset_of_phoneMirroringSocket_5(),
	EmulatorClientSocket_t2137111857::get_offset_of_phoneEventThread_6(),
	EmulatorClientSocket_t2137111857::get_offset_of_shouldStop_7(),
	EmulatorClientSocket_t2137111857::get_offset_of_phoneRemote_8(),
	EmulatorClientSocket_t2137111857::get_offset_of_U3CconnectedU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (EmulatorConfig_t3000403349), -1, sizeof(EmulatorConfig_t3000403349_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1869[4] = 
{
	EmulatorConfig_t3000403349_StaticFields::get_offset_of_instance_2(),
	EmulatorConfig_t3000403349::get_offset_of_PHONE_EVENT_MODE_3(),
	EmulatorConfig_t3000403349_StaticFields::get_offset_of_USB_SERVER_IP_4(),
	EmulatorConfig_t3000403349_StaticFields::get_offset_of_WIFI_SERVER_IP_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { sizeof (Mode_t884064821)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1870[4] = 
{
	Mode_t884064821::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (EmulatorGyroEvent_t3657941864)+ sizeof (Il2CppObject), sizeof(EmulatorGyroEvent_t3657941864_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1871[2] = 
{
	EmulatorGyroEvent_t3657941864::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorGyroEvent_t3657941864::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (EmulatorAccelEvent_t2349426533)+ sizeof (Il2CppObject), sizeof(EmulatorAccelEvent_t2349426533_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1872[2] = 
{
	EmulatorAccelEvent_t2349426533::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorAccelEvent_t2349426533::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { sizeof (EmulatorTouchEvent_t2112311150)+ sizeof (Il2CppObject), -1, sizeof(EmulatorTouchEvent_t2112311150_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1873[6] = 
{
	EmulatorTouchEvent_t2112311150::get_offset_of_action_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t2112311150::get_offset_of_relativeTimestamp_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t2112311150::get_offset_of_pointers_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t2112311150_StaticFields::get_offset_of_ACTION_POINTER_INDEX_SHIFT_3(),
	EmulatorTouchEvent_t2112311150_StaticFields::get_offset_of_ACTION_POINTER_INDEX_MASK_4(),
	EmulatorTouchEvent_t2112311150_StaticFields::get_offset_of_ACTION_MASK_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (Action_t926435919)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1874[10] = 
{
	Action_t926435919::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1875 = { sizeof (Pointer_t3710907716)+ sizeof (Il2CppObject), sizeof(Pointer_t3710907716_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1875[3] = 
{
	Pointer_t3710907716::get_offset_of_fingerId_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3710907716::get_offset_of_normalizedX_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3710907716::get_offset_of_normalizedY_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1876 = { sizeof (EmulatorOrientationEvent_t3989687101)+ sizeof (Il2CppObject), sizeof(EmulatorOrientationEvent_t3989687101_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1876[2] = 
{
	EmulatorOrientationEvent_t3989687101::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorOrientationEvent_t3989687101::get_offset_of_orientation_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1877 = { sizeof (EmulatorButtonEvent_t200175493)+ sizeof (Il2CppObject), sizeof(EmulatorButtonEvent_t200175493_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1877[2] = 
{
	EmulatorButtonEvent_t200175493::get_offset_of_code_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorButtonEvent_t200175493::get_offset_of_down_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1878 = { sizeof (ButtonCode_t3065328481)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1878[7] = 
{
	ButtonCode_t3065328481::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1879 = { sizeof (EmulatorManager_t622010154), -1, sizeof(EmulatorManager_t622010154_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1879[16] = 
{
	EmulatorManager_t622010154::get_offset_of_emulatorUpdate_2(),
	EmulatorManager_t622010154::get_offset_of_waitForEndOfFrame_3(),
	EmulatorManager_t622010154_StaticFields::get_offset_of_instance_4(),
	EmulatorManager_t622010154::get_offset_of_currentGyroEvent_5(),
	EmulatorManager_t622010154::get_offset_of_currentAccelEvent_6(),
	EmulatorManager_t622010154::get_offset_of_currentTouchEvent_7(),
	EmulatorManager_t622010154::get_offset_of_currentOrientationEvent_8(),
	EmulatorManager_t622010154::get_offset_of_currentButtonEvent_9(),
	EmulatorManager_t622010154::get_offset_of_pendingEvents_10(),
	EmulatorManager_t622010154::get_offset_of_socket_11(),
	EmulatorManager_t622010154::get_offset_of_lastDownTimeMs_12(),
	EmulatorManager_t622010154::get_offset_of_gyroEventListenersInternal_13(),
	EmulatorManager_t622010154::get_offset_of_accelEventListenersInternal_14(),
	EmulatorManager_t622010154::get_offset_of_touchEventListenersInternal_15(),
	EmulatorManager_t622010154::get_offset_of_orientationEventListenersInternal_16(),
	EmulatorManager_t622010154::get_offset_of_buttonEventListenersInternal_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1880 = { sizeof (OnGyroEvent_t1752883023), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1881 = { sizeof (OnAccelEvent_t1207501038), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1882 = { sizeof (OnTouchEvent_t970385655), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1883 = { sizeof (OnOrientationEvent_t2004619270), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1884 = { sizeof (OnButtonEvent_t1240547244), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1885 = { sizeof (U3CEndOfFrameU3Ec__Iterator8_t2571948939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1885[5] = 
{
	U3CEndOfFrameU3Ec__Iterator8_t2571948939::get_offset_of_U3CphoneEventU3E__0_0(),
	U3CEndOfFrameU3Ec__Iterator8_t2571948939::get_offset_of_U3CU24s_7U3E__1_1(),
	U3CEndOfFrameU3Ec__Iterator8_t2571948939::get_offset_of_U24PC_2(),
	U3CEndOfFrameU3Ec__Iterator8_t2571948939::get_offset_of_U24current_3(),
	U3CEndOfFrameU3Ec__Iterator8_t2571948939::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1886 = { sizeof (PhoneEvent_t4294543246), -1, sizeof(PhoneEvent_t4294543246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1886[1] = 
{
	PhoneEvent_t4294543246_StaticFields::get_offset_of_Descriptor_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1887 = { sizeof (PhoneEvent_t1948414762), -1, sizeof(PhoneEvent_t1948414762_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1887[25] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	PhoneEvent_t1948414762_StaticFields::get_offset_of_defaultInstance_7(),
	PhoneEvent_t1948414762_StaticFields::get_offset_of__phoneEventFieldNames_8(),
	PhoneEvent_t1948414762_StaticFields::get_offset_of__phoneEventFieldTags_9(),
	PhoneEvent_t1948414762::get_offset_of_hasType_10(),
	PhoneEvent_t1948414762::get_offset_of_type__11(),
	PhoneEvent_t1948414762::get_offset_of_hasMotionEvent_12(),
	PhoneEvent_t1948414762::get_offset_of_motionEvent__13(),
	PhoneEvent_t1948414762::get_offset_of_hasGyroscopeEvent_14(),
	PhoneEvent_t1948414762::get_offset_of_gyroscopeEvent__15(),
	PhoneEvent_t1948414762::get_offset_of_hasAccelerometerEvent_16(),
	PhoneEvent_t1948414762::get_offset_of_accelerometerEvent__17(),
	PhoneEvent_t1948414762::get_offset_of_hasDepthMapEvent_18(),
	PhoneEvent_t1948414762::get_offset_of_depthMapEvent__19(),
	PhoneEvent_t1948414762::get_offset_of_hasOrientationEvent_20(),
	PhoneEvent_t1948414762::get_offset_of_orientationEvent__21(),
	PhoneEvent_t1948414762::get_offset_of_hasKeyEvent_22(),
	PhoneEvent_t1948414762::get_offset_of_keyEvent__23(),
	PhoneEvent_t1948414762::get_offset_of_memoizedSerializedSize_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1888 = { sizeof (Types_t1856670140), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1889 = { sizeof (Type_t923828173)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1889[7] = 
{
	Type_t923828173::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1890 = { sizeof (MotionEvent_t2659645585), -1, sizeof(MotionEvent_t2659645585_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1890[12] = 
{
	0,
	0,
	0,
	MotionEvent_t2659645585_StaticFields::get_offset_of_defaultInstance_3(),
	MotionEvent_t2659645585_StaticFields::get_offset_of__motionEventFieldNames_4(),
	MotionEvent_t2659645585_StaticFields::get_offset_of__motionEventFieldTags_5(),
	MotionEvent_t2659645585::get_offset_of_hasTimestamp_6(),
	MotionEvent_t2659645585::get_offset_of_timestamp__7(),
	MotionEvent_t2659645585::get_offset_of_hasAction_8(),
	MotionEvent_t2659645585::get_offset_of_action__9(),
	MotionEvent_t2659645585::get_offset_of_pointers__10(),
	MotionEvent_t2659645585::get_offset_of_memoizedSerializedSize_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1891 = { sizeof (Types_t1994437979), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1892 = { sizeof (Pointer_t190725481), -1, sizeof(Pointer_t190725481_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1892[13] = 
{
	0,
	0,
	0,
	Pointer_t190725481_StaticFields::get_offset_of_defaultInstance_3(),
	Pointer_t190725481_StaticFields::get_offset_of__pointerFieldNames_4(),
	Pointer_t190725481_StaticFields::get_offset_of__pointerFieldTags_5(),
	Pointer_t190725481::get_offset_of_hasId_6(),
	Pointer_t190725481::get_offset_of_id__7(),
	Pointer_t190725481::get_offset_of_hasNormalizedX_8(),
	Pointer_t190725481::get_offset_of_normalizedX__9(),
	Pointer_t190725481::get_offset_of_hasNormalizedY_10(),
	Pointer_t190725481::get_offset_of_normalizedY__11(),
	Pointer_t190725481::get_offset_of_memoizedSerializedSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1893 = { sizeof (Builder_t1865844949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1893[2] = 
{
	Builder_t1865844949::get_offset_of_resultIsReadOnly_0(),
	Builder_t1865844949::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1894 = { sizeof (Builder_t2183502845), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1894[2] = 
{
	Builder_t2183502845::get_offset_of_resultIsReadOnly_0(),
	Builder_t2183502845::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1895 = { sizeof (GyroscopeEvent_t2921203048), -1, sizeof(GyroscopeEvent_t2921203048_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1895[16] = 
{
	0,
	0,
	0,
	0,
	GyroscopeEvent_t2921203048_StaticFields::get_offset_of_defaultInstance_4(),
	GyroscopeEvent_t2921203048_StaticFields::get_offset_of__gyroscopeEventFieldNames_5(),
	GyroscopeEvent_t2921203048_StaticFields::get_offset_of__gyroscopeEventFieldTags_6(),
	GyroscopeEvent_t2921203048::get_offset_of_hasTimestamp_7(),
	GyroscopeEvent_t2921203048::get_offset_of_timestamp__8(),
	GyroscopeEvent_t2921203048::get_offset_of_hasX_9(),
	GyroscopeEvent_t2921203048::get_offset_of_x__10(),
	GyroscopeEvent_t2921203048::get_offset_of_hasY_11(),
	GyroscopeEvent_t2921203048::get_offset_of_y__12(),
	GyroscopeEvent_t2921203048::get_offset_of_hasZ_13(),
	GyroscopeEvent_t2921203048::get_offset_of_z__14(),
	GyroscopeEvent_t2921203048::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1896 = { sizeof (Builder_t3312050644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1896[2] = 
{
	Builder_t3312050644::get_offset_of_resultIsReadOnly_0(),
	Builder_t3312050644::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1897 = { sizeof (AccelerometerEvent_t148610782), -1, sizeof(AccelerometerEvent_t148610782_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1897[16] = 
{
	0,
	0,
	0,
	0,
	AccelerometerEvent_t148610782_StaticFields::get_offset_of_defaultInstance_4(),
	AccelerometerEvent_t148610782_StaticFields::get_offset_of__accelerometerEventFieldNames_5(),
	AccelerometerEvent_t148610782_StaticFields::get_offset_of__accelerometerEventFieldTags_6(),
	AccelerometerEvent_t148610782::get_offset_of_hasTimestamp_7(),
	AccelerometerEvent_t148610782::get_offset_of_timestamp__8(),
	AccelerometerEvent_t148610782::get_offset_of_hasX_9(),
	AccelerometerEvent_t148610782::get_offset_of_x__10(),
	AccelerometerEvent_t148610782::get_offset_of_hasY_11(),
	AccelerometerEvent_t148610782::get_offset_of_y__12(),
	AccelerometerEvent_t148610782::get_offset_of_hasZ_13(),
	AccelerometerEvent_t148610782::get_offset_of_z__14(),
	AccelerometerEvent_t148610782::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1898 = { sizeof (Builder_t1359586634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1898[2] = 
{
	Builder_t1359586634::get_offset_of_resultIsReadOnly_0(),
	Builder_t1359586634::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1899 = { sizeof (DepthMapEvent_t3758135118), -1, sizeof(DepthMapEvent_t3758135118_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1899[16] = 
{
	0,
	0,
	0,
	0,
	DepthMapEvent_t3758135118_StaticFields::get_offset_of_defaultInstance_4(),
	DepthMapEvent_t3758135118_StaticFields::get_offset_of__depthMapEventFieldNames_5(),
	DepthMapEvent_t3758135118_StaticFields::get_offset_of__depthMapEventFieldTags_6(),
	DepthMapEvent_t3758135118::get_offset_of_hasTimestamp_7(),
	DepthMapEvent_t3758135118::get_offset_of_timestamp__8(),
	DepthMapEvent_t3758135118::get_offset_of_hasWidth_9(),
	DepthMapEvent_t3758135118::get_offset_of_width__10(),
	DepthMapEvent_t3758135118::get_offset_of_hasHeight_11(),
	DepthMapEvent_t3758135118::get_offset_of_height__12(),
	DepthMapEvent_t3758135118::get_offset_of_zDistancesMemoizedSerializedSize_13(),
	DepthMapEvent_t3758135118::get_offset_of_zDistances__14(),
	DepthMapEvent_t3758135118::get_offset_of_memoizedSerializedSize_15(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
