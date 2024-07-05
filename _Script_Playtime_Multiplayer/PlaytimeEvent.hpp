#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PlaytimeEvent : public _Script_Engine::TableRowBase {
    private: char pad_8[0xa8]; public:
    void* get_EventName();
    void* get_StartDate();
    void* get_EndDate();
    void* get_EventSplash();
    void* get_EventIcon();
    void* get_ShopItemOverlay();
    _Script_Engine::SoundWave*& get_EventMusic();
    void* get_EventCinematicPath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
