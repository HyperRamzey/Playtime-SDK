#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "TicketSaveGame.hpp"
void _Script_Playtime_Multiplayer::TicketSaveGame::AddToTicketCount(int32_t Amount) {
    return;
}
int32_t& _Script_Playtime_Multiplayer::TicketSaveGame::get_TicketCount() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::TicketSaveGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.TicketSaveGame");
    return result;
}
void _Script_Playtime_Multiplayer::TicketSaveGame::SetTicketCountClamped(int32_t AbsoluteValue) {
    return;
}
void _Script_Playtime_Multiplayer::TicketSaveGame::RemoveFromTicketCount(int32_t Amount) {
    return;
}
int32_t _Script_Playtime_Multiplayer::TicketSaveGame::GetTicketCount() {
    return;
}
