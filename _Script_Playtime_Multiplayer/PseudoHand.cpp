#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "ANetworkCharacter.hpp"
#include "NetworkRope.hpp"
#include "PseudoHand.hpp"
_Script_Engine::Actor*& _Script_Playtime_Multiplayer::PseudoHand::get_WormHole() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x260);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PseudoHand::get_MyRootComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x220);
}
void* _Script_Playtime_Multiplayer::PseudoHand::get_NetworkRopeClass() {
    return (void*)((uintptr_t)this + 0x240);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PseudoHand::get_HandAttachmentScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PseudoHand::get_PipeAttachmentScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
_Script_Playtime_Multiplayer::NetworkRope*& _Script_Playtime_Multiplayer::PseudoHand::get_NetworkRope() {
    return *(_Script_Playtime_Multiplayer::NetworkRope**)((uintptr_t)this + 0x230);
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::PseudoHand::get_TargetCharacter() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x250);
}
_Script_Engine::SplineComponent*& _Script_Playtime_Multiplayer::PseudoHand::get_ExitSpline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x248);
}
float& _Script_Playtime_Multiplayer::PseudoHand::get_CurrentSplineProgress() {
    return *(float*)((uintptr_t)this + 0x258);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PseudoHand::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PseudoHand");
    return result;
}
