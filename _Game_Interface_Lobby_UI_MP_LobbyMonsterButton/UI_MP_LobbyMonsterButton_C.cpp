#include "..\FUObjectArray.hpp"
#include "UI_MP_LobbyMonsterButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::get_BG_Image() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::get_Select() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::get_B_Monster() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::get_Hover() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::Overlay*& _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::get_Overlay_0() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x288);
}
int32_t& _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::get_Number() {
    return *(int32_t*)((uintptr_t)this + 0x290);
}
bool _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::get_SelectedAsMonster() {
    return (*(uint8_t*)((uintptr_t)this + 0x294 + 0)) & 1 != 0;
}
void _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::set_SelectedAsMonster(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x294 + 0);
    *(uint8_t*)((uintptr_t)this + 0x294 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::get_Authority() {
    return (*(uint8_t*)((uintptr_t)this + 0x295 + 0)) & 1 != 0;
}
void _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::set_Authority(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x295 + 0);
    *(uint8_t*)((uintptr_t)this + 0x295 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Lobby/UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C");
    return result;
}
void _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::ExecuteUbergraph_UI_MP_LobbyMonsterButton(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::ShowFriendOverlay() {
    return;
}
void _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::ToggleButtonColor(bool Value) {
    return;
}
void _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::OnInitialized0() {
    return;
}
void _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Lobby_UI_MP_LobbyMonsterButton::UI_MP_LobbyMonsterButton_C::BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
