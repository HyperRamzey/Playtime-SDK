#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LiveLinkTransformRole.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkLightRole : public LiveLinkTransformRole {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}