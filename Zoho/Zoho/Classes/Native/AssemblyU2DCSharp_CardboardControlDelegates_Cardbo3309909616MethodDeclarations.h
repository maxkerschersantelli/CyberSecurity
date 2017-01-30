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

// CardboardControlDelegates.CardboardControlDelegate
struct CardboardControlDelegate_t3309909616;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void CardboardControlDelegates.CardboardControlDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void CardboardControlDelegate__ctor_m2610058778 (CardboardControlDelegate_t3309909616 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlDelegates.CardboardControlDelegate::Invoke(System.Object)
extern "C"  void CardboardControlDelegate_Invoke_m4015013664 (CardboardControlDelegate_t3309909616 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult CardboardControlDelegates.CardboardControlDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CardboardControlDelegate_BeginInvoke_m153301057 (CardboardControlDelegate_t3309909616 * __this, Il2CppObject * ___sender0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlDelegates.CardboardControlDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void CardboardControlDelegate_EndInvoke_m1080616234 (CardboardControlDelegate_t3309909616 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
