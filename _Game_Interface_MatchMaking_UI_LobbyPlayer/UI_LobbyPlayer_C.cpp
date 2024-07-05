#include "..\FUObjectArray.hpp"
#include "UI_LobbyPlayer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_MatchMaking_UI_LobbyPlayer::UI_LobbyPlayer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_LobbyPlayer::UI_LobbyPlayer_C::get_Image() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_MatchMaking_UI_LobbyPlayer::UI_LobbyPlayer_C::get_PlayerName() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_LobbyPlayer::UI_LobbyPlayer_C::get_PlayerImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_MatchMaking_UI_LobbyPlayer::UI_LobbyPlayer_C::get_T_PlayerName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
bool _Game_Interface_MatchMaking_UI_LobbyPlayer::UI_LobbyPlayer_C::get_Host() {
    return (*(uint8_t*)((uintptr_t)this + 0x298 + 0)) & 1 != 0;
}
void _Game_Interface_MatchMaking_UI_LobbyPlayer::UI_LobbyPlayer_C::set_Host(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x298 + 0);
    *(uint8_t*)((uintptr_t)this + 0x298 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_MatchMaking_UI_LobbyPlayer::UI_LobbyPlayer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MatchMaking/UI_LobbyPlayer.UI_LobbyPlayer_C");
    return result;
}
void _Game_Interface_MatchMaking_UI_LobbyPlayer::UI_LobbyPlayer_C::Construct0() {
    return;
}
void _Game_Interface_MatchMaking_UI_LobbyPlayer::UI_LobbyPlayer_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MatchMaking_UI_LobbyPlayer::UI_LobbyPlayer_C::ExecuteUbergraph_UI_LobbyPlayer(int32_t EntryPoint) {
    return;
}
