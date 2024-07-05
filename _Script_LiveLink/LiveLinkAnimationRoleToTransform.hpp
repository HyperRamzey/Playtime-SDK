#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LiveLinkInterface\LiveLinkFrameTranslator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkAnimationRoleToTransform : public _Script_LiveLinkInterface::LiveLinkFrameTranslator {
    private: char pad_28[0x18]; public:
    void* get_BoneName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
