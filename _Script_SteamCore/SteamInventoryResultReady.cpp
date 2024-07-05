#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamInventoryResultReady.hpp"
void* _Script_SteamCore::SteamInventoryResultReady::get_Handle() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::SteamInventoryResultReady::get_Result() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamInventoryResultReady::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamInventoryResultReady");
    return result;
}
