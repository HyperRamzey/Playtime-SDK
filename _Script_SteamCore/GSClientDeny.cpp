#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GSClientDeny.hpp"
void* _Script_SteamCore::GSClientDeny::get_SteamID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GSClientDeny::get_DenyReason() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::GSClientDeny::get_OptionalText() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamCore::GSClientDeny::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GSClientDeny");
    return result;
}
