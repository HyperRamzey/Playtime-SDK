#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LiveLinkControllerBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkComponents {
#pragma pack(push, 1)
struct LiveLinkLightController : public LiveLinkControllerBase {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
