#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct NetworkToyPart : public _Script_Engine::StaticMeshActor {
    private: char pad_230[0x20]; public:
    void* get_FindFloorTraceChannel();
    int32_t& get_ToyPartIndex();
    bool get_bHasHandAttached();
    void set_bHasHandAttached(bool value);
    void* get_SecondaryObjectiveCheckTimer();
    static _Script_CoreUObject::Class* static_class();
    void MoveToyDown();
    void BP_CheckForNearbyPlayer();
}; // Size: 0x250
#pragma pack(pop)
}
