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

// ParsedMagnetData/MagnetWindowState
struct  MagnetWindowState_t3440928333 
{
public:
	// System.Single ParsedMagnetData/MagnetWindowState::ratio
	float ___ratio_0;
	// System.Single ParsedMagnetData/MagnetWindowState::delta
	float ___delta_1;

public:
	inline static int32_t get_offset_of_ratio_0() { return static_cast<int32_t>(offsetof(MagnetWindowState_t3440928333, ___ratio_0)); }
	inline float get_ratio_0() const { return ___ratio_0; }
	inline float* get_address_of_ratio_0() { return &___ratio_0; }
	inline void set_ratio_0(float value)
	{
		___ratio_0 = value;
	}

	inline static int32_t get_offset_of_delta_1() { return static_cast<int32_t>(offsetof(MagnetWindowState_t3440928333, ___delta_1)); }
	inline float get_delta_1() const { return ___delta_1; }
	inline float* get_address_of_delta_1() { return &___delta_1; }
	inline void set_delta_1(float value)
	{
		___delta_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: ParsedMagnetData/MagnetWindowState
struct MagnetWindowState_t3440928333_marshaled_pinvoke
{
	float ___ratio_0;
	float ___delta_1;
};
// Native definition for marshalling of: ParsedMagnetData/MagnetWindowState
struct MagnetWindowState_t3440928333_marshaled_com
{
	float ___ratio_0;
	float ___delta_1;
};
