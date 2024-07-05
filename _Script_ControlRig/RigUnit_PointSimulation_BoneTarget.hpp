#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_PointSimulation_BoneTarget {
    private: char pad_0[0x14]; public:
    void* get_Bone();
    int32_t& get_TranslationPoint();
    int32_t& get_PrimaryAimPoint();
    int32_t& get_SecondaryAimPoint();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
