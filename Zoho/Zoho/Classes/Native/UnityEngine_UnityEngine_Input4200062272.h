#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Compass
struct Compass_t599792712;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t4200062272  : public Il2CppObject
{
public:

public:
};

struct Input_t4200062272_StaticFields
{
public:
	// UnityEngine.Compass UnityEngine.Input::compassInstance
	Compass_t599792712 * ___compassInstance_0;

public:
	inline static int32_t get_offset_of_compassInstance_0() { return static_cast<int32_t>(offsetof(Input_t4200062272_StaticFields, ___compassInstance_0)); }
	inline Compass_t599792712 * get_compassInstance_0() const { return ___compassInstance_0; }
	inline Compass_t599792712 ** get_address_of_compassInstance_0() { return &___compassInstance_0; }
	inline void set_compassInstance_0(Compass_t599792712 * value)
	{
		___compassInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___compassInstance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
