#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "TicketReward.hpp"
void* _Script_Playtime_Multiplayer::TicketReward::get_ScoreboardDisplayText() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Playtime_Multiplayer::TicketReward::get_TicketsToReward() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_Playtime_Multiplayer::TicketReward::get_InGameNotificationDisplayText() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::TicketReward::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.TicketReward");
    return result;
}
