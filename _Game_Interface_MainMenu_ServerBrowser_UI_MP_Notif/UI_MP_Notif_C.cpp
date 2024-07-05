#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_BasicButton\UI_BasicButton_C.hpp"
#include "UI_MP_Notif_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_AffirmativeButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::SizeBox*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_HeaderBox() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_BodyLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_HeaderBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_HeaderFrame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_HeaderLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_NegativeButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_HeaderText() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_BodyText() {
    return (void*)((uintptr_t)this + 0x2c0);
}
bool _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_OnScreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d8 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::set_OnScreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_ClickYes() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_ClickNo() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::get_HeaderBGMat() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x300);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ServerBrowser/UI_MP_Notif.UI_MP_Notif_C");
    return result;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::ForceNo() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::OnEscapeInputCapture() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::BndEvt__UI_MP_Notif_AffirmativeButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::BndEvt__UI_MP_Notif_NegativeButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::ExecuteUbergraph_UI_MP_Notif(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::ClickNo__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C::ClickYes__DelegateSignature() {
    return;
}
