#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer\BP_MonsterContainer_C.hpp"
#include "UI_MonsterSelectScreen_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter\UI_CustomizeCharacter_C.hpp"
#include "..\_Game_Interface_General_UI_WhiteBGButton\UI_WhiteBGButton_C.hpp"
#include "..\_Game_Interface_UI_EarlyAccess_Overlay\UI_EarlyAccess_Overlay_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_CustomizeButton() {
    return *(_Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C**)((uintptr_t)this + 0x288);
}
_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_UI_EarlyAccess_Overlay() {
    return *(_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C**)((uintptr_t)this + 0x2c8);
}
void* _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_ClientTimer() {
    return (void*)((uintptr_t)this + 0x300);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_CharacterDescriptionText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_Blink() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_Image_45() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_FolderText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_CharacterNameText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::ExecuteUbergraph_UI_MonsterSelectScreen(int32_t EntryPoint) {
    return;
}
_Script_UMG::CanvasPanel*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_CharacterSelector() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x280);
}
_Script_UMG::Button*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_NextCharButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Button*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_PreviousCharButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_Switcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_TimeRemainingText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b8);
}
_Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_UI_CustomizeCharacter() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C**)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_CurrentVisibleCharacter() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_4_ChangedAppearance__DelegateSignature() {
    return;
}
void* _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_Back_Pressed() {
    return (void*)((uintptr_t)this + 0x2d8);
}
bool _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_IsCustomizingSpecificCharacter() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::set_IsCustomizingSpecificCharacter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_MonsterContainer() {
    return *(_Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer::BP_MonsterContainer_C**)((uintptr_t)this + 0x2f0);
}
int32_t& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_TimeRemaining() {
    return *(int32_t*)((uintptr_t)this + 0x2f8);
}
_Script_Engine::AudioComponent*& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_MontageSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x308);
}
float& _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::get_CountdownDuration() {
    return *(float*)((uintptr_t)this + 0x310);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Base/UI_MonsterSelectScreen.UI_MonsterSelectScreen_C");
    return result;
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::Update_Localization() {
    return;
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::RefreshVisuals() {
    return;
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::BndEvt__UI_MonsterSelectScreen_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::Time_s_Up_Event() {
    return;
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::OnInitialized0() {
    return;
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Base_UI_MonsterSelectScreen::UI_MonsterSelectScreen_C::Back_Pressed__DelegateSignature() {
    return;
}
