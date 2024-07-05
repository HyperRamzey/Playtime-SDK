#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_HighlevelBaseMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_DistributeRotationForCollection : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0x78]; public:
    void* get_Items();
    void* get_Rotations();
    void* get_RotationEaseType();
    float& get_Weight();
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
