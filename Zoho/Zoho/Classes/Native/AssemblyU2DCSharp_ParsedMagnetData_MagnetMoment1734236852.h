#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParsedMagnetData/MagnetMoment
struct  MagnetMoment_t1734236852 
{
public:
	// System.Single ParsedMagnetData/MagnetMoment::deltaTime
	float ___deltaTime_0;
	// System.Single ParsedMagnetData/MagnetMoment::yMagnitude
	float ___yMagnitude_1;

public:
	inline static int32_t get_offset_of_deltaTime_0() { return static_cast<int32_t>(offsetof(MagnetMoment_t1734236852, ___deltaTime_0)); }
	inline float get_deltaTime_0() const { return ___deltaTime_0; }
	inline float* get_address_of_deltaTime_0() { return &___deltaTime_0; }
	inline void set_deltaTime_0(float value)
	{
		___deltaTime_0 = value;
	}

	inline static int32_t get_offset_of_yMagnitude_1() { return static_cast<int32_t>(offsetof(MagnetMoment_t1734236852, ___yMagnitude_1)); }
	inline float get_yMagnitude_1() const { return ___yMagnitude_1; }
	inline float* get_address_of_yMagnitude_1() { return &___yMagnitude_1; }
	inline void set_yMagnitude_1(float value)
	{
		___yMagnitude_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: ParsedMagnetData/MagnetMoment
struct MagnetMoment_t1734236852_marshaled_pinvoke
{
	float ___deltaTime_0;
	float ___yMagnitude_1;
};
// Native definition for marshalling of: ParsedMagnetData/MagnetMoment
struct MagnetMoment_t1734236852_marshaled_com
{
	float ___deltaTime_0;
	float ___yMagnitude_1;
};
