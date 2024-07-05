#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_HighlevelBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_AimBoneMath : public RigUnit_HighlevelBase {
    private: char pad_8[0x138]; public:
    void* get_InputTransform();
    void* get_Primary();
    void* get_Secondary();
    float& get_Weight();
    void* get_Result();
    void* get_DebugSettings();
    void* get_PrimaryCachedSpace();
    void* get_SecondaryCachedSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
