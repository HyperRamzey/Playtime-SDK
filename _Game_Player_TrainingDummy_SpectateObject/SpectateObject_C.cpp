#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance\BP_WormholeEntrance_C.hpp"
#include "SpectateObject_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
void* _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_Engine::CameraComponent*& _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x288);
}
bool _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::get_Dead() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C*& _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::get_Hatch() {
    return *(_Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C**)((uintptr_t)this + 0x2a0);
}
_Script_Engine::SpringArmComponent*& _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::get_SpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/SpectateObject.SpectateObject_C");
    return result;
}
void _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::ExecuteUbergraph_SpectateObject(int32_t EntryPoint) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x298);
}
void _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::set_Dead(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::InpActEvt_HitHatch_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::InpAxisEvt_LookPitch_K2Node_InputAxisEvent_0(float AxisValue) {
    return;
}
void _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1(float AxisValue) {
    return;
}
void _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::ReceiveUnpossessed0(_Script_Engine::Controller* OldController) {
    return;
}
void _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::HitHatch() {
    return;
}
void _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::ReceivePossessed0(_Script_Engine::Controller* NewController) {
    return;
}
void _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::SetUI(bool Visible_) {
    return;
}
void _Game_Player_TrainingDummy_SpectateObject::SpectateObject_C::DisableHatchHitting() {
    return;
}
