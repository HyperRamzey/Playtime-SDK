#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PurchaseItemDetails.hpp"
void* _Script_MagicLeap::PurchaseItemDetails::get_Price() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MagicLeap::PurchaseItemDetails::get_Type() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_MagicLeap::PurchaseItemDetails::get_Name() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MagicLeap::PurchaseItemDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeap.PurchaseItemDetails");
    return result;
}
