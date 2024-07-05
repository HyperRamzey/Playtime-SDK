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
struct RigUnit_MathTransformClampSpatially : public RigUnit_MathTransformBase {
    private: char pad_8[0xc8]; public:
    void* get_Value();
    void* get_Axis();
    void* get_Type();
    float& get_Minimum();
    float& get_Maximum();
    void* get_Space();
    bool get_bDrawDebug();
    void set_bDrawDebug(bool value);
    void* get_DebugColor();
    float& get_DebugThickness();
    void* get_Result();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
