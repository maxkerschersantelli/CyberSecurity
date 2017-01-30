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
// CardboardControlReticle/ColorFade
struct ColorFade_t2579923005;
// CardboardControlReticle/AlphaFade
struct AlphaFade_t5344440;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardControlReticle
struct  CardboardControlReticle_t1717251949  : public MonoBehaviour_t667441552
{
public:
	// System.Single CardboardControlReticle::fadeTime
	float ___fadeTime_2;
	// System.Boolean CardboardControlReticle::startHidden
	bool ___startHidden_3;
	// UnityEngine.LayerMask CardboardControlReticle::layerMask
	LayerMask_t3236759763  ___layerMask_4;
	// UnityEngine.GameObject CardboardControlReticle::prefab
	GameObject_t3674682005 * ___prefab_5;
	// UnityEngine.GameObject CardboardControlReticle::reticle
	GameObject_t3674682005 * ___reticle_6;
	// CardboardControlReticle/ColorFade CardboardControlReticle::colorFade
	ColorFade_t2579923005 * ___colorFade_7;
	// CardboardControlReticle/AlphaFade CardboardControlReticle::alphaFade
	AlphaFade_t5344440 * ___alphaFade_8;

public:
	inline static int32_t get_offset_of_fadeTime_2() { return static_cast<int32_t>(offsetof(CardboardControlReticle_t1717251949, ___fadeTime_2)); }
	inline float get_fadeTime_2() const { return ___fadeTime_2; }
	inline float* get_address_of_fadeTime_2() { return &___fadeTime_2; }
	inline void set_fadeTime_2(float value)
	{
		___fadeTime_2 = value;
	}

	inline static int32_t get_offset_of_startHidden_3() { return static_cast<int32_t>(offsetof(CardboardControlReticle_t1717251949, ___startHidden_3)); }
	inline bool get_startHidden_3() const { return ___startHidden_3; }
	inline bool* get_address_of_startHidden_3() { return &___startHidden_3; }
	inline void set_startHidden_3(bool value)
	{
		___startHidden_3 = value;
	}

	inline static int32_t get_offset_of_layerMask_4() { return static_cast<int32_t>(offsetof(CardboardControlReticle_t1717251949, ___layerMask_4)); }
	inline LayerMask_t3236759763  get_layerMask_4() const { return ___layerMask_4; }
	inline LayerMask_t3236759763 * get_address_of_layerMask_4() { return &___layerMask_4; }
	inline void set_layerMask_4(LayerMask_t3236759763  value)
	{
		___layerMask_4 = value;
	}

	inline static int32_t get_offset_of_prefab_5() { return static_cast<int32_t>(offsetof(CardboardControlReticle_t1717251949, ___prefab_5)); }
	inline GameObject_t3674682005 * get_prefab_5() const { return ___prefab_5; }
	inline GameObject_t3674682005 ** get_address_of_prefab_5() { return &___prefab_5; }
	inline void set_prefab_5(GameObject_t3674682005 * value)
	{
		___prefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_5, value);
	}

	inline static int32_t get_offset_of_reticle_6() { return static_cast<int32_t>(offsetof(CardboardControlReticle_t1717251949, ___reticle_6)); }
	inline GameObject_t3674682005 * get_reticle_6() const { return ___reticle_6; }
	inline GameObject_t3674682005 ** get_address_of_reticle_6() { return &___reticle_6; }
	inline void set_reticle_6(GameObject_t3674682005 * value)
	{
		___reticle_6 = value;
		Il2CppCodeGenWriteBarrier(&___reticle_6, value);
	}

	inline static int32_t get_offset_of_colorFade_7() { return static_cast<int32_t>(offsetof(CardboardControlReticle_t1717251949, ___colorFade_7)); }
	inline ColorFade_t2579923005 * get_colorFade_7() const { return ___colorFade_7; }
	inline ColorFade_t2579923005 ** get_address_of_colorFade_7() { return &___colorFade_7; }
	inline void set_colorFade_7(ColorFade_t2579923005 * value)
	{
		___colorFade_7 = value;
		Il2CppCodeGenWriteBarrier(&___colorFade_7, value);
	}

	inline static int32_t get_offset_of_alphaFade_8() { return static_cast<int32_t>(offsetof(CardboardControlReticle_t1717251949, ___alphaFade_8)); }
	inline AlphaFade_t5344440 * get_alphaFade_8() const { return ___alphaFade_8; }
	inline AlphaFade_t5344440 ** get_address_of_alphaFade_8() { return &___alphaFade_8; }
	inline void set_alphaFade_8(AlphaFade_t5344440 * value)
	{
		___alphaFade_8 = value;
		Il2CppCodeGenWriteBarrier(&___alphaFade_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
