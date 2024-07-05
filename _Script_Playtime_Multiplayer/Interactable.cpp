#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "ANetworkCharacter.hpp"
#include "Interactable.hpp"
void _Script_Playtime_Multiplayer::Interactable::Authority_EndInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor) {
    return;
}
void _Script_Playtime_Multiplayer::Interactable::Owner_ContinueInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, float Progress) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Interactable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.Interactable");
    return result;
}
void _Script_Playtime_Multiplayer::Interactable::Authority_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration) {
    return;
}
void _Script_Playtime_Multiplayer::Interactable::Authority_ContinueInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, float Progress) {
    return;
}
void _Script_Playtime_Multiplayer::Interactable::Owner_EndInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor) {
    return;
}
void _Script_Playtime_Multiplayer::Interactable::Owner_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration) {
    return;
}
