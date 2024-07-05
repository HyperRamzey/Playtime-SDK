#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GSStatsStored.hpp"
void* _Script_SteamCore::GSStatsStored::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::GSStatsStored::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GSStatsStored");
    return result;
}
void* _Script_SteamCore::GSStatsStored::get_SteamIDUser() {
    return (void*)((uintptr_t)this + 0x8);
}
