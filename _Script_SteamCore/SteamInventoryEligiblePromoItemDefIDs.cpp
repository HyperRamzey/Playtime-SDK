#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamInventoryEligiblePromoItemDefIDs.hpp"
void* _Script_SteamCore::SteamInventoryEligiblePromoItemDefIDs::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_SteamCore::SteamInventoryEligiblePromoItemDefIDs::get_bCachedData() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void* _Script_SteamCore::SteamInventoryEligiblePromoItemDefIDs::get_SteamID() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::SteamInventoryEligiblePromoItemDefIDs::get_NumEligiblePromoItemDefs() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void _Script_SteamCore::SteamInventoryEligiblePromoItemDefIDs::set_bCachedData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamInventoryEligiblePromoItemDefIDs::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamInventoryEligiblePromoItemDefIDs");
    return result;
}
