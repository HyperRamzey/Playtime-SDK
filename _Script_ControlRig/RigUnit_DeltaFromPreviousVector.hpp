#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_SimBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_DeltaFromPreviousVector : public RigUnit_SimBase {
    private: char pad_8[0x30]; public:
    void* get_Value();
    void* get_Delta();
    void* get_PreviousValue();
    void* get_Cache();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
