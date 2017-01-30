#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Fading
struct Fading_t2096705625;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighScoreUI/<SwitchScene>c__Iterator9
struct  U3CSwitchSceneU3Ec__Iterator9_t2882265183  : public Il2CppObject
{
public:
	// Fading HighScoreUI/<SwitchScene>c__Iterator9::<fade>__0
	Fading_t2096705625 * ___U3CfadeU3E__0_0;
	// System.Single HighScoreUI/<SwitchScene>c__Iterator9::<fadeTime>__1
	float ___U3CfadeTimeU3E__1_1;
	// System.Int32 HighScoreUI/<SwitchScene>c__Iterator9::$PC
	int32_t ___U24PC_2;
	// System.Object HighScoreUI/<SwitchScene>c__Iterator9::$current
	Il2CppObject * ___U24current_3;

public:
	inline static int32_t get_offset_of_U3CfadeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CSwitchSceneU3Ec__Iterator9_t2882265183, ___U3CfadeU3E__0_0)); }
	inline Fading_t2096705625 * get_U3CfadeU3E__0_0() const { return ___U3CfadeU3E__0_0; }
	inline Fading_t2096705625 ** get_address_of_U3CfadeU3E__0_0() { return &___U3CfadeU3E__0_0; }
	inline void set_U3CfadeU3E__0_0(Fading_t2096705625 * value)
	{
		___U3CfadeU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CfadeU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CfadeTimeU3E__1_1() { return static_cast<int32_t>(offsetof(U3CSwitchSceneU3Ec__Iterator9_t2882265183, ___U3CfadeTimeU3E__1_1)); }
	inline float get_U3CfadeTimeU3E__1_1() const { return ___U3CfadeTimeU3E__1_1; }
	inline float* get_address_of_U3CfadeTimeU3E__1_1() { return &___U3CfadeTimeU3E__1_1; }
	inline void set_U3CfadeTimeU3E__1_1(float value)
	{
		___U3CfadeTimeU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CSwitchSceneU3Ec__Iterator9_t2882265183, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CSwitchSceneU3Ec__Iterator9_t2882265183, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
