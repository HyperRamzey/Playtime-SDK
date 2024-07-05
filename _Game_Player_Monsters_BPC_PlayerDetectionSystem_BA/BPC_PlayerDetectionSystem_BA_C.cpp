#include "..\FUObjectArray.hpp"
#include "BPC_PlayerDetectionSystem_BA_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\ChaseMusicPack.hpp"
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::PlayerDetected__DelegateSignature(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Detected_Player) {
    return;
}
void* _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_Playtime_Multiplayer::ChaseMusicPack*& _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_MonsterSelectedChaseMusic() {
    return *(_Script_Playtime_Multiplayer::ChaseMusicPack**)((uintptr_t)this + 0xb8);
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::OnRep_SelectedSoundsPackage() {
    return;
}
void* _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_PlayerLost() {
    return (void*)((uintptr_t)this + 0xd8);
}
bool _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_isChaseMusicActive() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void* _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_Update_Handle() {
    return (void*)((uintptr_t)this + 0xe8);
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::set_isChaseMusicActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_PlayerDetected() {
    return (void*)((uintptr_t)this + 0xc8);
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::ActivateMonsterChaseMusic() {
    return;
}
void* _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_Main_Handle() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_BlueZone() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0xf8);
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::ActivateMonsterAmbientMusic() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_YellowZone() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x100);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_RedZone() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x108);
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::Disable() {
    return;
}
void* _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_YellowPlayers() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::get_RedPlayers() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Monsters/BPC_PlayerDetectionSystem_BA.BPC_PlayerDetectionSystem_BA_C");
    return result;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::ExitRed(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::EnteredRed(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::ExitedYellow(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::EnteredYellow(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::TriggerChase() {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::CancelAllChaseMusic() {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::ExitedBlue(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::MML_UpdateTimer() {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::enable() {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::MML_MainTimerEnd() {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::dummy(void* ErrorMessage) {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::Success(void*& Inventory) {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::ExecuteUbergraph_BPC_PlayerDetectionSystem_BA(int32_t EntryPoint) {
    return;
}
void _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C::PlayerLost__DelegateSignature(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* LostCharacter) {
    return;
}
