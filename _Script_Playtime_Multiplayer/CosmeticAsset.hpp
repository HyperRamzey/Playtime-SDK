#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ItemAsset.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct CosmeticAsset : public ItemAsset {
    private: char pad_38[0x190]; public:
    void* get_CosmeticType();
    void* get_CharacterType();
    void* get_MeshContainerClass();
    bool get_bIsColorable();
    void set_bIsColorable(bool value);
    void* get_Colors();
    int32_t& get_ColorableLayer();
    void* get_SkeletalMeshes();
    _Script_Engine::StaticMesh*& get_StaticMesh();
    void* get_AnimationBlueprint();
    bool get_bDoesHatSupportMask();
    void set_bDoesHatSupportMask(bool value);
    void* get_OutfitSkinType();
    void* get_SkinMeshes();
    void* get_MaterialOverrides();
    void* get_Sounds();
    bool get_bUseDefaultSkinElements();
    void set_bUseDefaultSkinElements(bool value);
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::SkeletalMesh* GetMesh(bool& Valid);
    _Script_Engine::SkeletalMesh* GetLowMesh(bool& Valid);
    _Script_Engine::SkeletalMesh* GetHighMesh(bool& Valid);
    _Script_Engine::SoundBase* GetHandShootSound(bool& Valid);
    _Script_Engine::SoundBase* GetHandRetractSound(bool& Valid);
    _Script_Engine::SkeletalMesh* GetAlternateMesh(bool& Valid);
}; // Size: 0x1c8
#pragma pack(pop)
}
