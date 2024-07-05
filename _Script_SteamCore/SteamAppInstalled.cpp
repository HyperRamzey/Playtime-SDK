#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamAppInstalled.hpp"
int32_t& _Script_SteamCore::SteamAppInstalled::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamAppInstalled::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamAppInstalled");
    return result;
}
