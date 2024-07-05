#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "LeaverSaveGame.hpp"
void* _Script_Playtime_Multiplayer::LeaverSaveGame::get_LastPunishment() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Playtime_Multiplayer::LeaverSaveGame::get_Level() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::LeaverSaveGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.LeaverSaveGame");
    return result;
}
bool _Script_Playtime_Multiplayer::LeaverSaveGame::Does12HourPunishmentExist() {
    return;
}
bool _Script_Playtime_Multiplayer::LeaverSaveGame::ComparePunishmentLevel(_Script_CoreUObject::Timespan& TimeLeft) {
    return;
}
