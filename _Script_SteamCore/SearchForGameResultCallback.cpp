#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SearchForGameResultCallback.hpp"
void _Script_SteamCore::SearchForGameResultCallback::set_bFinalCallback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SteamCore::SearchForGameResultCallback::get_SearchID() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::SearchForGameResultCallback::get_CountAcceptedGame() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Script_SteamCore::SearchForGameResultCallback::get_Result() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamCore::SearchForGameResultCallback::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SearchForGameResultCallback");
    return result;
}
int32_t& _Script_SteamCore::SearchForGameResultCallback::get_CountPlayersInGame() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
void* _Script_SteamCore::SearchForGameResultCallback::get_SteamIDHost() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_SteamCore::SearchForGameResultCallback::get_bFinalCallback() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
