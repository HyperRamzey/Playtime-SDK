#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerState\BP_MultiplayerPlayerState_C.hpp"
#include "..\_Game_Base_GS_Escape\GS_Escape_C.hpp"
#include "UI_MP_PlayerSlot_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Image*& _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::get_ReadyCheckbox() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::get_NameLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::get_Monster() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::get_Pulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::get_StatusBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::SizeBox*& _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::get_SB_Monster() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x290);
}
_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::get_PlayerRef() {
    return *(_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C**)((uintptr_t)this + 0x2a0);
}
_Game_Base_GS_Escape::GS_Escape_C*& _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::get_GameStateRef() {
    return *(_Game_Base_GS_Escape::GS_Escape_C**)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Lobby/UI_MP_PlayerSlot.UI_MP_PlayerSlot_C");
    return result;
}
void _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::OnInitialized0() {
    return;
}
void _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::Construct0() {
    return;
}
void _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::UpdateName() {
    return;
}
void _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::UpdateReadiness() {
    return;
}
void _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::UpdateMonsterQueueSystem() {
    return;
}
void _Game_Interface_Lobby_UI_MP_PlayerSlot::UI_MP_PlayerSlot_C::ExecuteUbergraph_UI_MP_PlayerSlot(int32_t EntryPoint) {
    return;
}
