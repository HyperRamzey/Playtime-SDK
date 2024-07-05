#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\TriggerVolume.hpp"
#include "Zone.hpp"
void _Script_Playtime_Multiplayer::Zone::OnBeginOverlap(_Script_Engine::Actor* OverlappingActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void* _Script_Playtime_Multiplayer::Zone::get_ZoneDisplayName() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Script_Playtime_Multiplayer::Zone::OnEndOverlap(_Script_Engine::Actor* Overlapping, _Script_Engine::Actor* OtherActor) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Zone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.Zone");
    return result;
}
