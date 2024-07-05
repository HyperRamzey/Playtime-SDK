#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SabotageSaveGame.hpp"
void* _Script_Playtime_Multiplayer::SabotageSaveGame::GetSelectedSabotage() {
    return;
}
void* _Script_Playtime_Multiplayer::SabotageSaveGame::get_SelectedSabotage() {
    return (void*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::SabotageSaveGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.SabotageSaveGame");
    return result;
}
bool _Script_Playtime_Multiplayer::SabotageSaveGame::IsSabotageOwned(void*& Inventory, void*& Sabotage, int32_t& Level) {
    return;
}
void _Script_Playtime_Multiplayer::SabotageSaveGame::SetSelectedSabotage(void* Sabotage) {
    return;
}
_Script_Playtime_Multiplayer::SabotageSaveGame* _Script_Playtime_Multiplayer::SabotageSaveGame::GetSabotageSave() {
    return;
}
