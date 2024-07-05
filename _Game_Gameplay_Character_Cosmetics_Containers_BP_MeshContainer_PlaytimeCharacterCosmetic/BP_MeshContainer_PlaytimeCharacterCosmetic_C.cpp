#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic\BP_MeshContainer_GenericCosmetic_C.hpp"
#include "BP_MeshContainer_PlaytimeCharacterCosmetic_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimeCharacter.hpp"
void* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_Playtime_Multiplayer::PlaytimeCharacter*& _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::get_Playtime_Character() {
    return *(_Script_Playtime_Multiplayer::PlaytimeCharacter**)((uintptr_t)this + 0x280);
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::set_Set_Character_On_Construct(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x289 + 0);
    *(uint8_t*)((uintptr_t)this + 0x289 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::set_Present_On_Playtime_Character(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x288 + 0);
    *(uint8_t*)((uintptr_t)this + 0x288 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::get_Present_On_Playtime_Character() {
    return (*(uint8_t*)((uintptr_t)this + 0x288 + 0)) & 1 != 0;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::GetPlaytimeCharacter(_Script_Playtime_Multiplayer::PlaytimeCharacter*& Playtime_Character, bool& Valid) {
    return;
}
bool _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::get_Set_Character_On_Construct() {
    return (*(uint8_t*)((uintptr_t)this + 0x289 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Cosmetics/Containers/BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C");
    return result;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::SetPlaytimeCharacter(_Script_Playtime_Multiplayer::PlaytimeCharacter* Playtime_Character) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::UserConstructionScript0() {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::Playtime_Character_Tick(_Script_Playtime_Multiplayer::PlaytimeCharacter* Playtime_Character) {
    return;
}
void _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlaytimeCharacterCosmetic::BP_MeshContainer_PlaytimeCharacterCosmetic_C::ExecuteUbergraph_BP_MeshContainer_PlaytimeCharacterCosmetic(int32_t EntryPoint) {
    return;
}
