#include "..\FUObjectArray.hpp"
#include "UI_OnScreenError_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::RetainerBox*& _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::get_TextBlock_185() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::get_Image_41() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::SetStyle() {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::get_Image_129() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::get_Time() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::get_Text() {
    return (void*)((uintptr_t)this + 0x298);
}
bool _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::get_Error() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b0 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::set_Error(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Object*& _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::get_From() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ServerBrowser/UI_OnScreenError.UI_OnScreenError_C");
    return result;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::PrintInfoToLog() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::HandleColor() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError::UI_OnScreenError_C::ExecuteUbergraph_UI_OnScreenError(int32_t EntryPoint) {
    return;
}
