#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LevelSequence\LevelSequence.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigSequence : public _Script_LevelSequence::LevelSequence {
    private: char pad_1c8[0x58]; public:
    void* get_LastExportedToAnimationSequence();
    void* get_LastExportedUsingSkeletalMesh();
    float& get_LastExportedFrameRate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x220
#pragma pack(pop)
}
