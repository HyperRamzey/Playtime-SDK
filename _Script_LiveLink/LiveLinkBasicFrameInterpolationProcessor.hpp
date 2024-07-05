#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LiveLinkInterface\LiveLinkFrameInterpolationProcessor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkBasicFrameInterpolationProcessor : public _Script_LiveLinkInterface::LiveLinkFrameInterpolationProcessor {
    private: char pad_28[0x18]; public:
    bool get_bInterpolatePropertyValues();
    void set_bInterpolatePropertyValues(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
