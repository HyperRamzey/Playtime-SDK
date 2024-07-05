#include "..\FUObjectArray.hpp"
#include "BP_ToyPart_C.hpp"
#include "..\_Game_Interface_BPC_Tooltip\BPC_Tooltip_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavToyPart\BP_NavToyPart_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_AIModule\AIPerceptionStimuliSourceComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkHand.hpp"
#include "..\_Script_Playtime_Multiplayer\NetworkToyPart.hpp"
#include "..\_Script_SmoothSyncPlugin\SmoothSync.hpp"
void* _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x250);
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x258);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::get_Players() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x280);
}
bool _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::get_UseGivenToyPartIndex() {
    return (*(uint8_t*)((uintptr_t)this + 0x278 + 0)) & 1 != 0;
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::get_BPC_Tooltip() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x260);
}
_Script_AIModule::AIPerceptionStimuliSourceComponent*& _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::get_AIPerceptionStimuliSource() {
    return *(_Script_AIModule::AIPerceptionStimuliSourceComponent**)((uintptr_t)this + 0x268);
}
bool _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::get_Deposited_() {
    return (*(uint8_t*)((uintptr_t)this + 0x288 + 0)) & 1 != 0;
}
_Script_SmoothSyncPlugin::SmoothSync*& _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::get_SmoothSync() {
    return *(_Script_SmoothSyncPlugin::SmoothSync**)((uintptr_t)this + 0x270);
}
void _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::set_UseGivenToyPartIndex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x278 + 0);
    *(uint8_t*)((uintptr_t)this + 0x278 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::set_Deposited_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x288 + 0);
    *(uint8_t*)((uintptr_t)this + 0x288 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavToyPart::BP_NavToyPart_C*& _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::get_NavIndicator() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavToyPart::BP_NavToyPart_C**)((uintptr_t)this + 0x290);
}
void _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::ReceiveDestroyed() {
    return;
}
bool _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::get_UseGivenMesh_() {
    return (*(uint8_t*)((uintptr_t)this + 0x298 + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::set_UseGivenMesh_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x298 + 0);
    *(uint8_t*)((uintptr_t)this + 0x298 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::get_GivenToySelection() {
    return (void*)((uintptr_t)this + 0x299);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Game/ToyData/BP_ToyPart.BP_ToyPart_C");
    return result;
}
void _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::ReceiveBeginPlay() {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::BP_CheckForNearbyPlayer0() {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::Detach(_Script_Playtime_Multiplayer::ANetworkHand* Hand) {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::DestroyNavIndicator() {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C::ExecuteUbergraph_BP_ToyPart(int32_t EntryPoint) {
    return;
}
