#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstanceProxy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigLayerInstanceProxy : public _Script_Engine::AnimInstanceProxy {
    private: char pad_770[0xa0]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x810
#pragma pack(pop)
}
