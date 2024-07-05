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
struct RigUnit_ModifyTransforms : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0x30]; public:
    void* get_ItemToModify();
    float& get_Weight();
    float& get_WeightMinimum();
    float& get_WeightMaximum();
    void* get_Mode();
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
