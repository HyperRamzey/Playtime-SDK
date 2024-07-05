#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavPingLocation\BP_NavPingLocation_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem\BPC_NavSystem_C.hpp"
#include "BP_BoogieBot_C.hpp"
#include "..\_Game_Player_TrainingDummy_BP_CommsComponent\BP_CommsComponent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Playtime_Multiplayer\BoogieBot.hpp"
#include "..\_Script_Playtime_Multiplayer\OutlineComponent.hpp"
_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_BPC_NavSystem() {
    return *(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C**)((uintptr_t)this + 0x4e0);
}
void* _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x4d0);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_LeftArm() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x508);
}
bool _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_ReviveAbility() {
    return (*(uint8_t*)((uintptr_t)this + 0x550 + 0)) & 1 != 0;
}
_Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_BP_CommsComponent() {
    return *(_Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C**)((uintptr_t)this + 0x4d8);
}
_Script_Engine::CapsuleComponent*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_HeadCaps() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x4e8);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_RightArm() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x500);
}
_Script_Engine::CameraComponent*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x4f0);
}
_Script_Engine::SpringArmComponent*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_SpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x4f8);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_LeftLeg() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x510);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_RightLeg() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x518);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_head() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x520);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_Body() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x528);
}
_Script_Engine::SceneComponent*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_BoogieBody() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x530);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavPingLocation::BP_NavPingLocation_C*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_PingLocation() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavPingLocation::BP_NavPingLocation_C**)((uintptr_t)this + 0x538);
}
void* _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_Object_Types() {
    return (void*)((uintptr_t)this + 0x540);
}
void _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::set_ReviveAbility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x550 + 0);
    *(uint8_t*)((uintptr_t)this + 0x550 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C*& _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::get_Comm() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C**)((uintptr_t)this + 0x558);
}
_Script_CoreUObject::Class* _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/BoogieBot/BP_BoogieBot.BP_BoogieBot_C");
    return result;
}
_Script_Engine::Pawn* _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::BP_CreateSpectator0() {
    return;
}
void _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::InpActEvt_Ping_K2Node_InputActionEvent_1(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::InpActEvt_Comms_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::ReceivePossessed(_Script_Engine::Controller* NewController) {
    return;
}
void _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::Client_UpdateUI() {
    return;
}
void _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::Server_Outline(_Script_Playtime_Multiplayer::OutlineComponent* Outline_Component) {
    return;
}
void _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::ReceiveUnpossessed(_Script_Engine::Controller* OldController) {
    return;
}
void _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::CreateSpectator() {
    return;
}
void _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C::ExecuteUbergraph_BP_BoogieBot(int32_t EntryPoint) {
    return;
}
