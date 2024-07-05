#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "InAppPurchaseComponent.hpp"
#include "PurchaseItemDetails.hpp"
void* _Script_MagicLeap::InAppPurchaseComponent::get_GetPurchaseHistorySuccess() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_MagicLeap::InAppPurchaseComponent::get_InAppPurchaseLogMessage() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_MagicLeap::InAppPurchaseComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeap.InAppPurchaseComponent");
    return result;
}
void* _Script_MagicLeap::InAppPurchaseComponent::get_GetPurchaseHistoryFailure() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_MagicLeap::InAppPurchaseComponent::get_GetItemsDetailsSuccess() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_MagicLeap::InAppPurchaseComponent::get_GetItemsDetailsFailure() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_MagicLeap::InAppPurchaseComponent::get_PurchaseConfirmationSuccess() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_MagicLeap::InAppPurchaseComponent::get_PurchaseConfirmationFailure() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_MagicLeap::InAppPurchaseComponent::TryPurchaseItemAsync(_Script_MagicLeap::PurchaseItemDetails& ItemDetails) {
    return;
}
bool _Script_MagicLeap::InAppPurchaseComponent::TryGetPurchaseHistoryAsync(int32_t InNumPages) {
    return;
}
bool _Script_MagicLeap::InAppPurchaseComponent::TryGetItemsDetailsAsync(void*& ItemIDs) {
    return;
}
