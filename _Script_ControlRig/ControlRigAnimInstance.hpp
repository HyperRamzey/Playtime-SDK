#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigAnimInstance : public _Script_Engine::AnimInstance {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c0
#pragma pack(pop)
}