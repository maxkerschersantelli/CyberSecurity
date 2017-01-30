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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Transform_1_t2349101755;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22065771578.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3757893742_gshared (Transform_1_t2349101755 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3757893742(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2349101755 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3757893742_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2065771578  Transform_1_Invoke_m4133218506_gshared (Transform_1_t2349101755 * __this, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4133218506(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2065771578  (*) (Transform_1_t2349101755 *, Il2CppObject *, float, const MethodInfo*))Transform_1_Invoke_m4133218506_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3465937013_gshared (Transform_1_t2349101755 * __this, Il2CppObject * ___key0, float ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3465937013(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2349101755 *, Il2CppObject *, float, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3465937013_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2065771578  Transform_1_EndInvoke_m762983808_gshared (Transform_1_t2349101755 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m762983808(__this, ___result0, method) ((  KeyValuePair_2_t2065771578  (*) (Transform_1_t2349101755 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m762983808_gshared)(__this, ___result0, method)
