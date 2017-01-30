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

// CardboardControlTrigger
struct CardboardControlTrigger_t3854223601;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void CardboardControlTrigger::.ctor()
extern "C"  void CardboardControlTrigger__ctor_m4212659610 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::Start()
extern "C"  void CardboardControlTrigger_Start_m3159797402 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::Update()
extern "C"  void CardboardControlTrigger_Update_m3470291123 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::FixedUpdate()
extern "C"  void CardboardControlTrigger_FixedUpdate_m3565016981 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardControlTrigger::KeyFor(System.String)
extern "C"  bool CardboardControlTrigger_KeyFor_m1459079586 (CardboardControlTrigger_t3854223601 * __this, String_t* ___direction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::CheckKey()
extern "C"  void CardboardControlTrigger_CheckKey_m1815229025 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::CheckMagnet()
extern "C"  void CardboardControlTrigger_CheckMagnet_m3336455050 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::CheckTouch()
extern "C"  void CardboardControlTrigger_CheckTouch_m360386305 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardControlTrigger::IsTouching()
extern "C"  bool CardboardControlTrigger_IsTouching_m1512140739 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::ReportDown()
extern "C"  void CardboardControlTrigger_ReportDown_m1725339680 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::ReportUp()
extern "C"  void CardboardControlTrigger_ReportUp_m4283859737 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::CheckForClick()
extern "C"  void CardboardControlTrigger_CheckForClick_m2508928351 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::ReportClick()
extern "C"  void CardboardControlTrigger_ReportClick_m959338796 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardControlTrigger::SecondsHeld()
extern "C"  float CardboardControlTrigger_SecondsHeld_m64957080 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardControlTrigger::IsHeld()
extern "C"  bool CardboardControlTrigger_IsHeld_m1350813109 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::ResetMagnetState()
extern "C"  void CardboardControlTrigger_ResetMagnetState_m156279650 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::PrintDebug()
extern "C"  void CardboardControlTrigger_PrintDebug_m3237531600 (CardboardControlTrigger_t3854223601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::<OnUp>m__3(System.Object)
extern "C"  void CardboardControlTrigger_U3COnUpU3Em__3_m2533540348 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::<OnDown>m__4(System.Object)
extern "C"  void CardboardControlTrigger_U3COnDownU3Em__4_m2972739554 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlTrigger::<OnClick>m__5(System.Object)
extern "C"  void CardboardControlTrigger_U3COnClickU3Em__5_m1018173571 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
