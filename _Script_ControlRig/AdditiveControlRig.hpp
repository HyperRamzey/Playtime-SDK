#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ControlRig.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct AdditiveControlRig : public ControlRig {
    private: char pad_650[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x660
#pragma pack(pop)
}
