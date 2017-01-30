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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TargetBehavior
struct  TargetBehavior_t3211801379  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 TargetBehavior::health
	int32_t ___health_2;
	// UnityEngine.GameObject TargetBehavior::levelController
	GameObject_t3674682005 * ___levelController_3;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(TargetBehavior_t3211801379, ___health_2)); }
	inline int32_t get_health_2() const { return ___health_2; }
	inline int32_t* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(int32_t value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_levelController_3() { return static_cast<int32_t>(offsetof(TargetBehavior_t3211801379, ___levelController_3)); }
	inline GameObject_t3674682005 * get_levelController_3() const { return ___levelController_3; }
	inline GameObject_t3674682005 ** get_address_of_levelController_3() { return &___levelController_3; }
	inline void set_levelController_3(GameObject_t3674682005 * value)
	{
		___levelController_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelController_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
