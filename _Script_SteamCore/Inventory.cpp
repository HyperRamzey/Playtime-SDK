#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Inventory.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "SteamInventoryResult.hpp"
#include "SteamInventoryUpdateHandle.hpp"
#include "SteamItemDef.hpp"
#include "SteamItemInstanceID.hpp"
bool _Script_SteamCore::Inventory::GenerateItems(_Script_SteamCore::SteamInventoryResult& Result, void* ItemDefs, void* Quantity) {
    return;
}
void* _Script_SteamCore::Inventory::get_SteamInventoryResultReady() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SteamCore::Inventory::get_SteamInventoryFullUpdate() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SteamCore::Inventory::get_SteamInventoryDefinitionUpdate() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_SteamCore::Inventory::GetResultItemProperty(_Script_SteamCore::SteamInventoryResult Handle, int32_t ItemIndex, void* PropertyName, void*& Value) {
    return;
}
bool _Script_SteamCore::Inventory::TriggerItemDrop(_Script_SteamCore::SteamInventoryResult& Result, _Script_SteamCore::SteamItemDef ListDefinition) {
    return;
}
void* _Script_SteamCore::Inventory::get_SteamInventoryStartPurchaseResult() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_SteamCore::Inventory::CheckResultSteamID(_Script_SteamCore::SteamInventoryResult Handle, _Script_SteamCore::SteamID SteamIDExpected) {
    return;
}
void* _Script_SteamCore::Inventory::get_SteamInventoryRequestPricesResultDelegate() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_SteamCore::Inventory::get_SteamInventoryEligiblePromoItemDefIDs() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_SteamCore::Inventory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.Inventory");
    return result;
}
bool _Script_SteamCore::Inventory::TransferItemQuantity(_Script_SteamCore::SteamInventoryResult& Result, _Script_SteamCore::SteamItemInstanceID ItemIDSource, int32_t Quantity, _Script_SteamCore::SteamItemInstanceID ItemIDDest) {
    return;
}
bool _Script_SteamCore::Inventory::SubmitUpdateProperties(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamInventoryResult& ResultHandle) {
    return;
}
_Script_SteamCore::SteamInventoryUpdateHandle _Script_SteamCore::Inventory::StartUpdateProperties() {
    return;
}
void _Script_SteamCore::Inventory::StartPurchase(void*& Callback, void* ItemDefs, void* Quantity) {
    return;
}
bool _Script_SteamCore::Inventory::SetPropertyString(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamItemInstanceID ItemId, void* PropertyName, void* Value) {
    return;
}
bool _Script_SteamCore::Inventory::SetPropertyInt(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamItemInstanceID ItemId, void* PropertyName, int32_t Value) {
    return;
}
bool _Script_SteamCore::Inventory::GetEligiblePromoItemDefinitionIDs(_Script_SteamCore::SteamID SteamID, void*& ItemDefs) {
    return;
}
bool _Script_SteamCore::Inventory::SetPropertyFloat(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamItemInstanceID ItemId, void* PropertyName, float Value) {
    return;
}
bool _Script_SteamCore::Inventory::SetPropertyBool(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamItemInstanceID ItemId, void* PropertyName, bool bValue) {
    return;
}
bool _Script_SteamCore::Inventory::SerializeResult(_Script_SteamCore::SteamInventoryResult Handle, void*& Buffer) {
    return;
}
void _Script_SteamCore::Inventory::RequestPrices(void*& Callback) {
    return;
}
void _Script_SteamCore::Inventory::RequestEligiblePromoItemDefinitionsIDs(void*& Callback, _Script_SteamCore::SteamID SteamID) {
    return;
}
bool _Script_SteamCore::Inventory::RemoveProperty(_Script_SteamCore::SteamInventoryUpdateHandle Handle, _Script_SteamCore::SteamItemInstanceID ItemId, void* PropertyName) {
    return;
}
bool _Script_SteamCore::Inventory::LoadItemDefinitions() {
    return;
}
bool _Script_SteamCore::Inventory::GrantPromoItems(_Script_SteamCore::SteamInventoryResult& Result) {
    return;
}
int32_t _Script_SteamCore::Inventory::GetResultTimestamp(_Script_SteamCore::SteamInventoryResult Handle) {
    return;
}
void* _Script_SteamCore::Inventory::GetResultStatus(_Script_SteamCore::SteamInventoryResult Handle) {
    return;
}
bool _Script_SteamCore::Inventory::GetResultItems(_Script_SteamCore::SteamInventoryResult Handle, void*& Items) {
    return;
}
int32_t _Script_SteamCore::Inventory::GetNumItemsWithPrices() {
    return;
}
bool _Script_SteamCore::Inventory::GetItemsWithPrices(void*& ItemDefs, void*& Prices, void*& BasePrices) {
    return;
}
bool _Script_SteamCore::Inventory::GetItemsByID(_Script_SteamCore::SteamInventoryResult& InventoryResult, void* InstanceIDs) {
    return;
}
bool _Script_SteamCore::Inventory::GetItemPrice(_Script_SteamCore::SteamItemDef ItemDef, int32_t& Price, int32_t& BasePrice) {
    return;
}
bool _Script_SteamCore::Inventory::GetItemDefinitionProperty(_Script_SteamCore::SteamItemDef ItemDef, void* PropertyName, void*& Value) {
    return;
}
bool _Script_SteamCore::Inventory::ConsumeItem(_Script_SteamCore::SteamInventoryResult& Result, _Script_SteamCore::SteamItemInstanceID ItemConsume, int32_t Quantity) {
    return;
}
bool _Script_SteamCore::Inventory::GetItemDefinitionIDs(void*& ItemDefs) {
    return;
}
bool _Script_SteamCore::Inventory::GetAllItems(_Script_SteamCore::SteamInventoryResult& Handle) {
    return;
}
bool _Script_SteamCore::Inventory::ExchangeItems(_Script_SteamCore::SteamInventoryResult& Result, void* ArrayGenerate, void* ArrayGenerateQuantity, void* ArrayDestroy, void* ArrayDestroyQuantity) {
    return;
}
void _Script_SteamCore::Inventory::DestroyResult(_Script_SteamCore::SteamInventoryResult Handle) {
    return;
}
bool _Script_SteamCore::Inventory::DeserializeResult(_Script_SteamCore::SteamInventoryResult& Result, void* Buffer, bool bReservedMustBeFalse) {
    return;
}
bool _Script_SteamCore::Inventory::AddPromoItems(_Script_SteamCore::SteamInventoryResult& OutResult, void* ItemDefs) {
    return;
}
bool _Script_SteamCore::Inventory::AddPromoItem(_Script_SteamCore::SteamInventoryResult& Result, _Script_SteamCore::SteamItemDef ItemDef) {
    return;
}
