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
struct RigUnit_MultiFABRIK : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0x88]; public:
    void* get_RootBone();
    void* get_Effectors();
    float& get_Precision();
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    int32_t& get_MaxIterations();
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
