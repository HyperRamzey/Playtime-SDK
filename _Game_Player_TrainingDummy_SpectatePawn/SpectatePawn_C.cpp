#include "..\FUObjectArray.hpp"
#include "SpectatePawn_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
float& _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::get_Points() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
void* _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_Engine::CameraComponent*& _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x288);
}
_Script_Engine::SpringArmComponent*& _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::get_CamArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x290);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x298);
}
void* _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::get_Players() {
    return (void*)((uintptr_t)this + 0x2a0);
}
int32_t& _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::get_SpectatedIdx() {
    return *(int32_t*)((uintptr_t)this + 0x2b0);
}
void _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::ReceiveBeginPlay() {
    return;
}
void* _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::get_UserName() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::InpActEvt_A_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key) {
    return;
}
int32_t& _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::get_Tickets() {
    return *(int32_t*)((uintptr_t)this + 0x2cc);
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/SpectatePawn.SpectatePawn_C");
    return result;
}
void _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::UpdateSpectatablePlayers() {
    return;
}
void _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::InpActEvt_D_K2Node_InputKeyEvent_1(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::InpActEvt_Left_Hand_Extend_K2Node_InputActionEvent_1(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::InpActEvt_Right_Hand_Extend_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::InpAxisEvt_LookPitch_K2Node_InputAxisEvent_0(float AxisValue) {
    return;
}
void _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1(float AxisValue) {
    return;
}
void _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::RefreshSpectated() {
    return;
}
void _Game_Player_TrainingDummy_SpectatePawn::SpectatePawn_C::ExecuteUbergraph_SpectatePawn(int32_t EntryPoint) {
    return;
}
