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

// ParsedMagnetData
struct ParsedMagnetData_t1462532421;
// System.Collections.Generic.List`1<ParsedMagnetData/MagnetMoment>
struct List_1_t3102422404;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ParsedMagnetData_TriggerState1325291107.h"
#include "AssemblyU2DCSharp_ParsedMagnetData_MagnetWindowSta3440928333.h"

// System.Void ParsedMagnetData::.ctor()
extern "C"  void ParsedMagnetData__ctor_m1894533878 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParsedMagnetData::Update()
extern "C"  void ParsedMagnetData_Update_m327870167 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParsedMagnetData::CheckStability()
extern "C"  bool ParsedMagnetData_CheckStability_m2634010691 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParsedMagnetData/TriggerState ParsedMagnetData::CheckTriggerState()
extern "C"  int32_t ParsedMagnetData_CheckTriggerState_m1920485221 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParsedMagnetData::MagnetAbsent()
extern "C"  bool ParsedMagnetData_MagnetAbsent_m1389912005 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParsedMagnetData::IsNegative()
extern "C"  bool ParsedMagnetData_IsNegative_m4056504641 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParsedMagnetData::IsPositive()
extern "C"  bool ParsedMagnetData_IsPositive_m717784581 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParsedMagnetData::TrimMagnetWindow()
extern "C"  void ParsedMagnetData_TrimMagnetWindow_m3816470090 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParsedMagnetData::AddToMagnetWindow()
extern "C"  void ParsedMagnetData_AddToMagnetWindow_m3693807402 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParsedMagnetData/MagnetWindowState ParsedMagnetData::CaptureMagnetWindow()
extern "C"  MagnetWindowState_t3440928333  ParsedMagnetData_CaptureMagnetWindow_m682991460 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ParsedMagnetData::Average(System.Collections.Generic.List`1<ParsedMagnetData/MagnetMoment>)
extern "C"  float ParsedMagnetData_Average_m292722973 (ParsedMagnetData_t1462532421 * __this, List_1_t3102422404 * ___moments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParsedMagnetData::IsMagnetGoingDown(System.Single,System.Single,System.Single)
extern "C"  bool ParsedMagnetData_IsMagnetGoingDown_m465648365 (ParsedMagnetData_t1462532421 * __this, float ___min0, float ___max1, float ___start2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParsedMagnetData::IsDown()
extern "C"  bool ParsedMagnetData_IsDown_m2833213422 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParsedMagnetData::IsUp()
extern "C"  bool ParsedMagnetData_IsUp_m3847024231 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParsedMagnetData::ResetState()
extern "C"  void ParsedMagnetData_ResetState_m3837781456 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParsedMagnetData::PrintDebug()
extern "C"  void ParsedMagnetData_PrintDebug_m3715863540 (ParsedMagnetData_t1462532421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
