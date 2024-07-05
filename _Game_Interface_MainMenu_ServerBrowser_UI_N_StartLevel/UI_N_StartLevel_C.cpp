#include "..\FUObjectArray.hpp"
#include "UI_N_StartLevel_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::get_Image_172() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::get_Button_58() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::get_Image_88() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::get_Check() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ServerBrowser/UI_N_StartLevel.UI_N_StartLevel_C");
    return result;
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::get_showdev() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::get_Subtitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
bool _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::get_Selected() {
    return (*(uint8_t*)((uintptr_t)this + 0x298 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::set_Selected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x298 + 0);
    *(uint8_t*)((uintptr_t)this + 0x298 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::get_Level() {
    return *(int32_t*)((uintptr_t)this + 0x29c);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::SetSelected(bool Selected) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::BndEvt__UI_N_StartLevel_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel::UI_N_StartLevel_C::ExecuteUbergraph_UI_N_StartLevel(int32_t EntryPoint) {
    return;
}
