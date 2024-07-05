#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DownloadClanActivityCountsResult.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::DownloadClanActivityCountsResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.DownloadClanActivityCountsResult");
    return result;
}
bool _Script_SteamCore::DownloadClanActivityCountsResult::get_bSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_SteamCore::DownloadClanActivityCountsResult::set_bSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
