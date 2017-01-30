#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CardboardControlGaze
struct CardboardControlGaze_t2988657900;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void CardboardControlGaze::.ctor()
extern "C"  void CardboardControlGaze__ctor_m497997615 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlGaze::Start()
extern "C"  void CardboardControlGaze_Start_m3740102703 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlGaze::Update()
extern "C"  void CardboardControlGaze_Update_m4279886270 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlGaze::CheckGaze()
extern "C"  void CardboardControlGaze_CheckGaze_m2727059898 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardControlGaze::Staring()
extern "C"  bool CardboardControlGaze_Staring_m3025475689 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardControlGaze::GazeChanged()
extern "C"  bool CardboardControlGaze_GazeChanged_m139412936 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlGaze::ReportGazeChange()
extern "C"  void CardboardControlGaze_ReportGazeChange_m3896264158 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlGaze::ReportStare()
extern "C"  void CardboardControlGaze_ReportStare_m1267814156 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardControlGaze::IsHeld()
extern "C"  bool CardboardControlGaze_IsHeld_m1836432040 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardControlGaze::WasHeld()
extern "C"  bool CardboardControlGaze_WasHeld_m3220950615 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardControlGaze::SecondsHeld()
extern "C"  float CardboardControlGaze_SecondsHeld_m864998485 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit CardboardControlGaze::Hit()
extern "C"  RaycastHit_t4003175726  CardboardControlGaze_Hit_m1149759844 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CardboardControlGaze::Object()
extern "C"  GameObject_t3674682005 * CardboardControlGaze_Object_m2246260393 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CardboardControlGaze::PreviousObject()
extern "C"  GameObject_t3674682005 * CardboardControlGaze_PreviousObject_m3572643264 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CardboardControlGaze::Forward()
extern "C"  Vector3_t4282066566  CardboardControlGaze_Forward_m3151325720 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CardboardControlGaze::Right()
extern "C"  Vector3_t4282066566  CardboardControlGaze_Right_m3610631215 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion CardboardControlGaze::Rotation()
extern "C"  Quaternion_t1553702882  CardboardControlGaze_Rotation_m1073535291 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray CardboardControlGaze::Ray()
extern "C"  Ray_t3134616544  CardboardControlGaze_Ray_m3907727383 (CardboardControlGaze_t2988657900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlGaze::<OnChange>m__1(System.Object)
extern "C"  void CardboardControlGaze_U3COnChangeU3Em__1_m1946483112 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlGaze::<OnStare>m__2(System.Object)
extern "C"  void CardboardControlGaze_U3COnStareU3Em__2_m2490410940 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
