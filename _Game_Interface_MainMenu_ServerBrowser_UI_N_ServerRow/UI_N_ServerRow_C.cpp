#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser\UI_MP_ServerBrowser_C.hpp"
#include "UI_N_ServerRow_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_Ping() {
    return (void*)((uintptr_t)this + 0x4d0);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_NameLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_Image_172() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_Button_58() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_SessionNEW() {
    return (void*)((uintptr_t)this + 0x3b8);
}
bool _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_Selected() {
    return (*(uint8_t*)((uintptr_t)this + 0x298 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::GetSessionSettingStringFromKey(void* Key, void*& Value) {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_Thumb() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_PingLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::Construct0() {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_PopulationLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::set_Selected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x298 + 0);
    *(uint8_t*)((uintptr_t)this + 0x298 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_Session() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::SetSelected(bool Selected) {
    return;
}
_Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C*& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_Parent() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C**)((uintptr_t)this + 0x3a8);
}
int32_t& _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::get_Level() {
    return *(int32_t*)((uintptr_t)this + 0x3b0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ServerBrowser/UI_N_ServerRow.UI_N_ServerRow_C");
    return result;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::SetStyle() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::BndEvt__UI_N_ServerRow_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow::UI_N_ServerRow_C::ExecuteUbergraph_UI_N_ServerRow(int32_t EntryPoint) {
    return;
}
