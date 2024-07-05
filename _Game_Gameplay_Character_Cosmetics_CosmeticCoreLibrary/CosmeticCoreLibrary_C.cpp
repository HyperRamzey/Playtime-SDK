#include "..\FUObjectArray.hpp"
#include "CosmeticCoreLibrary_C.hpp"
#include "..\_Game_Player_Boxy_BP_NetworkBoxy\BP_NetworkBoxy_C.hpp"
#include "..\_Game_Player_Huggy_BP_NetworkHuggy\BP_NetworkHuggy_C.hpp"
#include "..\_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy\BP_NetworkMommy_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_FirstPersonGuns\ABP_FirstPersonGuns_C.hpp"
#include "..\_Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer\ABP_NetworkPlayer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\MaterialInstance.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_Playtime_Multiplayer\BoxySoundSet.hpp"
#include "..\_Script_Playtime_Multiplayer\Cosmetic.hpp"
#include "..\_Script_Playtime_Multiplayer\CustomizationSaveGame.hpp"
#include "..\_Script_Playtime_Multiplayer\HuggySoundSet.hpp"
#include "..\_Script_Playtime_Multiplayer\MommySoundSet.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
#include "..\_Script_Playtime_Multiplayer\ShopItem.hpp"
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::Get_CosmeticType(int32_t Item, _Script_CoreUObject::Object* __WorldContext, void*& Type, bool& Valid) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetHuggySoundsFor(int32_t Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::HuggySoundSet& Sounds) {
    return;
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Cosmetics/CosmeticCoreLibrary.CosmeticCoreLibrary_C");
    return result;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::FormatDateTime(_Script_CoreUObject::Timespan Timespan, _Script_CoreUObject::Object* __WorldContext, void*& Return_Value) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetSalePrice(int32_t ID, _Script_CoreUObject::Object* __WorldContext, int32_t& SalePrice, bool& Valid) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetItemTypeName(void* Type, _Script_CoreUObject::Object* __WorldContext, void*& Name) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetBoxySoundsFor(int32_t Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::BoxySoundSet& Sounds) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::UnequipCosmetic(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, void* ClearType, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::BundleContainsItemType(int32_t ID, void* Cosmetic_Type, _Script_CoreUObject::Object* __WorldContext, bool& Return_Value) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetMommySoundsFor(int32_t Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::MommySoundSet& Sounds) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetDefaultGenerifiedCosmeticClassByType(void* Cosmetic_Type, void* Character_Type, _Script_CoreUObject::Object* __WorldContext, void*& Return_Value) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::MakeBundlePreset(int32_t ID, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::PresetSlot& Return_Value, bool& Valid) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::MakeSingleCosmeticPreset(int32_t ID, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::PresetSlot& Return_Value, bool& Valid) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::PlayPlayerCosmeticSelectAnimations(void* Cosmetic_Type, _Script_Engine::SkeletalMeshComponent* Root_Player_Mesh, _Script_Engine::SkeletalMeshComponent* Left_Hand_Mesh, _Script_Engine::SkeletalMeshComponent* Right_Hand_Mesh, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::UpdatePlayerSkin(_Script_Engine::MaterialInstance* Skin_Material, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, _Script_Engine::SkeletalMesh* Shirt, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::PlayNetworkPlayerCosmeticSelectAnimations(void* Cosmetic_Type, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Player, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::PlayPlayerAction(int32_t Action_ID, _Script_Engine::SkeletalMeshComponent* Root_Player_Mesh, _Script_Engine::SkeletalMeshComponent* Left_Hand_Mesh, _Script_Engine::SkeletalMeshComponent* Right_Hand_Mesh, bool Third_Person, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetNetworkCharacterAnimBP(_Script_Engine::SkeletalMeshComponent* Root_Player_Mesh, _Script_CoreUObject::Object* __WorldContext, _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C*& Network_Player_ABP, bool& Valid) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::Custom_Set_Mommy_Skin(_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C* Mommy, int32_t Skin, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetFirstPersonGunsAnimBP(_Script_Engine::SkeletalMeshComponent* Root_Player_Mesh, _Script_CoreUObject::Object* __WorldContext, _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_FirstPersonGuns::ABP_FirstPersonGuns_C*& First_Person_Guns_ABP, bool& Valid) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::MakePresetFromNameMap(void* Map, void* Character_Type, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::PresetSlot& Return_Value) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::ApplyCosmeticToPreset(int32_t ID, void* Type, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetCosmeticColorFromArray(int32_t ID, int32_t ColorIndex, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::LinearColor& LinearColor) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::UpdateGenerifiedCosmetic(int32_t Identifier, _Script_Engine::ChildActorComponent* Child_Actor, _Script_CoreUObject::LinearColor Color, bool Use_Default_Class, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::FilterActionWithType(void* Character, int32_t ID, _Script_CoreUObject::Object* __WorldContext, int32_t& OutID) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::Get_Rarity_Name(void* Rarity, _Script_CoreUObject::Object* __WorldContext, void*& Name) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::FilterCosmeticWithType(void* Character, int32_t ID, void* Type, _Script_CoreUObject::Object* __WorldContext, int32_t& OutID) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::FilterItem(void* Character, int32_t ID, _Script_CoreUObject::Object* __WorldContext, int32_t& OutID) {
    return;
}
void* _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetItemName(int32_t Item, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::Sanitize_Preset(void* Character, _Script_Playtime_Multiplayer::PresetSlot Preset, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::PresetSlot& Out) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::Get_Rarity_Background(void* Item, _Script_CoreUObject::Object* __WorldContext, void*& BG) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetTypeNameSanitized(void* Type, _Script_CoreUObject::Object* __WorldContext, void*& Name) {
    return;
}
_Script_Engine::SoundBase* _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetTypeSelectionSound(void* Type, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetCosmeticTypeName(void* Type, _Script_CoreUObject::Object* __WorldContext, void*& Name) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::Custom_Set_Huggy_Skin(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C* Huggy, int32_t Skin, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::Custom_Set_Boxy_Skin(_Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C* Boxy, int32_t Skin, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::UpdatePlayerEmotes(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetBoxySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::BoxySoundSet& Sounds) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetHuggySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::HuggySoundSet& Sounds) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetMommySounds(_Script_Playtime_Multiplayer::CustomizationSaveGame* Item, _Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::MommySoundSet& Sounds) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::NewUpdatePlayerCosmetics(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::PlayerSetPoseComponent(bool Use_Anim_BP, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, _Script_Engine::SkeletalMeshComponent* Mesh, void* Anim_BP, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::ClearMaterialSlots(_Script_Engine::PrimitiveComponent* Skeletal_Mesh, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
_Script_Engine::Texture2D* _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetCosmeticTypeIcon(void* Type, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
_Script_CoreUObject::LinearColor _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetRarityColor(void* Rarity, bool Dark, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
_Script_Playtime_Multiplayer::ShopItem _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetShopItemData(int32_t ID, _Script_CoreUObject::Object* __WorldContext, bool& Valid) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetPlayerCosmeticAnimInstance(_Script_Playtime_Multiplayer::Cosmetic Cosmetic_Item, _Script_CoreUObject::Object* __WorldContext, void*& Anim_Instance, bool& Uses_Anim_BP) {
    return;
}
int32_t _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetRandomItem(_Script_CoreUObject::Object* __WorldContext) {
    return;
}
void* _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetShopItemsByEvent(void* Event_Name, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::Get_Cosmetic_Data_Name(void* Cosmetic, _Script_CoreUObject::Object* __WorldContext, bool& Valid, _Script_Playtime_Multiplayer::Cosmetic& Return_Value) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_CosmeticCoreLibrary::CosmeticCoreLibrary_C::GetItemThumbnail(int32_t Item, _Script_CoreUObject::Object* __WorldContext, void*& Thumbnail) {
    return;
}
