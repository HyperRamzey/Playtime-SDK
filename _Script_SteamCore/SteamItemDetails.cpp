#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamItemDetails.hpp"
int32_t& _Script_SteamCore::SteamItemDetails::get_Quantity() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void* _Script_SteamCore::SteamItemDetails::get_InstanceID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::SteamItemDetails::get_Definition() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::SteamItemDetails::get_Flags() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamItemDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamItemDetails");
    return result;
}
