#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LiveLinkInterface\LiveLinkSourceFactory.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OpenXRHandTracking {
#pragma pack(push, 1)
struct LiveLinkOpenXRHandTrackingSourceFactory : public _Script_LiveLinkInterface::LiveLinkSourceFactory {
    private: char pad_28[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
