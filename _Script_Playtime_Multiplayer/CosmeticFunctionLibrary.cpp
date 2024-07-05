#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "ActionAsset.hpp"
#include "BoxySoundSet.hpp"
#include "Bundle.hpp"
#include "BundleAsset.hpp"
#include "Cosmetic.hpp"
#include "CosmeticAsset.hpp"
#include "CosmeticFunctionLibrary.hpp"
#include "CustomizationSaveGame.hpp"
#include "HuggySoundSet.hpp"
#include "ItemDefinition.hpp"
#include "LoadingScreenAsset.hpp"
#include "MommySoundSet.hpp"
#include "PresetSlot.hpp"
#include "ShopItem.hpp"
#include "SoundPack.hpp"
void _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::SaveCosmetics(_Script_Playtime_Multiplayer::CustomizationSaveGame* In_SaveGame) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.CosmeticFunctionLibrary");
    return result;
}
void _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::ClearCosmetics(_Script_Playtime_Multiplayer::PresetSlot& Slot) {
    return;
}
bool _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::OwnsItemID(int32_t ItemId) {
    return;
}
void _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::VerifyPreset(void* Inventory, _Script_Playtime_Multiplayer::PresetSlot& Preset) {
    return;
}
bool _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::IsGesture(_Script_Playtime_Multiplayer::ItemDefinition& Item) {
    return;
}
_Script_Playtime_Multiplayer::SoundPack* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::LoadSoundPack(_Script_Playtime_Multiplayer::ItemDefinition& Item) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetItemsFiltered(void*& IDs, void* ItemType, void* CosmeticType, void* CharacterType, void* SoundPackType) {
    return;
}
void _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::SortItemsAlphabetically(void*& IDArray, int32_t N) {
    return;
}
_Script_Playtime_Multiplayer::Cosmetic _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetCosmeticData(int32_t ID) {
    return;
}
void _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::SortItemsByRarity(void*& IDArray, int32_t First, int32_t Last) {
    return;
}
bool _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::OwnsItem(void*& Inventory, int32_t ItemId) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetDefaultItemsFiltered(void*& IDs, void* ItemType, void* CosmeticType, void* CharacterType, void* SoundPackType) {
    return;
}
_Script_Playtime_Multiplayer::LoadingScreenAsset* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::LoadLoadingScreen(_Script_Playtime_Multiplayer::ItemDefinition& Item) {
    return;
}
_Script_Playtime_Multiplayer::CustomizationSaveGame* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::LoadCosmetics() {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetAllCosmeticsOfTypeFor(void* Type, void* For) {
    return;
}
_Script_Playtime_Multiplayer::CosmeticAsset* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::LoadCosmetic(_Script_Playtime_Multiplayer::ItemDefinition& Item) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetOwnedItemsOfType(void* Type, void*& Inventory) {
    return;
}
_Script_Playtime_Multiplayer::BundleAsset* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::LoadBundle(_Script_Playtime_Multiplayer::ItemDefinition& Item) {
    return;
}
_Script_Playtime_Multiplayer::ActionAsset* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::LoadAction(_Script_Playtime_Multiplayer::ItemDefinition& Item) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::ItemType(_Script_Playtime_Multiplayer::ItemDefinition& Item) {
    return;
}
bool _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::IsValidShopItemID(int32_t ID) {
    return;
}
bool _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::IsOutfit(_Script_Playtime_Multiplayer::ItemDefinition& Item) {
    return;
}
_Script_Playtime_Multiplayer::PresetSlot _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetDefaultPreset(void* Character) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetSoundPacksOfType(void* Type) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetShopItemsByEvent(void* EventName) {
    return;
}
_Script_Playtime_Multiplayer::ShopItem _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetShopItemData(int32_t ID) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetCosmeticTypeName(void* Type) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetRarityColor(void* Rarity) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::CosmeticType(_Script_Playtime_Multiplayer::ItemDefinition& Item) {
    return;
}
bool _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetPlayerCosmeticAnimInstance(_Script_Playtime_Multiplayer::Cosmetic CosmeticItem, void*& AnimInstance) {
    return;
}
_Script_Playtime_Multiplayer::Bundle _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetBundleDataVerified(int32_t ID, bool& IsValid) {
    return;
}
_Script_Engine::SoundBase* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetHuggySoundFor(_Script_Playtime_Multiplayer::HuggySoundSet Sounds, void* Set) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetOwnedItemsFiltered(void*& Inventory, void*& IDs, void* ItemType, void* CosmeticType, void* CharacterType, void* SoundPackType) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetOwnedCosmeticsOfTypeFor(void* Type, void* For, void*& Inventory) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetDefaultUnlockedItemsOfType(void* Type) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetOwnedCosmeticsOfType(void* Type, void*& Inventory) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetOwnedActionsOfTypeFor(void* For, void*& Inventory) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetDefaultUnlockedItems() {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetOwnedActions(void* Inventory) {
    return;
}
_Script_Playtime_Multiplayer::MommySoundSet _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetMommySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item) {
    return;
}
_Script_Engine::SoundBase* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetMommySoundFor(_Script_Playtime_Multiplayer::MommySoundSet Sounds, void* Set) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetItemThumbnail(int32_t ID) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetActionsOfTypeFor(void* For) {
    return;
}
_Script_Playtime_Multiplayer::ItemDefinition _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetItemOfType(int32_t ID, void* Type, bool& Exists) {
    return;
}
_Script_Playtime_Multiplayer::Cosmetic _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetCosmeticDataVerified(int32_t ID, bool& bIsValid) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetItemName(int32_t ID) {
    return;
}
_Script_Playtime_Multiplayer::ItemDefinition _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetItem(int32_t ID, bool& Exists) {
    return;
}
_Script_Playtime_Multiplayer::HuggySoundSet _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetHuggySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item) {
    return;
}
int32_t _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetEmoteSimple(_Script_Playtime_Multiplayer::PresetSlot Slot, int32_t Index) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetDefaultUnlockedItemsOfTypeFor(void* Type, void* For) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetDefaultUnlockedCosmeticItemsOfType(void* Type) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetCosmeticType(int32_t Item) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetCosmeticsOfType(void* Type) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetCosmeticColor(int32_t ID, int32_t Index) {
    return;
}
_Script_Playtime_Multiplayer::Bundle _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetBundleData(int32_t ID) {
    return;
}
_Script_Playtime_Multiplayer::BoxySoundSet _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetBoxySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item) {
    return;
}
_Script_Engine::SoundBase* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::GetBoxySoundFor(_Script_Playtime_Multiplayer::BoxySoundSet Sounds, void* Set) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::CharacterType(_Script_Playtime_Multiplayer::ItemDefinition& Item) {
    return;
}
void* _Script_Playtime_Multiplayer::CosmeticFunctionLibrary::AsCleanIntArray(_Script_Playtime_Multiplayer::PresetSlot Slot) {
    return;
}
