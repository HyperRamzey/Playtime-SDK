#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PlayerData.hpp"
void* _Script_Playtime_Multiplayer::PlayerData::get_PlayerID() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Playtime_Multiplayer::PlayerData::get_Tickets() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlayerData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.PlayerData");
    return result;
}
void* _Script_Playtime_Multiplayer::PlayerData::get_TicketRewardableActions() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Playtime_Multiplayer::PlayerData::get_RewardableActions() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Playtime_Multiplayer::PlayerData::get_PlayerTransform() {
    return (void*)((uintptr_t)this + 0x40);
}
