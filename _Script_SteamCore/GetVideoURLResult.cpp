#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GetVideoURLResult.hpp"
void* _Script_SteamCore::GetVideoURLResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GetVideoURLResult::get_URL() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::GetVideoURLResult::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_SteamCore::GetVideoURLResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GetVideoURLResult");
    return result;
}
