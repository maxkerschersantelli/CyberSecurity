#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GreenShield
struct  GreenShield_t3715298348  : public MonoBehaviour_t667441552
{
public:
	// System.String GreenShield::color
	String_t* ___color_2;
	// System.Int32 GreenShield::shieldLength
	int32_t ___shieldLength_3;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(GreenShield_t3715298348, ___color_2)); }
	inline String_t* get_color_2() const { return ___color_2; }
	inline String_t** get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(String_t* value)
	{
		___color_2 = value;
		Il2CppCodeGenWriteBarrier(&___color_2, value);
	}

	inline static int32_t get_offset_of_shieldLength_3() { return static_cast<int32_t>(offsetof(GreenShield_t3715298348, ___shieldLength_3)); }
	inline int32_t get_shieldLength_3() const { return ___shieldLength_3; }
	inline int32_t* get_address_of_shieldLength_3() { return &___shieldLength_3; }
	inline void set_shieldLength_3(int32_t value)
	{
		___shieldLength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
