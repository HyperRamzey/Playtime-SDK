#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GetOPFSettingsResult.hpp"
void* _Script_SteamCore::GetOPFSettingsResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::GetOPFSettingsResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GetOPFSettingsResult");
    return result;
}
int32_t& _Script_SteamCore::GetOPFSettingsResult::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
