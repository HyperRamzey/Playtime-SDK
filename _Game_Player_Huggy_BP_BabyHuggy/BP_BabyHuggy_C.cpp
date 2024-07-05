#include "..\FUObjectArray.hpp"
#include "BP_BabyHuggy_C.hpp"
#include "..\_Script_AIModule\AIPerceptionComponent.hpp"
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\DefaultPawn.hpp"
#include "..\_Script_Engine\InterpToMovementComponent.hpp"
#include "..\_Script_Engine\RotatingMovementComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_HuggyMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2b8);
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::set_HasSeenPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_HuggyMeshCosmetic() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2b0);
}
_Script_Engine::RotatingMovementComponent*& _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_RotatingMovement() {
    return *(_Script_Engine::RotatingMovementComponent**)((uintptr_t)this + 0x2c0);
}
_Script_Engine::CapsuleComponent*& _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_Capsule() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x2c8);
}
_Script_AIModule::AIPerceptionComponent*& _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_AIPerception() {
    return *(_Script_AIModule::AIPerceptionComponent**)((uintptr_t)this + 0x2e0);
}
_Script_Engine::SceneComponent*& _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2d0);
}
_Script_Engine::InterpToMovementComponent*& _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_InterpToMovement() {
    return *(_Script_Engine::InterpToMovementComponent**)((uintptr_t)this + 0x2d8);
}
bool _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_HasSeenPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
float& _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_CapsuleHalfHeight() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
float& _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_CapsuleRadius() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
void* _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_Target_Position() {
    return (void*)((uintptr_t)this + 0x2f4);
}
_Script_Engine::Actor*& _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::get_Actor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x300);
}
_Script_CoreUObject::Class* _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Huggy/BP_BabyHuggy.BP_BabyHuggy_C");
    return result;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::UserConstructionScript() {
    return;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::OnNotifyEnd_A156AB274D7731BD2EED2181AFB9A6C4(void* NotifyName) {
    return;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::OnNotifyBegin_A156AB274D7731BD2EED2181AFB9A6C4(void* NotifyName) {
    return;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::OnInterrupted_A156AB274D7731BD2EED2181AFB9A6C4(void* NotifyName) {
    return;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::OnBlendOut_A156AB274D7731BD2EED2181AFB9A6C4(void* NotifyName) {
    return;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::OnCompleted_A156AB274D7731BD2EED2181AFB9A6C4(void* NotifyName) {
    return;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::BabyHuggyScream() {
    return;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::ReceiveBeginPlay() {
    return;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::RotateBaby() {
    return;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::BndEvt__BP_BabyHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus) {
    return;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C::ExecuteUbergraph_BP_BabyHuggy(int32_t EntryPoint) {
    return;
}
