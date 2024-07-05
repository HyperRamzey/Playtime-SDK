#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct NavigatorIndicatorSorter : public _Script_Engine::ActorComponent {
    static _Script_CoreUObject::Class* static_class();
    void* SortArray(void* ElementArray);
}; // Size: 0xb0
#pragma pack(pop)
}
