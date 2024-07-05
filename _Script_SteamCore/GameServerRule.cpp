#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameServerRule.hpp"
void* _Script_SteamCore::GameServerRule::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GameServerRule::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamCore::GameServerRule::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GameServerRule");
    return result;
}
