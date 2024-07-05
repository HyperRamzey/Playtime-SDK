#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeap {
struct PurchaseItemDetails;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct InAppPurchaseComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x78]; public:
    void* get_InAppPurchaseLogMessage();
    void* get_GetItemsDetailsSuccess();
    void* get_GetItemsDetailsFailure();
    void* get_PurchaseConfirmationSuccess();
    void* get_PurchaseConfirmationFailure();
    void* get_GetPurchaseHistorySuccess();
    void* get_GetPurchaseHistoryFailure();
    static _Script_CoreUObject::Class* static_class();
    bool TryPurchaseItemAsync(_Script_MagicLeap::PurchaseItemDetails& ItemDetails);
    bool TryGetPurchaseHistoryAsync(int32_t InNumPages);
    bool TryGetItemsDetailsAsync(void*& ItemIDs);
}; // Size: 0x128
#pragma pack(pop)
}
