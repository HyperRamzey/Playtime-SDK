#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Playtime_Multiplayer\Cosmetic.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
#include "..\_Script_Playtime_Multiplayer\ShopItem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Playtime_Multiplayer {
struct BoxySoundSet;
}
namespace _Script_Playtime_Multiplayer {
struct HuggySoundSet;
}
namespace _Script_Playtime_Multiplayer {
struct MommySoundSet;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer {
struct ABP_NetworkPlayer_C;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_FirstPersonGuns {
struct ABP_FirstPersonGuns_C;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Game_Player_Huggy_BP_NetworkHuggy {
struct BP_NetworkHuggy_C;
}
namespace _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy {
struct BP_NetworkMommy_C;
}
namespace _Game_Player_Boxy_BP_NetworkBoxy {
struct BP_NetworkBoxy_C;
}
namespace _Script_Playtime_Multiplayer {
struct CustomizationSaveGame;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
struct MaterialInstance;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary {
#pragma pack(push, 1)
struct CosmeticCoreLibrary_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void GetSalePrice(int32_t ID, _Script_CoreUObject::Object* __WorldContext, int32_t& SalePrice, bool& Valid);
    void GetItemTypeName(void* Type, _Script_CoreUObject::Object* __WorldContext, void*& Name);
    void BundleContainsItemType(int32_t ID, void* Cosmetic_Type, _Script_CoreUObject::Object* __WorldContext, bool& Return_Value);
    void GetBoxySoundsFor(int32_t Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::BoxySoundSet& Sounds);
    void GetHuggySoundsFor(int32_t Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::HuggySoundSet& Sounds);
    void GetMommySoundsFor(int32_t Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::MommySoundSet& Sounds);
    void FormatDateTime(_Script_CoreUObject::Timespan Timespan, _Script_CoreUObject::Object* __WorldContext, void*& Return_Value);
    void MakeBundlePreset(int32_t ID, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::PresetSlot& Return_Value, bool& Valid);
    void MakeSingleCosmeticPreset(int32_t ID, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::PresetSlot& Return_Value, bool& Valid);
    void PlayPlayerCosmeticSelectAnimations(void* Cosmetic_Type, _Script_Engine::SkeletalMeshComponent* Root_Player_Mesh, _Script_Engine::SkeletalMeshComponent* Left_Hand_Mesh, _Script_Engine::SkeletalMeshComponent* Right_Hand_Mesh, _Script_CoreUObject::Object* __WorldContext);
    void PlayNetworkPlayerCosmeticSelectAnimations(void* Cosmetic_Type, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Player, _Script_CoreUObject::Object* __WorldContext);
    void PlayPlayerAction(int32_t Action_ID, _Script_Engine::SkeletalMeshComponent* Root_Player_Mesh, _Script_Engine::SkeletalMeshComponent* Left_Hand_Mesh, _Script_Engine::SkeletalMeshComponent* Right_Hand_Mesh, bool Third_Person, _Script_CoreUObject::Object* __WorldContext);
    void GetNetworkCharacterAnimBP(_Script_Engine::SkeletalMeshComponent* Root_Player_Mesh, _Script_CoreUObject::Object* __WorldContext, _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C*& Network_Player_ABP, bool& Valid);
    void GetFirstPersonGunsAnimBP(_Script_Engine::SkeletalMeshComponent* Root_Player_Mesh, _Script_CoreUObject::Object* __WorldContext, _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_FirstPersonGuns::ABP_FirstPersonGuns_C*& First_Person_Guns_ABP, bool& Valid);
    void MakePresetFromNameMap(void* Map, void* Character_Type, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::PresetSlot& Return_Value);
    void ApplyCosmeticToPreset(int32_t ID, void* Type, _Script_CoreUObject::Object* __WorldContext);
    void GetCosmeticColorFromArray(int32_t ID, int32_t ColorIndex, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::LinearColor& LinearColor);
    void UpdateGenerifiedCosmetic(int32_t Identifier, _Script_Engine::ChildActorComponent* Child_Actor, _Script_CoreUObject::LinearColor Color, bool Use_Default_Class, _Script_CoreUObject::Object* __WorldContext);
    void GetDefaultGenerifiedCosmeticClassByType(void* Cosmetic_Type, void* Character_Type, _Script_CoreUObject::Object* __WorldContext, void*& Return_Value);
    void FilterActionWithType(void* Character, int32_t ID, _Script_CoreUObject::Object* __WorldContext, int32_t& OutID);
    void FilterCosmeticWithType(void* Character, int32_t ID, void* Type, _Script_CoreUObject::Object* __WorldContext, int32_t& OutID);
    void FilterItem(void* Character, int32_t ID, _Script_CoreUObject::Object* __WorldContext, int32_t& OutID);
    void Sanitize_Preset(void* Character, _Script_Playtime_Multiplayer::PresetSlot Preset, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::PresetSlot& Out);
    void Get_Rarity_Background(void* Item, _Script_CoreUObject::Object* __WorldContext, void*& BG);
    void GetTypeNameSanitized(void* Type, _Script_CoreUObject::Object* __WorldContext, void*& Name);
    _Script_Engine::SoundBase* GetTypeSelectionSound(void* Type, _Script_CoreUObject::Object* __WorldContext);
    void Custom_Set_Huggy_Skin(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C* Huggy, int32_t Skin, _Script_CoreUObject::Object* __WorldContext);
    void Custom_Set_Mommy_Skin(_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C* Mommy, int32_t Skin, _Script_CoreUObject::Object* __WorldContext);
    void Custom_Set_Boxy_Skin(_Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C* Boxy, int32_t Skin, _Script_CoreUObject::Object* __WorldContext);
    void GetBoxySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::BoxySoundSet& Sounds);
    void GetHuggySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::HuggySoundSet& Sounds);
    void GetMommySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::MommySoundSet& Sounds);
    void NewUpdatePlayerCosmetics(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, _Script_CoreUObject::Object* __WorldContext);
    void Get_Rarity_Name(void* Rarity, _Script_CoreUObject::Object* __WorldContext, void*& Name);
    void PlayerSetPoseComponent(bool Use_Anim_BP, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, _Script_Engine::SkeletalMeshComponent* Mesh, void* Anim_BP, _Script_CoreUObject::Object* __WorldContext);
    void UpdatePlayerEmotes(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, _Script_CoreUObject::Object* __WorldContext);
    void ClearMaterialSlots(_Script_Engine::PrimitiveComponent* Skeletal_Mesh, _Script_CoreUObject::Object* __WorldContext);
    _Script_Engine::Texture2D* GetCosmeticTypeIcon(void* Type, _Script_CoreUObject::Object* __WorldContext);
    _Script_CoreUObject::LinearColor GetRarityColor(void* Rarity, bool Dark, _Script_CoreUObject::Object* __WorldContext);
    void GetPlayerCosmeticAnimInstance(_Script_Playtime_Multiplayer::Cosmetic Cosmetic_Item, _Script_CoreUObject::Object* __WorldContext, void*& Anim_Instance, bool& Uses_Anim_BP);
    void UpdatePlayerSkin(_Script_Engine::MaterialInstance* Skin_Material, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, _Script_Engine::SkeletalMesh* Shirt, _Script_CoreUObject::Object* __WorldContext);
    int32_t GetRandomItem(_Script_CoreUObject::Object* __WorldContext);
    void UnequipCosmetic(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, void* ClearType, _Script_CoreUObject::Object* __WorldContext);
    void GetCosmeticTypeName(void* Type, _Script_CoreUObject::Object* __WorldContext, void*& Name);
    void Get_CosmeticType(int32_t Item, _Script_CoreUObject::Object* __WorldContext, void*& Type, bool& Valid);
    void* GetShopItemsByEvent(void* Event_Name, _Script_CoreUObject::Object* __WorldContext);
    void Get_Cosmetic_Data_Name(void* Cosmetic, _Script_CoreUObject::Object* __WorldContext, bool& Valid, _Script_Playtime_Multiplayer::Cosmetic& Return_Value);
    void GetItemThumbnail(int32_t Item, _Script_CoreUObject::Object* __WorldContext, void*& Thumbnail);
    void* GetItemName(int32_t Item, _Script_CoreUObject::Object* __WorldContext);
    _Script_Playtime_Multiplayer::ShopItem GetShopItemData(int32_t ID, _Script_CoreUObject::Object* __WorldContext, bool& Valid);
}; // Size: 0x28
#pragma pack(pop)
}
