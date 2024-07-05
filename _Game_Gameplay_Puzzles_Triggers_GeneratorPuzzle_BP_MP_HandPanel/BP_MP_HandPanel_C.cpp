#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "BP_MP_HandPanel_C.hpp"
#include "..\_Game_Interface_Misc_UI_HandPadCharge\UI_HandPadCharge_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Material.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_UMG\WidgetComponent.hpp"
void* _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::SetupProgressColor() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_Trigger() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_HandPos() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x230);
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::set_IsActivated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x288 + 0);
    *(uint8_t*)((uintptr_t)this + 0x288 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_HandPanelMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x250);
}
_Script_UMG::WidgetComponent*& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_ChargeWidgetComponent() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x248);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_BPC_HandMagnet() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x238);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x258);
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::set_ShouldPercentageIncrease_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29c + 0);
    *(uint8_t*)((uintptr_t)this + 0x29c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_Activated() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_HandDecal() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x240);
}
float& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_Reverse_Rate() {
    return *(float*)((uintptr_t)this + 0x290);
}
float& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_TL_Progress_Alpha_535C2A2E42058E109D54D4B578AF50B1() {
    return *(float*)((uintptr_t)this + 0x260);
}
void* _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_TL_Progress__Direction_535C2A2E42058E109D54D4B578AF50B1() {
    return (void*)((uintptr_t)this + 0x264);
}
void* _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_ProgressColor() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_TL_Progress() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x268);
}
_Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C*& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_ChargeWidget() {
    return *(_Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C**)((uintptr_t)this + 0x280);
}
bool _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_IsActivated() {
    return (*(uint8_t*)((uintptr_t)this + 0x288 + 0)) & 1 != 0;
}
float& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_Play_Rate() {
    return *(float*)((uintptr_t)this + 0x28c);
}
bool _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_LeftHand() {
    return (*(uint8_t*)((uintptr_t)this + 0x294 + 0)) & 1 != 0;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::set_LeftHand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x294 + 0);
    *(uint8_t*)((uintptr_t)this + 0x294 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_Percentage() {
    return *(float*)((uintptr_t)this + 0x298);
}
bool _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_ShouldPercentageIncrease_() {
    return (*(uint8_t*)((uintptr_t)this + 0x29c + 0)) & 1 != 0;
}
bool _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_DecalRemoved_() {
    return (*(uint8_t*)((uintptr_t)this + 0x29d + 0)) & 1 != 0;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::set_DecalRemoved_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29d + 0);
    *(uint8_t*)((uintptr_t)this + 0x29d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_PanelType() {
    return (void*)((uintptr_t)this + 0x29e);
}
_Script_Engine::Material*& _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_Decal() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x2a0);
}
void* _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_LeftHandColor() {
    return (void*)((uintptr_t)this + 0x2ac);
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::BndEvt__BP_TrainCall_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void* _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::get_RightHandColor() {
    return (void*)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/Triggers/GeneratorPuzzle/BP_MP_HandPanel.BP_MP_HandPanel_C");
    return result;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::OnRep_DecalRemoved_() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::OnRep_Percentage() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::SetHandStyleWidget() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::UserConstructionScript0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::TL_Progress__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::TL_Progress__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::CustomEvent_0() {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::ExecuteUbergraph_BP_MP_HandPanel(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C::Activated__DelegateSignature() {
    return;
}
