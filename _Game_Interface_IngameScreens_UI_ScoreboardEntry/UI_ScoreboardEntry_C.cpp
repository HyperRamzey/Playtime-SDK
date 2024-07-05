#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerState\BP_MultiplayerPlayerState_C.hpp"
#include "UI_ScoreboardEntry_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PlayerState.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkCharacter.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\InvalidationBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::get_Avatar() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::get_Data1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::get_PlayerName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::get_Data2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::get_Image_141() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::InvalidationBox*& _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::get_InvalidationBox_0() {
    return *(_Script_UMG::InvalidationBox**)((uintptr_t)this + 0x290);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::get_Tickets() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::get_CachedMonster() {
    return *(_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C**)((uintptr_t)this + 0x2a8);
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::get_Character() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_ScoreboardEntry.UI_ScoreboardEntry_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::UpdateScoreboardEntry(_Script_Engine::PlayerState* Player, float BackgroundOpacity) {
    return;
}
void _Game_Interface_IngameScreens_UI_ScoreboardEntry::UI_ScoreboardEntry_C::ExecuteUbergraph_UI_ScoreboardEntry(int32_t EntryPoint) {
    return;
}
