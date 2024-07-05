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
struct RigUnit_BoneHarmonics : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0x80]; public:
    void* get_Bones();
    void* get_WaveSpeed();
    void* get_WaveFrequency();
    void* get_WaveAmplitude();
    void* get_WaveOffset();
    void* get_WaveNoise();
    void* get_WaveEase();
    float& get_WaveMinimum();
    float& get_WaveMaximum();
    void* get_RotationOrder();
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
