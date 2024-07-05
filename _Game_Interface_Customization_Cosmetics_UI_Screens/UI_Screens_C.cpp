#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter\BP_CustomizationMenuCharacter_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_ScreenItem\UI_ScreenItem_C.hpp"
#include "UI_Screens_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\CustomizationSaveGame.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
void* _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_RandomText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_Playtime_Multiplayer::CustomizationSaveGame*& _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_Customization_Save_Game() {
    return *(_Script_Playtime_Multiplayer::CustomizationSaveGame**)((uintptr_t)this + 0x298);
}
_Script_UMG::Button*& _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_RandomScreenButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_RandomScreenBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_ScreenUIArray() {
    return (void*)((uintptr_t)this + 0x350);
}
_Script_UMG::VerticalBox*& _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_ScreenContainer() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x280);
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::SetRandomButtonStyle() {
    return;
}
_Script_UMG::ScrollBox*& _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_ScreenScrollbox() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_Type() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_CurrentConfig() {
    return (void*)((uintptr_t)this + 0x2a0);
}
_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_MainMenuCharacter() {
    return *(_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C**)((uintptr_t)this + 0x2f8);
}
void* _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_OwnedScreenMap() {
    return (void*)((uintptr_t)this + 0x300);
}
void* _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::get_RequestScreenPreview() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_Screens.UI_Screens_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::ScreenItemHovered(void* ScreenImage) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::ScreenItemUnHovered() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::BndEvt__UI_Screens_RandomScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::Selected(_Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C* Screen, int32_t ScreenID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::Repopulate(void*& Items) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::GotInventory(void*& Inventory) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::Error(void* ErrorMessage) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::FavoritedPressed(int32_t ID, _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C* Object) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::BndEvt__UI_Screens_RandomScreenButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::BndEvt__UI_Screens_RandomScreenButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::Refresh() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::ExecuteUbergraph_UI_Screens(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Screens::UI_Screens_C::RequestScreenPreview__DelegateSignature(void* Screen) {
    return;
}
