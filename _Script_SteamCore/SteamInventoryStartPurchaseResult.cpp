#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamInventoryStartPurchaseResult.hpp"
void* _Script_SteamCore::SteamInventoryStartPurchaseResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::SteamInventoryStartPurchaseResult::get_OrderId() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::SteamInventoryStartPurchaseResult::get_TransactionId() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamInventoryStartPurchaseResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamInventoryStartPurchaseResult");
    return result;
}
