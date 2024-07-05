#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "UNetworkGrabComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct NetworkPhysicsGrabComponent : public UNetworkGrabComponent {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
