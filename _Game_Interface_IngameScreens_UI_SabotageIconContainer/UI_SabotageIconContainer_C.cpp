#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_IngameScreens_UI_SabotageIcon\UI_SabotageIcon_C.hpp"
#include "UI_SabotageIconContainer_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_SabotageSplashText\UI_SabotageSplashText_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\SabotageDef.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::get_Outline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
float& _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::get_SabotageStartDuration() {
    return *(float*)((uintptr_t)this + 0x298);
}
_Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C*& _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::get_UI_SabotageIcon() {
    return *(_Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C**)((uintptr_t)this + 0x270);
}
void _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::ConvertTime(float Time_To_Convert, void*& Converted_Time) {
    return;
}
bool _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::get_NoSabotageDuration() {
    return (*(uint8_t*)((uintptr_t)this + 0x278 + 0)) & 1 != 0;
}
void* _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::get_SabotageDurationHandle() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::set_NoSabotageDuration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x278 + 0);
    *(uint8_t*)((uintptr_t)this + 0x278 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::get_SabotageDurationText() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::get_Timespan() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_SabotageIconContainer.UI_SabotageIconContainer_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::ResetSabotageIcon() {
    return;
}
void _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::InitializeSabotageIcons(_Script_Playtime_Multiplayer::SabotageDef SabotageDef, int32_t SabotageLevel, _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C* SabotageSplashTextRef) {
    return;
}
void _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::IconHandoff() {
    return;
}
void _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C::ExecuteUbergraph_UI_SabotageIconContainer(int32_t EntryPoint) {
    return;
}
