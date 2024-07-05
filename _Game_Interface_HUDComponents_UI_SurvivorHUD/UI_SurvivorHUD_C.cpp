#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_RadialProgressBar\UI_N_RadialProgressBar_C.hpp"
#include "..\_Game_Interface_Customization_Emotes_UI_EmoteHolder\UI_EmoteHolder_C.hpp"
#include "..\_Game_Interface_HUDComponents_Comms_UI_Comms\UI_Comms_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_ActionPrompt\UI_ActionPrompt_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_ControlledPlayerStatus\UI_ControlledPlayerStatus_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_InGameNotificationList\UI_InGameNotificationList_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_InteractPrompt\UI_InteractPrompt_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_LockerContainer\UI_LockerContainer_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_PrimaryObjective\UI_PrimaryObjective_C.hpp"
#include "UI_SurvivorHUD_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_TimerComponent\UI_TimerComponent_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_Damage\UI_Damage_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_PlayerStatus\UI_PlayerStatus_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_SabotageIconContainer\UI_SabotageIconContainer_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_SabotageSplashText\UI_SabotageSplashText_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_Scoreboard\UI_Scoreboard_C.hpp"
#include "..\_Game_Player_TrainingDummy_BP_ZoneDetectionComponent\BP_ZoneDetectionComponent_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand\BP_NetworkHand_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::AbilityInit() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_StartRevive() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x290);
}
_Game_Player_TrainingDummy_BP_ZoneDetectionComponent::BP_ZoneDetectionComponent_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_BP_Zone_Detection_Component() {
    return *(_Game_Player_TrainingDummy_BP_ZoneDetectionComponent::BP_ZoneDetectionComponent_C**)((uintptr_t)this + 0x408);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_TutorialInit() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_SurvivorHUD.UI_SurvivorHUD_C");
    return result;
}
void* _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_Scoreboard() {
    return *(_Game_Interface_IngameScreens_UI_Scoreboard::UI_Scoreboard_C**)((uintptr_t)this + 0x328);
}
void* _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::Get_StarterObjective_Text_0() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_ShowAFKCountdown() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
bool _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_InTutorial() {
    return (*(uint8_t*)((uintptr_t)this + 0x349 + 0)) & 1 != 0;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_CompletedRevive() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
bool _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_HealthBarIsVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x35c + 0)) & 1 != 0;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::UpdateToyPartsUI(void*& ToysFound) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_ShowHP() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
int32_t& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_AFKTime() {
    return *(int32_t*)((uintptr_t)this + 0x3e8);
}
float& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_SabotageStartDuration() {
    return *(float*)((uintptr_t)this + 0x380);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_RadialBar() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_HealthColor() {
    return (void*)((uintptr_t)this + 0x3ec);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_LaunchHand() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x298);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_EKGMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x400);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_AFKKickText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
_Script_Engine::Texture2D*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_Toy1CollectedImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x3a8);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_Commslocation() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a8);
}
_Script_Engine::Texture2D*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_Toy4CollectedImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x3c0);
}
void* _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_ToySelection() {
    return (void*)((uintptr_t)this + 0x348);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_Fader() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_HUDComponents_UI_PrimaryObjective::UI_PrimaryObjective_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_PrimaryObjective() {
    return *(_Game_Interface_HUDComponents_UI_PrimaryObjective::UI_PrimaryObjective_C**)((uintptr_t)this + 0x2b8);
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::set_AFKTimerVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_RevivePlayerBar() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_ScreenPreview() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d0);
}
_Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_PlayerStatus() {
    return *(_Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C**)((uintptr_t)this + 0x318);
}
_Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_Comms() {
    return *(_Game_Interface_HUDComponents_Comms_UI_Comms::UI_Comms_C**)((uintptr_t)this + 0x2e0);
}
_Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_ActionPrompt() {
    return *(_Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C**)((uintptr_t)this + 0x2d8);
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_EmoteHolder() {
    return *(_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C**)((uintptr_t)this + 0x2f8);
}
_Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_ControlledPlayerStatus() {
    return *(_Game_Interface_HUDComponents_UI_ControlledPlayerStatus::UI_ControlledPlayerStatus_C**)((uintptr_t)this + 0x2e8);
}
_Game_Interface_IngameScreens_UI_Damage::UI_Damage_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_Damage() {
    return *(_Game_Interface_IngameScreens_UI_Damage::UI_Damage_C**)((uintptr_t)this + 0x2f0);
}
bool _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_AFKTimerVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void* _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_SabotageDurationHandle() {
    return (void*)((uintptr_t)this + 0x378);
}
_Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_InGameNotificationList() {
    return *(_Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C**)((uintptr_t)this + 0x300);
}
_Game_Interface_HUDComponents_UI_InteractPrompt::UI_InteractPrompt_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_InteractPrompt() {
    return *(_Game_Interface_HUDComponents_UI_InteractPrompt::UI_InteractPrompt_C**)((uintptr_t)this + 0x308);
}
float& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_PreviousUpdateHealth() {
    return *(float*)((uintptr_t)this + 0x358);
}
_Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_LockerContainer() {
    return *(_Game_Interface_HUDComponents_UI_LockerContainer::UI_LockerContainer_C**)((uintptr_t)this + 0x310);
}
void* _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_SabotageDurationText() {
    return (void*)((uintptr_t)this + 0x360);
}
_Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_SabotageIconContainer() {
    return *(_Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C**)((uintptr_t)this + 0x320);
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::ConvertTime(float TimeToConvert, void*& ConvertedTime) {
    return;
}
_Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_UI_TimerComponent() {
    return *(_Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C**)((uintptr_t)this + 0x330);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_Player_Reference() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x338);
}
_Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_SabotageSplashReference() {
    return *(_Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C**)((uintptr_t)this + 0x340);
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::set_InTutorial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x349 + 0);
    *(uint8_t*)((uintptr_t)this + 0x349 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_HandReference() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand::BP_NetworkHand_C**)((uintptr_t)this + 0x350);
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::Show_HideHP(bool IsVisible) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::set_HealthBarIsVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x35c + 0);
    *(uint8_t*)((uintptr_t)this + 0x35c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_NoSabotageDuration() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 1 != 0;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::set_NoSabotageDuration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_CurrentObjective() {
    return (void*)((uintptr_t)this + 0x388);
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::SetAFKTimerText() {
    return;
}
void* _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_PreviousSecondaryObjective() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::UpdatePlayersHoldingToy() {
    return;
}
_Script_Engine::Texture2D*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_Toy2CollectedImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x3b0);
}
_Script_Engine::Texture2D*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_Toy3CollectedImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x3b8);
}
_Script_Engine::Texture2D*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_Toy5CollectedImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x3c8);
}
_Script_Engine::Texture2D*& _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_Toy6CollectedImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x3d0);
}
void* _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::get_AFKTimerTicker() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::Change_Shield_Color(_Script_CoreUObject::LinearColor Color) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::UpdateHealth() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::LoadToys() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::Set_Toy_Collected_UI(_Script_UMG::Image* DefaultToyImage, _Script_Engine::Texture2D* CollectedToyImage, bool IsCollected, _Script_UMG::Image* Toy_Part_BG, _Script_UMG::Image* ToyHighlight) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::InitToyImages() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::SetToyImages(_Script_Engine::Texture2D* Toy1, _Script_Engine::Texture2D* Toy2, _Script_Engine::Texture2D* Toy3, _Script_Engine::Texture2D* Toy4, _Script_Engine::Texture2D* Toy5, _Script_Engine::Texture2D* Toy6) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::AnimateInit() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::PlayHandAnimation() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::UpdateCrosshair() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::Construct0() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::StartAutoReviving(bool Reset) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::ShowStrikes(int32_t Strikes) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::Event_Show_Emotes() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::OnInitialized0() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::SetNonEssentialHUDVisibility(bool Visible) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature(int32_t Index) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::Destruct0() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::ShowMonsterReleasedSplash(void* Monster) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::OnDeath() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::PrimaryObjectiveAnim(void* ObjName) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::ChangePrimObjective() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::StartAFKKickTimer() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::EndAFKKickTimer() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::GetPlayerReference() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::SetCheckmarkVisibility(bool IsVisible) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::ExitedLocker() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::EnteredLocker() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::Show_Comms() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::SetHitHatchUIVisibility(bool Visible_) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::CommsEnabling() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::BndEvt__UI_SurvivorHUD_UI_Comms_K2Node_ComponentBoundEvent_0_FiredComm__DelegateSignature(int32_t Comm) {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::ShowSuccessfulRevive() {
    return;
}
void _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C::ExecuteUbergraph_UI_SurvivorHUD(int32_t EntryPoint) {
    return;
}
