#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AnimGraphRuntime\AnimSequencerInstanceProxy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigSequencerAnimInstanceProxy : public _Script_AnimGraphRuntime::AnimSequencerInstanceProxy {
    private: char pad_a10[0x2b0]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xcc0
#pragma pack(pop)
}
