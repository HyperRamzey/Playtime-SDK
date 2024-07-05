#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GSStatsUnloaded.hpp"
void* _Script_SteamCore::GSStatsUnloaded::get_SteamIDUser() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::GSStatsUnloaded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GSStatsUnloaded");
    return result;
}
