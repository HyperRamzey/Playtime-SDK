#include "..\FUObjectArray.hpp"
#include "UI_Ready_Indicator_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Image*& _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::get_Body() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
void _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void* _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_CoreUObject::Class* _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Lobby/UI_Ready_Indicator.UI_Ready_Indicator_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::get_Changed() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::get_AnimatingOutline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::get_Outline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::get_Text() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_UMG::TextBlock*& _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::get_TextBlock_36() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
void _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::Construct0() {
    return;
}
void _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::SetReady(bool Ready_, bool Animate_) {
    return;
}
void _Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C::ExecuteUbergraph_UI_Ready_Indicator(int32_t EntryPoint) {
    return;
}
