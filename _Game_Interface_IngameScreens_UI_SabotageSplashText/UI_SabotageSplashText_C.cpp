#include "..\FUObjectArray.hpp"
#include "UI_SabotageSplashText_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\SabotageDef.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SabotageLevel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
void* _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SaboWithdrawn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SabotageIconBox() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SabotageActivatedText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SaboActivated() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SabotageCard() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SabotageDescBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SabotageOutline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SabotagePreview() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SabotageSubText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
void _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::IconHandoff__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SabotIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SabotageDef() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_IconHandoff() {
    return (void*)((uintptr_t)this + 0x380);
}
int32_t& _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::get_SabotageLvl() {
    return *(int32_t*)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_SabotageSplashText.UI_SabotageSplashText_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::SequenceEvent__ENTRYPOINTUI_SabotageSplashText_0() {
    return;
}
void _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::AnimationFinished() {
    return;
}
void _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::BeginLifecycle(bool Activated_) {
    return;
}
void _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::PseudoConstruct(_Script_Playtime_Multiplayer::SabotageDef SabotageDef, int32_t SabotageLevel) {
    return;
}
void _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::TriggerIconHandoff() {
    return;
}
void _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::WithdrawFinished() {
    return;
}
void _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C::ExecuteUbergraph_UI_SabotageSplashText(int32_t EntryPoint) {
    return;
}
