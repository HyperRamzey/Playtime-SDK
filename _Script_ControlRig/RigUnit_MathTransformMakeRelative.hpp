#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathTransformBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathTransformMakeRelative : public RigUnit_MathTransformBase {
    private: char pad_8[0x98]; public:
    void* get_Global();
    void* get_Parent();
    void* get_Local();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
