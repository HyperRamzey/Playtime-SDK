#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "Cosmetic.hpp"
void _Script_Playtime_Multiplayer::Cosmetic::set_bIsPreReleaseOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_Rarity() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Playtime_Multiplayer::Cosmetic::get_bIsPublic() {
    return (*(uint8_t*)((uintptr_t)this + 0x23 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::Cosmetic::set_bDoesHatSupportMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_CosmeticType() {
    return (void*)((uintptr_t)this + 0x21);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_MaterialOverrides() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x22);
}
bool _Script_Playtime_Multiplayer::Cosmetic::get_bIsPreReleaseOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::Cosmetic::set_bIsPublic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23 + 0);
    *(uint8_t*)((uintptr_t)this + 0x23 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_MeshContainerClass() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Playtime_Multiplayer::Cosmetic::get_bUseDefaultSkinElements() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::Cosmetic::get_bIsColorable() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::Cosmetic::set_bIsColorable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_ColorArray() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Playtime_Multiplayer::Cosmetic::get_ColorableLayer() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_Mesh() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_AlternateMesh() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_LowMesh() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_HighMesh() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_StaticMesh() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_AnimationBlueprint() {
    return (void*)((uintptr_t)this + 0x118);
}
bool _Script_Playtime_Multiplayer::Cosmetic::get_bDoesHatSupportMask() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_OutfitSkinType() {
    return (void*)((uintptr_t)this + 0x121);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_SkinMeshes() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_HandShootSound() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_HandRetractSound() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_Playtime_Multiplayer::Cosmetic::get_BigThumbnail() {
    return (void*)((uintptr_t)this + 0x218);
}
void _Script_Playtime_Multiplayer::Cosmetic::set_bUseDefaultSkinElements(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Cosmetic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.Cosmetic");
    return result;
}
