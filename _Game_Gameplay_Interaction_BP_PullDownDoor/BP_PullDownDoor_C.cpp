#include "..\FUObjectArray.hpp"
#include "BP_PullDownDoor_C.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "..\_Game_Interface_BPC_Tooltip\BPC_Tooltip_C.hpp"
#include "..\_Script_AIModule\AIPerceptionStimuliSourceComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\Door.hpp"
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_DoorParent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x318);
}
_Script_AIModule::AIPerceptionStimuliSourceComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_AIPerceptionStimuliSource() {
    return *(_Script_AIModule::AIPerceptionStimuliSourceComponent**)((uintptr_t)this + 0x298);
}
_Script_Engine::PointLightComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x2c8);
}
void* _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_HandPos() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2a8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_SM_PullDoorFrame() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x288);
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_BPC_Tooltip() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x290);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_HandPos1() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2a0);
}
_Script_Engine::PointLightComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_PointLight3() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x2b0);
}
_Script_Engine::PointLightComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_PointLight2() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x2b8);
}
void _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::BP_OnRep_ShutByLockdown0() {
    return;
}
void _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::On_Any_AttachmentStateChange(void* AttachmentStateChange) {
    return;
}
_Script_Engine::PointLightComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_PointLight1() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x2c0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_SM_SlamDoorHandle() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x2d0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_SM_SlamDoor() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x2d8);
}
void _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::BP_OnRep_DisabledByNoEscape0() {
    return;
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_Spline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x2e0);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_Box1() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x2e8);
}
float& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_CloseDuration() {
    return *(float*)((uintptr_t)this + 0x328);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_BPC_HandMagnet1() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x2f0);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x2f8);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_BPC_HandMagnet() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x300);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_Handle1() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x308);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_Handle() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x310);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Interaction/BP_PullDownDoor.BP_PullDownDoor_C");
    return result;
}
void _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::UserConstructionScript() {
    return;
}
void _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::BP_ShowOpenness0(float CurvedOpenness) {
    return;
}
void _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::BP_OnClosed0() {
    return;
}
void _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::BndEvt__BP_PullDownDoor_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::BndEvt__BP_PullDownDoor_BPC_HandMagnet1_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Interaction_BP_PullDownDoor::BP_PullDownDoor_C::ExecuteUbergraph_BP_PullDownDoor(int32_t EntryPoint) {
    return;
}
