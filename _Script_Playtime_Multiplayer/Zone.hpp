#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TriggerVolume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct Zone : public _Script_Engine::TriggerVolume {
    private: char pad_258[0x10]; public:
    void* get_ZoneDisplayName();
    static _Script_CoreUObject::Class* static_class();
    void OnEndOverlap(_Script_Engine::Actor* Overlapping, _Script_Engine::Actor* OtherActor);
    void OnBeginOverlap(_Script_Engine::Actor* OverlappingActor, _Script_Engine::Actor* OtherActor);
}; // Size: 0x268
#pragma pack(pop)
}
