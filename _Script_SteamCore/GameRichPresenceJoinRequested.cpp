#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameRichPresenceJoinRequested.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::GameRichPresenceJoinRequested::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GameRichPresenceJoinRequested");
    return result;
}
void* _Script_SteamCore::GameRichPresenceJoinRequested::get_SteamIDFriend() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GameRichPresenceJoinRequested::get_Connect() {
    return (void*)((uintptr_t)this + 0x8);
}
