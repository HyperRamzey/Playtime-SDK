#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerState\BP_MultiplayerPlayerState_C.hpp"
#include "..\_Game_Base_GS_Escape\GS_Escape_C.hpp"
#include "..\_Game_Interface_Content_UI_N_RadialProgressBar\UI_N_RadialProgressBar_C.hpp"
#include "UI_PlayerStatusItem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_RadialProgress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_PlayerStatusIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_EKG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_HeldToyPart() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_HeldToyPartBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::UpdateHealth() {
    return;
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_PlayerStatusBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::ScaleBox*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_NameTextBox() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_PlayerName() {
    return (void*)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_StatusBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_T_PlayerName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_UI_N_RadialProgressBar() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x2b0);
}
_Game_Base_GS_Escape::GS_Escape_C*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_GS_Escape() {
    return *(_Game_Base_GS_Escape::GS_Escape_C**)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_Status() {
    return (void*)((uintptr_t)this + 0x2d0);
}
_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::get_PlayerState() {
    return *(_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_PlayerStatusItem.UI_PlayerStatusItem_C");
    return result;
}
_Script_SlateCore::SlateColor _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::Get_T_PlayerName_ColorAndOpacity_0() {
    return;
}
_Script_SlateCore::SlateBrush _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::Get_Player_Status_Icon() {
    return;
}
_Script_SlateCore::SlateColor _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::Get_Status_Color() {
    return;
}
void* _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::Get_Status_Text() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::Construct0() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::BeginRadialTick() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::SetPlayerName() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::SetPerkIcon() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::UpdateHeldToyPart(_Script_Engine::Texture2D* ToyPart, bool IsHoldingToyPart, void* Toy_Type) {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::UpdatePerksVisibility() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::StopRadialTick() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::PauseRadialTick() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::UnpauseRadialTick() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C::ExecuteUbergraph_UI_PlayerStatusItem(int32_t EntryPoint) {
    return;
}
