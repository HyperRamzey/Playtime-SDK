#include "..\FUObjectArray.hpp"
#include "UI_MissionResultInfoBox_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\Throbber.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_InfoLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
void _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::set_UseTicketIcon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Overlay*& _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_ComplexInfo() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x270);
}
_Script_UMG::Throbber*& _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_LoadingProgress_Throbber() {
    return *(_Script_UMG::Throbber**)((uintptr_t)this + 0x280);
}
int32_t& _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_Amount() {
    return *(int32_t*)((uintptr_t)this + 0x2ac);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_RewardAmount() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_SimpleInfo() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_TicketIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_XPLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
bool _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_UseTicketIcon() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void* _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_InfoText() {
    return (void*)((uintptr_t)this + 0x2b0);
}
bool _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::get_isSimple() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::SetXPDoubled(bool isXPDoubled) {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::set_isSimple(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_MissionResultInfoBox.UI_MissionResultInfoBox_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::UpdateData(int32_t Amount) {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::UpdateText(void* InfoText) {
    return;
}
void _Game_Interface_IngameScreens_UI_MissionResultInfoBox::UI_MissionResultInfoBox_C::ExecuteUbergraph_UI_MissionResultInfoBox(int32_t EntryPoint) {
    return;
}
