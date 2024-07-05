#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "BP_WireConnect_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CableComponent\CableComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_StaticMesh1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_Connection() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x250);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
_Script_CableComponent::CableComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_Cable() {
    return *(_Script_CableComponent::CableComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_ConnectPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_ConnectionTrigger() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_HandPos() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_Mover() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_Trigger() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x268);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_ConnectionColor() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x270);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_BPC_HandMagnet() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x278);
}
bool _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_ConnectionType() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b1 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x280);
}
float& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_TL_MoveEnd_Alpha_F850058E44BCEE484F3FDDA4F65E4931() {
    return *(float*)((uintptr_t)this + 0x288);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_TL_MoveEnd__Direction_F850058E44BCEE484F3FDDA4F65E4931() {
    return (void*)((uintptr_t)this + 0x28c);
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::SetConnected(bool Value, bool OnBegin) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_TL_MoveEnd() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x290);
}
bool _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_Connected() {
    return (*(uint8_t*)((uintptr_t)this + 0x298 + 0)) & 1 != 0;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::set_Connected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x298 + 0);
    *(uint8_t*)((uintptr_t)this + 0x298 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::OnWireSetup__DelegateSignature() {
    return;
}
bool _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_Grabbed() {
    return (*(uint8_t*)((uintptr_t)this + 0x299 + 0)) & 1 != 0;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::set_Grabbed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x299 + 0);
    *(uint8_t*)((uintptr_t)this + 0x299 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_StartRotation() {
    return (void*)((uintptr_t)this + 0x29c);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_Player() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x2a8);
}
bool _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_WireType() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b0 + 0)) & 1 != 0;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::set_WireType(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::set_ConnectionType(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_OnConnected() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_EndLocation() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_WireColor() {
    return (void*)((uintptr_t)this + 0x2d4);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_OnWireSetup() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::get_OtherWires() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::Setup() {
    return;
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/Triggers/BP_WireConnect.BP_WireConnect_C");
    return result;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::OnRep_Connected() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::OnRep_WireColor() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::OnRep_EndLocation() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::SetGrabbed(bool Value) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::TL_MoveEnd__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::TL_MoveEnd__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::BndEvt__BP_WireConnect_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::BndEvt__BP_WireConnect_ConnectionTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::MoveEndTo(_Script_CoreUObject::Vector& EndLocation) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::ExecuteUbergraph_BP_WireConnect(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_BP_WireConnect::BP_WireConnect_C::OnConnected__DelegateSignature() {
    return;
}
