#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_GS_Escape\GS_Escape_C.hpp"
#include "..\_Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif\UI_MP_Notif_C.hpp"
#include "UI_AskToBeMonster_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C*& _Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C::get_UI_MP_Notif() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C::get_TextBlock_53() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
void _Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C::Construct0() {
    return;
}
_Game_Base_GS_Escape::GS_Escape_C*& _Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C::get_GS_Escape() {
    return *(_Game_Base_GS_Escape::GS_Escape_C**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/UI_AskToBeMonster.UI_AskToBeMonster_C");
    return result;
}
void* _Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C::GetTimeRemaing() {
    return;
}
void _Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C::Destruct0() {
    return;
}
void _Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C::ExecuteUbergraph_UI_AskToBeMonster(int32_t EntryPoint) {
    return;
}
