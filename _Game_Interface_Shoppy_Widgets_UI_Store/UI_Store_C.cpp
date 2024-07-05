#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter\BP_MonsterAndPlayerMenuCharacter_C.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_General_UI_HeaderButton\UI_HeaderButton_C.hpp"
#include "..\_Game_Interface_MainMenu_BP_CameraMoverMain\BP_CameraMoverMain_C.hpp"
#include "..\_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins\UI_BuyPlaycoins_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_BundleInfo\UI_BundleInfo_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_CharacterStore\UI_CharacterStore_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_FeaturedItems\UI_FeaturedItems_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_SelectCharacter\UI_SelectCharacter_C.hpp"
#include "UI_Store_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\Widget.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void* _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_CharactersButton() {
    return *(_Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C**)((uintptr_t)this + 0x268);
}
_Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_FeaturedButton() {
    return *(_Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C**)((uintptr_t)this + 0x278);
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::SetActiveTab(_Script_UMG::Widget* PageToOpen) {
    return;
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_Empty() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x270);
}
_Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_PlayCoinsButton() {
    return *(_Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C**)((uintptr_t)this + 0x280);
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::OnLoaded_DA108EDD411F86110CC4FCAEF1781C9D(_Script_CoreUObject::Object* Loaded) {
    return;
}
_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_UI_BuyPlaycoins() {
    return *(_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C**)((uintptr_t)this + 0x290);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x288);
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::SetPlaycoins() {
    return;
}
_Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_UI_CharacterStore() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C**)((uintptr_t)this + 0x298);
}
_Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_UI_FeaturedItems() {
    return *(_Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_UI_SelectCharacter() {
    return *(_Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C**)((uintptr_t)this + 0x2a8);
}
_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_CosmeticDisplay() {
    return *(_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C**)((uintptr_t)this + 0x2e0);
}
_Game_Interface_Shoppy_Widgets_UI_BundleInfo::UI_BundleInfo_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_UI_TeaserNotification() {
    return *(_Game_Interface_Shoppy_Widgets_UI_BundleInfo::UI_BundleInfo_C**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_WidgetSwitcher_58() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2b8);
}
int32_t& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_SubMenuLevel() {
    return *(int32_t*)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_BackReleased() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_SelectedCharacter() {
    return (void*)((uintptr_t)this + 0x2d8);
}
_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_CameraMover() {
    return *(_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C**)((uintptr_t)this + 0x2e8);
}
_Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C*& _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::get_CurrentButton() {
    return *(_Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C**)((uintptr_t)this + 0x2f0);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_Store.UI_Store_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_PlayCoinsTab_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_DailyOffersTab_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_FeaturedTab_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_UI_BackButton_K2Node_ComponentBoundEvent_6_Released__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::OnInitialized0() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_UI_TeaserNotification_K2Node_ComponentBoundEvent_5_CloseTeaser__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_UI_CharacterStore_K2Node_ComponentBoundEvent_2_CycleCharacterRight__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_UI_CharacterStore_K2Node_ComponentBoundEvent_7_CycleCharacterLeft__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BindEvents() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::SetFeatured() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::LoadCosmeticDisplay(void* Character_Type, bool isFeaturedPage_) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::OpenStore() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_UI_SelectCharacter_K2Node_ComponentBoundEvent_8_SpecialistSelected__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_UI_SelectCharacter_K2Node_ComponentBoundEvent_9_MonsterSelected__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::SetCharacters() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_UI_FeaturedItems_K2Node_ComponentBoundEvent_4_OnFeaturedItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ID) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::Hide_BundleInfo() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_UI_FeaturedItems_K2Node_ComponentBoundEvent_10_ShowBundleInfo__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BndEvt__UI_Store_UI_FeaturedItems_K2Node_ComponentBoundEvent_11_OnBundleSelected__DelegateSignature(int32_t BundleId) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::ExecuteUbergraph_UI_Store(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_Store::UI_Store_C::BackReleased__DelegateSignature() {
    return;
}
