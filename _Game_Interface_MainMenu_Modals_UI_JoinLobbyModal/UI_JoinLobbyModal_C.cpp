#include "..\FUObjectArray.hpp"
#include "UI_JoinLobbyModal_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface\UI_PrivateMatchCodeInterface_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton\UI_StoreTooltipButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_UMG\EditableTextBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_HeaderBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_HeaderLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::EditableTextBox*& _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_EditableTextBox_233() {
    return *(_Script_UMG::EditableTextBox**)((uintptr_t)this + 0x278);
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_CancelButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C**)((uintptr_t)this + 0x270);
}
_Script_UMG::SizeBox*& _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_HeaderBox() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_HeaderFrame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_JoinLobbyButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C**)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_WantsToHide() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_HeaderBGMat() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_ItemRarity() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_ItemName() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_CosmeticType() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_ItemDescription() {
    return (void*)((uintptr_t)this + 0x2f8);
}
bool _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_bBuyingWithPlaycoins() {
    return (*(uint8_t*)((uintptr_t)this + 0x310 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::set_bBuyingWithPlaycoins(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x310 + 0);
    *(uint8_t*)((uintptr_t)this + 0x310 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_bOwned() {
    return (*(uint8_t*)((uintptr_t)this + 0x311 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::set_bOwned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x311 + 0);
    *(uint8_t*)((uintptr_t)this + 0x311 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_ItemId() {
    return *(int32_t*)((uintptr_t)this + 0x314);
}
void _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::WantsToHide__DelegateSignature() {
    return;
}
_Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C*& _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::get_CodeInterfaceReference() {
    return *(_Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C**)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Modals/UI_JoinLobbyModal.UI_JoinLobbyModal_C");
    return result;
}
void _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::BndEvt__UI_JoinLobbyModal_CancelButton_K2Node_ComponentBoundEvent_7_ButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::BndEvt__UI_JoinLobbyModal_JoinLobbyButton_K2Node_ComponentBoundEvent_8_ButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal::UI_JoinLobbyModal_C::ExecuteUbergraph_UI_JoinLobbyModal(int32_t EntryPoint) {
    return;
}
