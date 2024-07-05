#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_Loading\UI_N_Loading_C.hpp"
#include "UI_MP_ServerBrowser_C.hpp"
#include "..\_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory\UI_N_ServerCategory_C.hpp"
#include "..\_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow\UI_N_ServerRow_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MP_N_MenuButton\UI_MP_N_MenuButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\EditableTextBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::OnCallback_BE0D16BF44C98FD5E825EB91E429D311(void*& Results) {
    return;
}
_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_CategoryFriends() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C**)((uintptr_t)this + 0x290);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_Button_144() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_CurrentRow() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C**)((uintptr_t)this + 0x300);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_Button_1() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x280);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_Button() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_CategoryPublic_K2Node_ComponentBoundEvent_3_Released__DelegateSignature(void* Category) {
    return;
}
_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_CategoryLAN() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C**)((uintptr_t)this + 0x298);
}
_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_CategoryPublic() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::ScrollBox*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_Content() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_Exit() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_MapName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_NoGameSelected() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_NoGamesFound() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c8);
}
_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_Play() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_Population() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d8);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::OnSuccess_7EECB2314B992AA8E6AB5BB3D8E913F7() {
    return;
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_RightContent() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::EditableTextBox*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_Search() {
    return *(_Script_UMG::EditableTextBox**)((uintptr_t)this + 0x2e8);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_Back() {
    return (void*)((uintptr_t)this + 0x308);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_Thumb() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f0);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::Initialize() {
    return;
}
_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_UI_N_Loading() {
    return *(_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C**)((uintptr_t)this + 0x2f8);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::get_ServerNameList() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ServerBrowser/UI_MP_ServerBrowser.UI_MP_ServerBrowser_C");
    return result;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::FailServers() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::ClearServers() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::PopulateServers(void*& SteamSessions) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::PopulateRightData(_Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C* Row) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::OnFailure_7EECB2314B992AA8E6AB5BB3D8E913F7() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_Button_144_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_Search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(void*& Text) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::OnInitialized0() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_Play_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_Exit_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_CategoryFriends_K2Node_ComponentBoundEvent_6_Released__DelegateSignature(void* Category) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::ExecuteUbergraph_UI_MP_ServerBrowser(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C::Back__DelegateSignature() {
    return;
}
