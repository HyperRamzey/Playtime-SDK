#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Playtime_Multiplayer\Cosmetic.hpp"
#include "..\_Script_Playtime_Multiplayer\CosmeticMeshContainer.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GenericCosmetic {
#pragma pack(push, 1)
struct BP_MeshContainer_GenericCosmetic_C : public _Script_Playtime_Multiplayer::CosmeticMeshContainer {
    private: char pad_220[0x58]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SkeletalMeshComponent*& get_CosmeticMesh();
    _Script_Engine::SkeletalMeshComponent*& get_SourceMesh();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    _Script_Engine::SkeletalMeshComponent*& get_Source_Pose_Component();
    bool get_Uses_Animation_Blueprint();
    void set_Uses_Animation_Blueprint(bool value);
    _Script_Engine::SkeletalMesh*& get_Preview_Cosmetic_Mesh();
    void* get_Preview_Anim_Blueprint();
    _Script_Engine::SkeletalMesh*& get_Source_Mesh();
    void* get_CharacterType();
    void* get_Cosmetic_Type();
    bool get_Auto_Update_Source_Pose();
    void set_Auto_Update_Source_Pose(bool value);
    int32_t& get_Default_Cosmetic();
    bool get_Source_Component_Is_Anim_BP();
    void set_Source_Component_Is_Anim_BP(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ApplyMaterialOverrides(_Script_Engine::SkeletalMeshComponent* Mesh, _Script_Playtime_Multiplayer::Cosmetic Cosmetic);
    void SetAnimationBlueprintOrPoseComponent(void* Animation_Blueprint, _Script_Engine::SkeletalMeshComponent* Skeletal_Mesh_Component);
    void ApplyColorableCosmeticMaterialParams(_Script_Engine::SkeletalMeshComponent* Mesh, _Script_Playtime_Multiplayer::Cosmetic Cosmetic, _Script_CoreUObject::LinearColor Color);
    void SetSkeletalMeshFromReference(_Script_Engine::SkeletalMeshComponent* Skeletal_Mesh_Component, void* Reference);
    void Set_Overriding_Visibility(bool Visible);
    void SetVisibility(bool Visible);
    void Set_Master_Pose_Component(bool Attached, _Script_Engine::SkeletalMeshComponent* Skeletal_Mesh_Component);
    void SetCosmeticFromStruct(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, _Script_CoreUObject::LinearColor Color);
    void SetCosmeticFromID(int32_t Index, _Script_CoreUObject::LinearColor Color);
    void SetDefaultCosmetic();
    void GetCosmeticVerified(int32_t Index, void* Cosmetic_Type, void* Character_Type, _Script_Playtime_Multiplayer::Cosmetic& Cosmetic, bool& Valid);
    void GetMainSkeletalMeshComponent(_Script_Engine::SkeletalMeshComponent*& Return_Value);
    void GetMainSkeletalMeshReference(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, void*& Return_Value);
    void GetAnimationBlueprintClass(_Script_Playtime_Multiplayer::Cosmetic Cosmetic, void*& Return_Value);
    void GetAllSceneComponents(void*& Scene_Components);
    void SetSourceMesh();
    void UserConstructionScript();
    void Update_Source_Pose();
    void Manually_Set_Source_Pose(_Script_Engine::SkeletalMeshComponent* Skeletal_Mesh_Component);
    void ExecuteUbergraph_BP_MeshContainer_GenericCosmetic(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
