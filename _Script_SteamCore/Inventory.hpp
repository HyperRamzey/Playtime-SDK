#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "SteamInventoryResult.hpp"
#include "SteamInventoryUpdateHandle.hpp"
#include "SteamItemDef.hpp"
#include "SteamItemInstanceID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct Inventory : public SteamCoreSubsystem {
    private: char pad_48[0x120]; public:
    void* get_SteamInventoryResultReady();
    void* get_SteamInventoryDefinitionUpdate();
    void* get_SteamInventoryFullUpdate();
    void* get_SteamInventoryStartPurchaseResult();
    void* get_SteamInventoryRequestPricesResultDelegate();
    void* get_SteamInventoryEligiblePromoItemDefIDs();
    static _Script_CoreUObject::Class* static_class();
    bool TriggerItemDrop(_Script_SteamCore::SteamInventoryResult& Result, _Script_SteamCore::SteamItemDef ListDefinition);
    bool TransferItemQuantity(_Script_SteamCore::SteamInventoryResult& Result, _Script_SteamCore::SteamItemInstanceID ItemIDSource, int32_t Quantity, _Script_SteamCore::SteamItemInstanceID ItemIDDest);
    bool SubmitUpdateProperties(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamInventoryResult& ResultHandle);
    _Script_SteamCore::SteamInventoryUpdateHandle StartUpdateProperties();
    void StartPurchase(void*& Callback, void* ItemDefs, void* Quantity);
    bool SetPropertyString(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamItemInstanceID ItemId, void* PropertyName, void* Value);
    bool SetPropertyInt(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamItemInstanceID ItemId, void* PropertyName, int32_t Value);
    bool SetPropertyFloat(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamItemInstanceID ItemId, void* PropertyName, float Value);
    bool SetPropertyBool(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamItemInstanceID ItemId, void* PropertyName, bool bValue);
    bool SerializeResult(_Script_SteamCore::SteamInventoryResult Handle, void*& Buffer);
    void RequestPrices(void*& Callback);
    void RequestEligiblePromoItemDefinitionsIDs(void*& Callback, _Script_SteamCore::SteamID SteamID);
    bool RemoveProperty(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamItemInstanceID ItemId, void* PropertyName);
    bool LoadItemDefinitions();
    bool GrantPromoItems(_Script_SteamCore::SteamInventoryResult& Result);
    int32_t GetResultTimestamp(_Script_SteamCore::SteamInventoryResult Handle);
    void* GetResultStatus(_Script_SteamCore::SteamInventoryResult Handle);
    bool GetResultItems(_Script_SteamCore::SteamInventoryResult Handle, void*& Items);
    bool GetResultItemProperty(_Script_SteamCore::SteamInventoryResult Handle, int32_t ItemIndex, void* PropertyName, void*& Value);
    int32_t GetNumItemsWithPrices();
    bool GetItemsWithPrices(void*& ItemDefs, void*& Prices, void*& BasePrices);
    bool GetItemsByID(_Script_SteamCore::SteamInventoryResult& InventoryResult, void* InstanceIDs);
    bool GetItemPrice(_Script_SteamCore::SteamItemDef ItemDef, int32_t& Price, int32_t& BasePrice);
    bool GetItemDefinitionProperty(_Script_SteamCore::SteamItemDef ItemDef, void* PropertyName, void*& Value);
    bool GetItemDefinitionIDs(void*& ItemDefs);
    bool GetEligiblePromoItemDefinitionIDs(_Script_SteamCore::SteamID SteamID, void*& ItemDefs);
    bool GetAllItems(_Script_SteamCore::SteamInventoryResult& Handle);
    bool GenerateItems(_Script_SteamCore::SteamInventoryResult& Result, void* ItemDefs, void* Quantity);
    bool ExchangeItems(_Script_SteamCore::SteamInventoryResult& Result, void* ArrayGenerate, void* ArrayGenerateQuantity, void* ArrayDestroy, void* ArrayDestroyQuantity);
    void DestroyResult(_Script_SteamCore::SteamInventoryResult Handle);
    bool DeserializeResult(_Script_SteamCore::SteamInventoryResult& Result, void* Buffer, bool bReservedMustBeFalse);
    bool ConsumeItem(_Script_SteamCore::SteamInventoryResult& Result, _Script_SteamCore::SteamItemInstanceID ItemConsume, int32_t Quantity);
    bool CheckResultSteamID(_Script_SteamCore::SteamInventoryResult Handle, _Script_SteamCore::SteamID SteamIDExpected);
    bool AddPromoItems(_Script_SteamCore::SteamInventoryResult& OutResult, void* ItemDefs);
    bool AddPromoItem(_Script_SteamCore::SteamInventoryResult& Result, _Script_SteamCore::SteamItemDef ItemDef);
}; // Size: 0x168
#pragma pack(pop)
}
