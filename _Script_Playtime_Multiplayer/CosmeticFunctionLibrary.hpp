#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "BoxySoundSet.hpp"
#include "Bundle.hpp"
#include "Cosmetic.hpp"
#include "HuggySoundSet.hpp"
#include "ItemDefinition.hpp"
#include "MommySoundSet.hpp"
#include "PresetSlot.hpp"
#include "ShopItem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct BundleAsset;
}
namespace _Script_Playtime_Multiplayer {
struct SoundPack;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Playtime_Multiplayer {
struct CustomizationSaveGame;
}
namespace _Script_Playtime_Multiplayer {
struct LoadingScreenAsset;
}
namespace _Script_Playtime_Multiplayer {
struct CosmeticAsset;
}
namespace _Script_Playtime_Multiplayer {
struct ActionAsset;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct CosmeticFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void VerifyPreset(void* Inventory, _Script_Playtime_Multiplayer::PresetSlot& Preset);
    void SortItemsByRarity(void*& IDArray, int32_t First, int32_t Last);
    void SortItemsAlphabetically(void*& IDArray, int32_t N);
    void SaveCosmetics(_Script_Playtime_Multiplayer::CustomizationSaveGame* In_SaveGame);
    bool OwnsItemID(int32_t ItemId);
    bool OwnsItem(void*& Inventory, int32_t ItemId);
    _Script_Playtime_Multiplayer::SoundPack* LoadSoundPack(_Script_Playtime_Multiplayer::ItemDefinition& Item);
    _Script_Playtime_Multiplayer::LoadingScreenAsset* LoadLoadingScreen(_Script_Playtime_Multiplayer::ItemDefinition& Item);
    _Script_Playtime_Multiplayer::CustomizationSaveGame* LoadCosmetics();
    _Script_Playtime_Multiplayer::CosmeticAsset* LoadCosmetic(_Script_Playtime_Multiplayer::ItemDefinition& Item);
    _Script_Playtime_Multiplayer::BundleAsset* LoadBundle(_Script_Playtime_Multiplayer::ItemDefinition& Item);
    _Script_Playtime_Multiplayer::ActionAsset* LoadAction(_Script_Playtime_Multiplayer::ItemDefinition& Item);
    void* ItemType(_Script_Playtime_Multiplayer::ItemDefinition& Item);
    bool IsValidShopItemID(int32_t ID);
    bool IsOutfit(_Script_Playtime_Multiplayer::ItemDefinition& Item);
    bool IsGesture(_Script_Playtime_Multiplayer::ItemDefinition& Item);
    void* GetSoundPacksOfType(void* Type);
    void* GetShopItemsByEvent(void* EventName);
    _Script_Playtime_Multiplayer::ShopItem GetShopItemData(int32_t ID);
    _Script_CoreUObject::LinearColor GetRarityColor(void* Rarity);
    bool GetPlayerCosmeticAnimInstance(_Script_Playtime_Multiplayer::Cosmetic CosmeticItem, void*& AnimInstance);
    void* GetOwnedItemsOfType(void* Type, void*& Inventory);
    void* GetOwnedItemsFiltered(void*& Inventory, void*& IDs, void* ItemType, void* CosmeticType, void* CharacterType, void* SoundPackType);
    void* GetOwnedCosmeticsOfTypeFor(void* Type, void* For, void*& Inventory);
    void* GetOwnedCosmeticsOfType(void* Type, void*& Inventory);
    void* GetOwnedActionsOfTypeFor(void* For, void*& Inventory);
    void* GetOwnedActions(void* Inventory);
    _Script_Playtime_Multiplayer::MommySoundSet GetMommySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item);
    _Script_Engine::SoundBase* GetMommySoundFor(_Script_Playtime_Multiplayer::MommySoundSet Sounds, void* Set);
    void* GetItemThumbnail(int32_t ID);
    void* GetItemsFiltered(void*& IDs, void* ItemType, void* CosmeticType, void* CharacterType, void* SoundPackType);
    _Script_Playtime_Multiplayer::ItemDefinition GetItemOfType(int32_t ID, void* Type, bool& Exists);
    void* GetItemName(int32_t ID);
    _Script_Playtime_Multiplayer::ItemDefinition GetItem(int32_t ID, bool& Exists);
    _Script_Playtime_Multiplayer::HuggySoundSet GetHuggySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item);
    _Script_Engine::SoundBase* GetHuggySoundFor(_Script_Playtime_Multiplayer::HuggySoundSet Sounds, void* Set);
    int32_t GetEmoteSimple(_Script_Playtime_Multiplayer::PresetSlot Slot, int32_t Index);
    void* GetDefaultUnlockedItemsOfTypeFor(void* Type, void* For);
    void* GetDefaultUnlockedItemsOfType(void* Type);
    void* GetDefaultUnlockedItems();
    void* GetDefaultUnlockedCosmeticItemsOfType(void* Type);
    _Script_Playtime_Multiplayer::PresetSlot GetDefaultPreset(void* Character);
    void* GetDefaultItemsFiltered(void*& IDs, void* ItemType, void* CosmeticType, void* CharacterType, void* SoundPackType);
    void* GetCosmeticTypeName(void* Type);
    void* GetCosmeticType(int32_t Item);
    void* GetCosmeticsOfType(void* Type);
    _Script_Playtime_Multiplayer::Cosmetic GetCosmeticDataVerified(int32_t ID, bool& bIsValid);
    _Script_Playtime_Multiplayer::Cosmetic GetCosmeticData(int32_t ID);
    _Script_CoreUObject::LinearColor GetCosmeticColor(int32_t ID, int32_t Index);
    _Script_Playtime_Multiplayer::Bundle GetBundleDataVerified(int32_t ID, bool& IsValid);
    _Script_Playtime_Multiplayer::Bundle GetBundleData(int32_t ID);
    _Script_Playtime_Multiplayer::BoxySoundSet GetBoxySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item);
    _Script_Engine::SoundBase* GetBoxySoundFor(_Script_Playtime_Multiplayer::BoxySoundSet Sounds, void* Set);
    void* GetAllCosmeticsOfTypeFor(void* Type, void* For);
    void* GetActionsOfTypeFor(void* For);
    void* CosmeticType(_Script_Playtime_Multiplayer::ItemDefinition& Item);
    void ClearCosmetics(_Script_Playtime_Multiplayer::PresetSlot& Slot);
    void* CharacterType(_Script_Playtime_Multiplayer::ItemDefinition& Item);
    void* AsCleanIntArray(_Script_Playtime_Multiplayer::PresetSlot Slot);
}; // Size: 0x28
#pragma pack(pop)
}
