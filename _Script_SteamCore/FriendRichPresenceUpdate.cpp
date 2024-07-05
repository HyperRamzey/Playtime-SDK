#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FriendRichPresenceUpdate.hpp"
void* _Script_SteamCore::FriendRichPresenceUpdate::get_SteamIDFriend() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::FriendRichPresenceUpdate::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::FriendRichPresenceUpdate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.FriendRichPresenceUpdate");
    return result;
}
