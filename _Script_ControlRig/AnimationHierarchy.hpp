#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AnimationCore\NodeHierarchyWithUserData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct AnimationHierarchy : public _Script_AnimationCore::NodeHierarchyWithUserData {
    private: char pad_78[0x10]; public:
    void* get_UserData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
