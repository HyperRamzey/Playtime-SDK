#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LiveLinkInterface\LiveLinkSourceFactory.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapHandTracking {
#pragma pack(push, 1)
struct LiveLinkMagicLeapHandTrackingSourceFactory : public _Script_LiveLinkInterface::LiveLinkSourceFactory {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
