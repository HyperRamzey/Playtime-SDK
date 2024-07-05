#include "..\FUObjectArray.hpp"
#include "UI_MapVoteItem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_ButtonFade() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_Selected() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_B_Map() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::CanvasPanel*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_BackgroundMask() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::Border*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_ButtonOverlay() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_CheckBox() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::RateLimit() {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_checkmark() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_Image() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_Image_307() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c0);
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::ToggleHighlight(bool Highlight) {
    return;
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_SelectedOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_TextBlock_138() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d0);
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::BndEvt__UI_MapVoteItem_B_Map_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
bool _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_Highlighted() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d8 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::set_Highlighted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::set_IsRandom(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x340 + 0);
    *(uint8_t*)((uintptr_t)this + 0x340 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_Map() {
    return (void*)((uintptr_t)this + 0x2e0);
}
bool _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_IsRandom() {
    return (*(uint8_t*)((uintptr_t)this + 0x340 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::Reconstruct() {
    return;
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_OnPressed() {
    return (void*)((uintptr_t)this + 0x348);
}
bool _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::get_CanVote() {
    return (*(uint8_t*)((uintptr_t)this + 0x358 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::set_CanVote(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x358 + 0);
    *(uint8_t*)((uintptr_t)this + 0x358 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Matchmaking/UI_MapVoteItem.UI_MapVoteItem_C");
    return result;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::Select() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::BndEvt__UI_MapVoteItem_B_Map_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::BndEvt__UI_MapVoteItem_B_Map_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::ExecuteUbergraph_UI_MapVoteItem(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem::UI_MapVoteItem_C::OnPressed__DelegateSignature() {
    return;
}
