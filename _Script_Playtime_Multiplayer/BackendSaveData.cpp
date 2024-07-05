#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BackendSaveData.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::BackendSaveData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.BackendSaveData");
    return result;
}
void _Script_Playtime_Multiplayer::BackendSaveData::SuccessfullyMigratedFromSteam() {
    return;
}
void _Script_Playtime_Multiplayer::BackendSaveData::SuccessfullyMigratedTickets() {
    return;
}
void _Script_Playtime_Multiplayer::BackendSaveData::SuccessfullyCreatedUser() {
    return;
}
_Script_Playtime_Multiplayer::BackendSaveData* _Script_Playtime_Multiplayer::BackendSaveData::GetBackendSaveData(bool& CreatedUser, bool& MigratedFromSteam, bool& CollectedTickets) {
    return;
}
