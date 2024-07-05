#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamSessionResult.hpp"
void* _Script_SteamCore::SteamSessionResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::SteamSessionResult::get_SessionSettings() {
    return (void*)((uintptr_t)this + 0x108);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamSessionResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamSessionResult");
    return result;
}
