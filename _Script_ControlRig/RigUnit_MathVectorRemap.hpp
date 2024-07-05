#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathVectorBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathVectorRemap : public RigUnit_MathVectorBase {
    private: char pad_8[0x50]; public:
    void* get_Value();
    void* get_SourceMinimum();
    void* get_SourceMaximum();
    void* get_TargetMinimum();
    void* get_TargetMaximum();
    bool get_bClamp();
    void set_bClamp(bool value);
    void* get_Result();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
