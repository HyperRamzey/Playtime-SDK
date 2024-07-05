#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera\BP_AbstractJumpscare_Camera_C.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "BP_WhackAWuggySpawnPoint_C.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_WuggyHole\BP_WuggyHole_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkCharacter.hpp"
#include "..\_Script_Playtime_Multiplayer\WhackAWuggySpawnPoint.hpp"
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_HuggySkeletons() {
    return (void*)((uintptr_t)this + 0x310);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_SM_WuggyPipe() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x258);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x240);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_WuggyMagnet() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x270);
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::ReceiveBeginPlay() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_HandPose() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x248);
}
bool _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Crawl() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b9 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Wuggy_Jump_Origin() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x250);
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::set_Crawl(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Cylinder() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_WuggyMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x268);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Cached_Player() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x330);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x278);
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::WuggyKillPlayer_Event(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character) {
    return;
}
_Script_Engine::SphereComponent*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x280);
}
bool _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_DestroyingWuggy_() {
    return (*(uint8_t*)((uintptr_t)this + 0x288 + 0)) & 1 != 0;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::Set_Crawl__DelegateSignature(bool Crawl, _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* WhackAWuggyRef) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::set_DestroyingWuggy_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x288 + 0);
    *(uint8_t*)((uintptr_t)this + 0x288 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Wuggy_Hole_Ref() {
    return *(_Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C**)((uintptr_t)this + 0x290);
}
_Script_Engine::AudioComponent*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_ChitteringSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x298);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Player_Target() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x2a0);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Huggy_Origin_Rotator() {
    return (void*)((uintptr_t)this + 0x2d4);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Player_Target_Stored() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x2a8);
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::set_Punched(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Closest_Player_Timer() {
    return (void*)((uintptr_t)this + 0x2b0);
}
bool _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Punched() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8 + 0)) & 1 != 0;
}
bool _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Crawl_Back() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ba + 0)) & 1 != 0;
}
bool _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_CanKillPlayers() {
    return (*(uint8_t*)((uintptr_t)this + 0x338 + 0)) & 1 != 0;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::set_Crawl_Back(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ba + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ba + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::set_Lock_Target_Player(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Jumpscare() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bb + 0)) & 1 != 0;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::set_Jumpscare(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bb + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Huggy_Origin() {
    return (void*)((uintptr_t)this + 0x2bc);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Huggy_Jumpscare_End_Point() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Huggy_Jumpscare_End_Rotator() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Player_Origin_Rotator() {
    return (void*)((uintptr_t)this + 0x2ec);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Player_Jumpscare_End_Rotation() {
    return (void*)((uintptr_t)this + 0x2f8);
}
_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Jumpscare_Camera() {
    return *(_Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C**)((uintptr_t)this + 0x308);
}
bool _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Lock_Target_Player() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 1 != 0;
}
_Script_Engine::SkeletalMesh*& _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Current_Wuggy_Skeleton() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x328);
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::set_CanKillPlayers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x338 + 0);
    *(uint8_t*)((uintptr_t)this + 0x338 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Activated_Punch() {
    return (void*)((uintptr_t)this + 0x340);
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::Kill_Player() {
    return;
}
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Set_Crawl() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::get_Set_Crawl_Back() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Interaction/Sewers/BP_WhackAWuggySpawnPoint.BP_WhackAWuggySpawnPoint_C");
    return result;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::Update_Oldest_Player(_Script_Playtime_Multiplayer::ANetworkCharacter* Player_Target) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::UserConstructionScript() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::BndEvt__BP_WhackAWuggySpawnPoint_WuggyMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::BP_Server_WuggyKillPlayer0() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::BP_OnRep_WuggyIsSpawned0() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::SpawnWuggy() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::Set_Wuggy_Crawl(bool Crawl) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::Set_Wuggy_Crawl_Back(bool Crawl_Back) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::ExecuteUbergraph_BP_WhackAWuggySpawnPoint(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::Set_Crawl_Back__DelegateSignature(bool Crawl_Back) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C::Activated_Punch__DelegateSignature(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* WhackAWugRef) {
    return;
}
