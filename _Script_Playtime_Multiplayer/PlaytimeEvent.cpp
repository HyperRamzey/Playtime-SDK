#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundWave.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "PlaytimeEvent.hpp"
void* _Script_Playtime_Multiplayer::PlaytimeEvent::get_ShopItemOverlay() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Playtime_Multiplayer::PlaytimeEvent::get_EndDate() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Playtime_Multiplayer::PlaytimeEvent::get_EventName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Playtime_Multiplayer::PlaytimeEvent::get_StartDate() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::SoundWave*& _Script_Playtime_Multiplayer::PlaytimeEvent::get_EventMusic() {
    return *(_Script_Engine::SoundWave**)((uintptr_t)this + 0x98);
}
void* _Script_Playtime_Multiplayer::PlaytimeEvent::get_EventSplash() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Playtime_Multiplayer::PlaytimeEvent::get_EventIcon() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Playtime_Multiplayer::PlaytimeEvent::get_EventCinematicPath() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlaytimeEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.PlaytimeEvent");
    return result;
}
