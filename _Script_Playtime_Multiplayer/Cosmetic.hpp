#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct Cosmetic : public _Script_Engine::TableRowBase {
    private: char pad_8[0x240]; public:
    void* get_Name();
    void* get_Rarity();
    void* get_CosmeticType();
    void* get_CharacterType();
    bool get_bIsPublic();
    void set_bIsPublic(bool value);
    bool get_bIsPreReleaseOnly();
    void set_bIsPreReleaseOnly(bool value);
    void* get_MeshContainerClass();
    bool get_bIsColorable();
    void set_bIsColorable(bool value);
    void* get_ColorArray();
    int32_t& get_ColorableLayer();
    void* get_Mesh();
    void* get_AlternateMesh();
    void* get_HighMesh();
    void* get_LowMesh();
    void* get_StaticMesh();
    void* get_AnimationBlueprint();
    bool get_bDoesHatSupportMask();
    void set_bDoesHatSupportMask(bool value);
    void* get_OutfitSkinType();
    void* get_SkinMeshes();
    void* get_MaterialOverrides();
    void* get_HandShootSound();
    void* get_HandRetractSound();
    void* get_BigThumbnail();
    bool get_bUseDefaultSkinElements();
    void set_bUseDefaultSkinElements(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x248
#pragma pack(pop)
}
