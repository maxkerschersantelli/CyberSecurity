#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_CardboardControlReticle_FadeStat3999341363.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardControlReticle/ColorFade
struct  ColorFade_t2579923005  : public FadeState_t3999341363
{
public:
	// UnityEngine.Color CardboardControlReticle/ColorFade::target
	Color_t4194546905  ___target_3;
	// UnityEngine.Color CardboardControlReticle/ColorFade::source
	Color_t4194546905  ___source_4;

public:
	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(ColorFade_t2579923005, ___target_3)); }
	inline Color_t4194546905  get_target_3() const { return ___target_3; }
	inline Color_t4194546905 * get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Color_t4194546905  value)
	{
		___target_3 = value;
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(ColorFade_t2579923005, ___source_4)); }
	inline Color_t4194546905  get_source_4() const { return ___source_4; }
	inline Color_t4194546905 * get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(Color_t4194546905  value)
	{
		___source_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
