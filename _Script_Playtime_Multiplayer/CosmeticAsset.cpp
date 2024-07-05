#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "CosmeticAsset.hpp"
#include "ItemAsset.hpp"
void* _Script_Playtime_Multiplayer::CosmeticAsset::get_CosmeticType() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Playtime_Multiplayer::CosmeticAsset::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x39);
}
int32_t& _Script_Playtime_Multiplayer::CosmeticAsset::get_ColorableLayer() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
bool _Script_Playtime_Multiplayer::CosmeticAsset::get_bIsColorable() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::CosmeticAsset::get_Sounds() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_Playtime_Multiplayer::CosmeticAsset::get_MeshContainerClass() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Playtime_Multiplayer::CosmeticAsset::get_Colors() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Playtime_Multiplayer::CosmeticAsset::get_bDoesHatSupportMask() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::CosmeticAsset::set_bIsColorable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::CosmeticAsset::get_SkeletalMeshes() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_Engine::StaticMesh*& _Script_Playtime_Multiplayer::CosmeticAsset::get_StaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0xb8);
}
void* _Script_Playtime_Multiplayer::CosmeticAsset::get_AnimationBlueprint() {
    return (void*)((uintptr_t)this + 0xc0);
}
void _Script_Playtime_Multiplayer::CosmeticAsset::set_bDoesHatSupportMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::CosmeticAsset::get_OutfitSkinType() {
    return (void*)((uintptr_t)this + 0xc9);
}
void* _Script_Playtime_Multiplayer::CosmeticAsset::get_SkinMeshes() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Playtime_Multiplayer::CosmeticAsset::get_MaterialOverrides() {
    return (void*)((uintptr_t)this + 0x120);
}
bool _Script_Playtime_Multiplayer::CosmeticAsset::get_bUseDefaultSkinElements() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c0 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::CosmeticAsset::set_bUseDefaultSkinElements(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::CosmeticAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.CosmeticAsset");
    return result;
}
_Script_Engine::SkeletalMesh* _Script_Playtime_Multiplayer::CosmeticAsset::GetMesh(bool& Valid) {
    return;
}
_Script_Engine::SkeletalMesh* _Script_Playtime_Multiplayer::CosmeticAsset::GetLowMesh(bool& Valid) {
    return;
}
_Script_Engine::SkeletalMesh* _Script_Playtime_Multiplayer::CosmeticAsset::GetHighMesh(bool& Valid) {
    return;
}
_Script_Engine::SoundBase* _Script_Playtime_Multiplayer::CosmeticAsset::GetHandShootSound(bool& Valid) {
    return;
}
_Script_Engine::SoundBase* _Script_Playtime_Multiplayer::CosmeticAsset::GetHandRetractSound(bool& Valid) {
    return;
}
_Script_Engine::SkeletalMesh* _Script_Playtime_Multiplayer::CosmeticAsset::GetAlternateMesh(bool& Valid) {
    return;
}
