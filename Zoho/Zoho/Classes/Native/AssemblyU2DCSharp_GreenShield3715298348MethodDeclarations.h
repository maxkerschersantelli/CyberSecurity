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

// GreenShield
struct GreenShield_t3715298348;
// System.String
struct String_t;
// UnityEngine.Collider
struct Collider_t2939674232;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"

// System.Void GreenShield::.ctor()
extern "C"  void GreenShield__ctor_m1919580351 (GreenShield_t3715298348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreenShield::Start()
extern "C"  void GreenShield_Start_m866718143 (GreenShield_t3715298348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreenShield::Update()
extern "C"  void GreenShield_Update_m1104310830 (GreenShield_t3715298348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GreenShield::GetColor()
extern "C"  String_t* GreenShield_GetColor_m3282885519 (GreenShield_t3715298348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreenShield::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void GreenShield_OnTriggerEnter_m1958248217 (GreenShield_t3715298348 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GreenShield::EndShield()
extern "C"  Il2CppObject * GreenShield_EndShield_m1353908553 (GreenShield_t3715298348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
