#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_CardboardControlReticle_FadeStat3999341363.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardControlReticle/AlphaFade
struct  AlphaFade_t5344440  : public FadeState_t3999341363
{
public:
	// System.Single CardboardControlReticle/AlphaFade::target
	float ___target_3;
	// System.Single CardboardControlReticle/AlphaFade::source
	float ___source_4;

public:
	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(AlphaFade_t5344440, ___target_3)); }
	inline float get_target_3() const { return ___target_3; }
	inline float* get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(float value)
	{
		___target_3 = value;
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(AlphaFade_t5344440, ___source_4)); }
	inline float get_source_4() const { return ___source_4; }
	inline float* get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(float value)
	{
		___source_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
