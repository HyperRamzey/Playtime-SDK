#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamInventoryRequestPricesResult.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamInventoryRequestPricesResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamInventoryRequestPricesResult");
    return result;
}
void* _Script_SteamCore::SteamInventoryRequestPricesResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::SteamInventoryRequestPricesResult::get_Currency() {
    return (void*)((uintptr_t)this + 0x8);
}
