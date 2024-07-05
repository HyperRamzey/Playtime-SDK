#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_GetControlVector2D : public RigUnit {
    private: char pad_8[0x38]; public:
    void* get_Control();
    void* get_Vector();
    void* get_Minimum();
    void* get_Maximum();
    void* get_CachedControlIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}