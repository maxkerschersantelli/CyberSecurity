#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardControlReticle/FadeState
struct  FadeState_t3999341363  : public Il2CppObject
{
public:
	// System.Single CardboardControlReticle/FadeState::counter
	float ___counter_0;
	// System.Single CardboardControlReticle/FadeState::fadeTime
	float ___fadeTime_1;
	// UnityEngine.GameObject CardboardControlReticle/FadeState::reticle
	GameObject_t3674682005 * ___reticle_2;

public:
	inline static int32_t get_offset_of_counter_0() { return static_cast<int32_t>(offsetof(FadeState_t3999341363, ___counter_0)); }
	inline float get_counter_0() const { return ___counter_0; }
	inline float* get_address_of_counter_0() { return &___counter_0; }
	inline void set_counter_0(float value)
	{
		___counter_0 = value;
	}

	inline static int32_t get_offset_of_fadeTime_1() { return static_cast<int32_t>(offsetof(FadeState_t3999341363, ___fadeTime_1)); }
	inline float get_fadeTime_1() const { return ___fadeTime_1; }
	inline float* get_address_of_fadeTime_1() { return &___fadeTime_1; }
	inline void set_fadeTime_1(float value)
	{
		___fadeTime_1 = value;
	}

	inline static int32_t get_offset_of_reticle_2() { return static_cast<int32_t>(offsetof(FadeState_t3999341363, ___reticle_2)); }
	inline GameObject_t3674682005 * get_reticle_2() const { return ___reticle_2; }
	inline GameObject_t3674682005 ** get_address_of_reticle_2() { return &___reticle_2; }
	inline void set_reticle_2(GameObject_t3674682005 * value)
	{
		___reticle_2 = value;
		Il2CppCodeGenWriteBarrier(&___reticle_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
