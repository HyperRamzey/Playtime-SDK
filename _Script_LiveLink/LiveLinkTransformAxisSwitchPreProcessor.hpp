#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LiveLinkInterface\LiveLinkFramePreProcessor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkTransformAxisSwitchPreProcessor : public _Script_LiveLinkInterface::LiveLinkFramePreProcessor {
    private: char pad_28[0x30]; public:
    void* get_FrontAxis();
    void* get_RightAxis();
    void* get_UpAxis();
    bool get_bUseOffsetPosition();
    void set_bUseOffsetPosition(bool value);
    bool get_bUseOffsetOrientation();
    void set_bUseOffsetOrientation(bool value);
    void* get_OffsetPosition();
    void* get_OffsetOrientation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
