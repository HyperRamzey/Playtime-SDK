#include "..\FUObjectArray.hpp"
#include "UI_N_ServerCategory_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::get_Text() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::get_Button_58() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::get_Image_172() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::get_Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_Engine::Texture2D*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::get_IconTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x288);
}
bool _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::get_Selected() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::set_Selected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::get_Category() {
    return (void*)((uintptr_t)this + 0x2a9);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::get_Released() {
    return (void*)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ServerBrowser/UI_N_ServerCategory.UI_N_ServerCategory_C");
    return result;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::SetSelected(bool Selected) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::BndEvt__UI_N_ServerCategory_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::ExecuteUbergraph_UI_N_ServerCategory(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory::UI_N_ServerCategory_C::Released__DelegateSignature(void* Category) {
    return;
}
