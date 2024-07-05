#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_RadialProgressBar\UI_N_RadialProgressBar_C.hpp"
#include "UI_ControlledPlayerStatus_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_Heart\UI_Heart_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_ControlledPlayerStatus.UI_ControlledPlayerStatus_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_RadialProgress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Game_Interface_HUDComponents_UI_Heart::UI_Heart_C*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_Heart1() {
    return *(_Game_Interface_HUDComponents_UI_Heart::UI_Heart_C**)((uintptr_t)this + 0x298);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_RechargeFinished() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
void _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::LoseHeart(int32_t Index) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_RollRecharge() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_EKGBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_EKGLine() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Game_Interface_HUDComponents_UI_Heart::UI_Heart_C*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_Heart2() {
    return *(_Game_Interface_HUDComponents_UI_Heart::UI_Heart_C**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_HUDComponents_UI_Heart::UI_Heart_C*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_Heart3() {
    return *(_Game_Interface_HUDComponents_UI_Heart::UI_Heart_C**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_PlayerNameLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b8);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_PortraitRadialBar() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x2c0);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_ProgressGlow() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x2c8);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_ProgressLine() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_RechargeFinishedRing() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_RollBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::get_RollIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e8);
}
void _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::UpdateRollRechargeProgress(float Progress) {
    return;
}
void _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::PauseRadialTick() {
    return;
}
void _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::BeginRollRecharge(float Time) {
    return;
}
void _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::RollRechargeFinished() {
    return;
}
void _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::SwitchState() {
    return;
}
void _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::BeginRadialTick() {
    return;
}
void _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::StopRadialTick() {
    return;
}
void _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::UnpauseRadialTick() {
    return;
}
void _Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C::ExecuteUbergraph_UI_ControlledPlayerStatus(int32_t EntryPoint) {
    return;
}
