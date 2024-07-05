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
struct RigUnit_ChainHarmonics : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0x208]; public:
    void* get_ChainRoot();
    void* get_Speed();
    void* get_Reach();
    void* get_Wave();
    void* get_WaveCurve();
    void* get_Pendulum();
    bool get_bDrawDebug();
    void set_bDrawDebug(bool value);
    void* get_DrawWorldOffset();
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
