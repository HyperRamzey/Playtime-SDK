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
struct FKControlRig : public ControlRig {
    private: char pad_650[0x18]; public:
    void* get_IsControlActive();
    void* get_ApplyMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x668
#pragma pack(pop)
}
