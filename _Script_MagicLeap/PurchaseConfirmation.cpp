#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PurchaseConfirmation.hpp"
void* _Script_MagicLeap::PurchaseConfirmation::get_PackageName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MagicLeap::PurchaseConfirmation::get_Type() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_MagicLeap::PurchaseConfirmation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeap.PurchaseConfirmation");
    return result;
}
