#include "..\FUObjectArray.hpp"
#include "UI_ScoreboardInfoBox_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_FirstValue_Text() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_Avatar() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_AvatarBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::CanvasPanel*& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_CanvasPanel_62() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_SecondValue_Text() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_PlayerName_Text() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_ThirdValue_Text() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
bool _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_UseTicketIcon() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::set_UseTicketIcon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_PlayerName() {
    return (void*)((uintptr_t)this + 0x2b0);
}
bool _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_UseHeightOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::set_UseHeightOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_HeightOverride() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
bool _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_UseRGBAOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
void _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::set_UseRGBAOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_RGBAOverride() {
    return (void*)((uintptr_t)this + 0x2d4);
}
int32_t& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_Value1() {
    return *(int32_t*)((uintptr_t)this + 0x2e4);
}
int32_t& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_Value2() {
    return *(int32_t*)((uintptr_t)this + 0x2e8);
}
int32_t& _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::get_Value3() {
    return *(int32_t*)((uintptr_t)this + 0x2ec);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_ScoreboardInfoBox.UI_ScoreboardInfoBox_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::SetValues(void* PlayerName, int32_t Value1, int32_t Value2, int32_t Value3) {
    return;
}
void _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::UpdateValues() {
    return;
}
void _Game_Interface_IngameScreens_UI_ScoreboardInfoBox::UI_ScoreboardInfoBox_C::ExecuteUbergraph_UI_ScoreboardInfoBox(int32_t EntryPoint) {
    return;
}
