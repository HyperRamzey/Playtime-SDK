#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerState\BP_MultiplayerPlayerState_C.hpp"
#include "..\_Game_Base_GS_Escape\GS_Escape_C.hpp"
#include "UI_PlayerStatus_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_PlayerStatusItem\UI_PlayerStatusItem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PlayerState.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
void* _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::get_ShortenedPlayerNameArray() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_UMG::VerticalBox*& _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::get_VerticalBox_82() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x268);
}
void _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::ExecuteUbergraph_UI_PlayerStatus(int32_t EntryPoint) {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::GetPlayersStatus(_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C* PlayerState, _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C*& NewParam) {
    return;
}
void* _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::get_Status() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_PlayerStatus.UI_PlayerStatus_C");
    return result;
}
_Game_Base_GS_Escape::GS_Escape_C*& _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::get_GS_Escape() {
    return *(_Game_Base_GS_Escape::GS_Escape_C**)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::get_ShortenedPlayerName() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::UpdatePlayers() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::Construct0() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C::UpdatePlayerHoldingToyPart(_Script_Engine::PlayerState* PlayerState, _Script_Engine::Texture2D* ToyPart, bool IsHoldingToyPart, void* Toy_Type) {
    return;
}
