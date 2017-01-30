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

// CardboardControlBox
struct CardboardControlBox_t1066235268;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void CardboardControlBox::.ctor()
extern "C"  void CardboardControlBox__ctor_m398627431 (CardboardControlBox_t1066235268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlBox::Start()
extern "C"  void CardboardControlBox_Start_m3640732519 (CardboardControlBox_t1066235268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlBox::Update()
extern "C"  void CardboardControlBox_Update_m1199410566 (CardboardControlBox_t1066235268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardControlBox::KeyFor(System.String)
extern "C"  bool CardboardControlBox_KeyFor_m3159578031 (CardboardControlBox_t1066235268 * __this, String_t* ___movement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlBox::CheckOrientation()
extern "C"  void CardboardControlBox_CheckOrientation_m4113207717 (CardboardControlBox_t1066235268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlBox::ReportTilt()
extern "C"  void CardboardControlBox_ReportTilt_m3055494862 (CardboardControlBox_t1066235268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardControlBox::IsTilted()
extern "C"  bool CardboardControlBox_IsTilted_m2677130031 (CardboardControlBox_t1066235268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardControlBox::<OnTilt>m__0(System.Object)
extern "C"  void CardboardControlBox_U3COnTiltU3Em__0_m46143310 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
