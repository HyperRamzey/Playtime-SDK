#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PersonaStateChange.hpp"
void* _Script_SteamCore::PersonaStateChange::get_SteamID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::PersonaStateChange::get_Flags() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::PersonaStateChange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.PersonaStateChange");
    return result;
}