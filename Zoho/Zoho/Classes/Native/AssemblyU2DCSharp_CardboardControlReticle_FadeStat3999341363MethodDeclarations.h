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

// CardboardControlReticle/FadeState
struct FadeState_t3999341363;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void CardboardControlReticle/FadeState::.ctor()
extern "C"  void FadeState__ctor_m3142298520 (FadeState_t3999341363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color CardboardControlReticle/FadeState::CurrentColor()
extern "C"  Color_t4194546905  FadeState_CurrentColor_m1412427055 (FadeState_t3999341363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardControlReticle/FadeState::CurrentAlpha()
extern "C"  float FadeState_CurrentAlpha_m589781637 (FadeState_t3999341363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlReticle/FadeState::Interrupt()
extern "C"  void FadeState_Interrupt_m922832857 (FadeState_t3999341363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardControlReticle/FadeState::PercentageFaded(System.Single)
extern "C"  float FadeState_PercentageFaded_m371997435 (FadeState_t3999341363 * __this, float ___counter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlReticle/FadeState::UpdateCounter(System.Single,UnityEngine.GameObject)
extern "C"  void FadeState_UpdateCounter_m73662684 (FadeState_t3999341363 * __this, float ___fadeTime0, GameObject_t3674682005 * ___reticle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlReticle/FadeState::ResetCounter()
extern "C"  void FadeState_ResetCounter_m3413354009 (FadeState_t3999341363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
