#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SearchForGameProgressCallback.hpp"
void* _Script_SteamCore::SearchForGameProgressCallback::get_SearchID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::SearchForGameProgressCallback::get_LobbyID() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_SteamCore::SearchForGameProgressCallback::get_Result() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_SteamCore::SearchForGameProgressCallback::get_SecondsRemainingEstimate() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_SteamCore::SearchForGameProgressCallback::get_SteamIDEndedSearch() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_SteamCore::SearchForGameProgressCallback::get_PlayersSearching() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_SteamCore::SearchForGameProgressCallback::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SearchForGameProgressCallback");
    return result;
}
