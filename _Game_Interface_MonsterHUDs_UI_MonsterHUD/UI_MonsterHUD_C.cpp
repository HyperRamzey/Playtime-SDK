#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Customization_Emotes_UI_EmoteHolder\UI_EmoteHolder_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_AbilitiesComponent\UI_AbilitiesComponent_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_CrosshairComponent\UI_CrosshairComponent_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_GameIndicatorComponent\UI_GameIndicatorComponent_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_InGameNotificationList\UI_InGameNotificationList_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_TimerComponent\UI_TimerComponent_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_SabotageIconContainer\UI_SabotageIconContainer_C.hpp"
#include "..\_Game_Interface_MonsterHUDs_UI_AFKCountDown\UI_AFKCountDown_C.hpp"
#include "UI_MonsterHUD_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\InvalidationBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::InvalidationBox*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_InvalidationBox_2() {
    return *(_Script_UMG::InvalidationBox**)((uintptr_t)this + 0x270);
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::MonsterClickedEmote__DelegateSignature(int32_t Index) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::SetCrosshairColor(_Script_CoreUObject::LinearColor Color) {
    return;
}
void* _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::SetSabotageIcon(void*& SabotageName) {
    return;
}
_Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_UI_AbilitiesComponent() {
    return *(_Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C**)((uintptr_t)this + 0x290);
}
_Script_UMG::InvalidationBox*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_InvalidationBox_0() {
    return *(_Script_UMG::InvalidationBox**)((uintptr_t)this + 0x268);
}
_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_UI_EmoteHolder() {
    return *(_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_ObjectiveCheck() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_UI_GameIndicatorComponent() {
    return *(_Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Image*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_PrimaryObjectiveIcon_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_UI_CrosshairComponent() {
    return *(_Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::TextBlock*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_PrimaryObjectiveText_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_UI_AFKCountDown() {
    return *(_Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C**)((uintptr_t)this + 0x298);
}
_Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_UI_InGameNotificationList() {
    return *(_Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C**)((uintptr_t)this + 0x2b8);
}
_Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_UI_SabotageIconContainer() {
    return *(_Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C**)((uintptr_t)this + 0x2c0);
}
_Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C*& _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_UI_TimerComponent() {
    return *(_Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C**)((uintptr_t)this + 0x2c8);
}
void* _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_PreviousSecondaryObj() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::get_MonsterClickedEmote() {
    return (void*)((uintptr_t)this + 0x2d8);
}
_Script_CoreUObject::Class* _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MonsterHUDs/UI_MonsterHUD.UI_MonsterHUD_C");
    return result;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::Update_Localization() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::CheckDownPlayers() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::SetNonEssentialHUDVisibility(bool Visible) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::BndEvt__UI_MonsterHUD_UI_EmoteHolder_K2Node_ComponentBoundEvent_0_ClickedEmote__DelegateSignature(int32_t Index) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::Construct0() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::StartAFKTimer() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::EndAFKTimer() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::UpdateToyCount(void*& ToysFound) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::ShowEmotes(void* Character) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::SetCrosshairProgress(float Progress) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::ResetRadialRecharge() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::RadialRecharge(float Duration) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::PlayRechargeAnim(int32_t AbilityIndex, float Cooldown) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::PlayHitmarker() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::PlayAttackAnimation(float Duration) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C::ExecuteUbergraph_UI_MonsterHUD(int32_t EntryPoint) {
    return;
}
