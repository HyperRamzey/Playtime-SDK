#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PlaytimeProfilingLibrary : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    void* GetStreamingLevelNameFromActor(_Script_Engine::Actor* Actor);
    void DefineCSVStat(void* StatName, int32_t Category, float Value);
}; // Size: 0x28
#pragma pack(pop)
}
