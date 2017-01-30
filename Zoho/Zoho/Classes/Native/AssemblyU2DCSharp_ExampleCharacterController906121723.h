#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CardboardControl
struct CardboardControl_t480265927;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleCharacterController
struct  ExampleCharacterController_t906121723  : public MonoBehaviour_t667441552
{
public:

public:
};

struct ExampleCharacterController_t906121723_StaticFields
{
public:
	// CardboardControl ExampleCharacterController::cardboard
	CardboardControl_t480265927 * ___cardboard_2;

public:
	inline static int32_t get_offset_of_cardboard_2() { return static_cast<int32_t>(offsetof(ExampleCharacterController_t906121723_StaticFields, ___cardboard_2)); }
	inline CardboardControl_t480265927 * get_cardboard_2() const { return ___cardboard_2; }
	inline CardboardControl_t480265927 ** get_address_of_cardboard_2() { return &___cardboard_2; }
	inline void set_cardboard_2(CardboardControl_t480265927 * value)
	{
		___cardboard_2 = value;
		Il2CppCodeGenWriteBarrier(&___cardboard_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
