#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MagicLeapRaycastQueryParams.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct MagicLeapRaycastFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_MagicLeap::MagicLeapRaycastQueryParams MakeRaycastQueryParams(_Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Direction, _Script_CoreUObject::Vector UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData);
}; // Size: 0x28
#pragma pack(pop)
}
