#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_PlaytimeButton\UI_PlaytimeButton_C.hpp"
#include "UI_MP_Error_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RichTextBlock.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::get_UI_PlaytimeButton() {
    return *(_Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
bool _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::get_OriginalShowMouseCursor() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8 + 0)) & 1 != 0;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::get_Image_100() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::RichTextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::get_RichLabel() {
    return *(_Script_UMG::RichTextBlock**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::get_TopText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::get_Header() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::get_Text() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::set_OriginalShowMouseCursor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::ExecuteUbergraph_UI_MP_Error(int32_t EntryPoint) {
    return;
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::get_ClickedOK() {
    return (void*)((uintptr_t)this + 0x2c0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ServerBrowser/UI_MP_Error.UI_MP_Error_C");
    return result;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::OnEscapeInputCapture() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::BndEvt__UI_MP_Error_UI_PlaytimeButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error::UI_MP_Error_C::ClickedOK__DelegateSignature() {
    return;
}