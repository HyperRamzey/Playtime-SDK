#include "..\FUObjectArray.hpp"
#include "BP_NetworkSwingHandle_C.hpp"
#include "..\_Game_Interface_BPC_Tooltip\BPC_Tooltip_C.hpp"
#include "..\_Script_AIModule\AIPerceptionStimuliSourceComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkHand.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkSwingHandle.hpp"
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::set_Closing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x313 + 0);
    *(uint8_t*)((uintptr_t)this + 0x313 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::CapsuleComponent*& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_Capsule() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x2a8);
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::Deactivate_Grapple() {
    return;
}
void* _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2a0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_HandPos() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2b0);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_BlockAllDynamicCollision() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x2c0);
}
_Script_Engine::PointLightComponent*& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x2b8);
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_BPC_Tooltip() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x2c8);
}
bool _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_CanGrab() {
    return (*(uint8_t*)((uintptr_t)this + 0x312 + 0)) & 1 != 0;
}
_Script_AIModule::AIPerceptionStimuliSourceComponent*& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_AIPerceptionStimuliSource() {
    return *(_Script_AIModule::AIPerceptionStimuliSourceComponent**)((uintptr_t)this + 0x2d0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_NoCollisionVisual() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x2d8);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_Cube() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x2e0);
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::set_CanGrab(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x312 + 0);
    *(uint8_t*)((uintptr_t)this + 0x312 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_TextRender1() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x2e8);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_TextRender() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x2f0);
}
float& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_HideGrappleTimeline_OpenAlpha_D304674444450D6E8D59658477C07B0F() {
    return *(float*)((uintptr_t)this + 0x2f8);
}
float& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_HideGrappleTimeline_BreakAlpha_D304674444450D6E8D59658477C07B0F() {
    return *(float*)((uintptr_t)this + 0x2fc);
}
float& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_HideGrappleTimeline_Alpha_D304674444450D6E8D59658477C07B0F() {
    return *(float*)((uintptr_t)this + 0x300);
}
bool _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_Closing() {
    return (*(uint8_t*)((uintptr_t)this + 0x313 + 0)) & 1 != 0;
}
void* _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_HideGrappleTimeline__Direction_D304674444450D6E8D59658477C07B0F() {
    return (void*)((uintptr_t)this + 0x304);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_HideGrappleTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x308);
}
bool _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_OnCooldown() {
    return (*(uint8_t*)((uintptr_t)this + 0x310 + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::set_OnCooldown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x310 + 0);
    *(uint8_t*)((uintptr_t)this + 0x310 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::get_UsesAutomaticCooldown() {
    return (*(uint8_t*)((uintptr_t)this + 0x311 + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::set_UsesAutomaticCooldown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x311 + 0);
    *(uint8_t*)((uintptr_t)this + 0x311 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Game/BP_NetworkSwingHandle.BP_NetworkSwingHandle_C");
    return result;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::AdjustAttachPoint(_Script_CoreUObject::Transform& Point) {
    return;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::HideGrappleTimeline__FinishedFunc() {
    return;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::HideGrappleTimeline__UpdateFunc() {
    return;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::Activate_Grapple() {
    return;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::Pull(_Script_Playtime_Multiplayer::ANetworkHand* Hand) {
    return;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::Attach(_Script_Playtime_Multiplayer::ANetworkHand* Hand) {
    return;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::Detach(_Script_Playtime_Multiplayer::ANetworkHand* Hand) {
    return;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::Sabotage(float Duration) {
    return;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::OnRep_GrappleSabotaged0() {
    return;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::ReceiveBeginPlay() {
    return;
}
void _Game_Gameplay_Game_BP_NetworkSwingHandle::BP_NetworkSwingHandle_C::ExecuteUbergraph_BP_NetworkSwingHandle(int32_t EntryPoint) {
    return;
}
