#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamUGCQueryCompleted.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamUGCQueryCompleted::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamUGCQueryCompleted");
    return result;
}
void* _Script_SteamCore::SteamUGCQueryCompleted::get_Handle() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::SteamUGCQueryCompleted::get_TotalMatchingResults() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_SteamCore::SteamUGCQueryCompleted::get_Result() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::SteamUGCQueryCompleted::get_NumResultsReturned() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
bool _Script_SteamCore::SteamUGCQueryCompleted::get_bCachedData() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_SteamCore::SteamUGCQueryCompleted::set_bCachedData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
