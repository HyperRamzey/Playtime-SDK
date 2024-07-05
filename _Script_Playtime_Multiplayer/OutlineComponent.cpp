#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "OutlineComponent.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::OutlineComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.OutlineComponent");
    return result;
}
void _Script_Playtime_Multiplayer::OutlineComponent::SetOutline(bool Active) {
    return;
}
void _Script_Playtime_Multiplayer::OutlineComponent::Server_Outline(float Duration, bool CanMonsterSee, bool CanSurvivorsSee) {
    return;
}
void _Script_Playtime_Multiplayer::OutlineComponent::Multicast_Outline(float Duration, bool CanMonsterSee, bool CanSurvivorsSee) {
    return;
}
