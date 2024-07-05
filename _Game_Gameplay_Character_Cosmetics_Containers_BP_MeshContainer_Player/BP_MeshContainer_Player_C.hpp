#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player {
#pragma pack(push, 1)
struct BP_MeshContainer_Player_C : public _Script_Engine::Actor {
    private: char pad_220[0x58]; public:
    _Script_Engine::ChildActorComponent*& get_OutfitGrabpack();
    _Script_Engine::ChildActorComponent*& get_OutfitMask();
    _Script_Engine::ChildActorComponent*& get_OutfitShoes();
    _Script_Engine::ChildActorComponent*& get_OutfitHat();
    _Script_Engine::ChildActorComponent*& get_OutfitPants();
    _Script_Engine::ChildActorComponent*& get_OutfitShirt();
    _Script_Engine::SkeletalMeshComponent*& get_PlayerSourceMesh();
    _Script_Engine::SkeletalMesh*& get_Source_Mesh();
    _Script_Engine::SkeletalMeshComponent*& get_LeftHandSourceComponent();
    _Script_Engine::SkeletalMeshComponent*& get_RightHandSourceComponent();
    _Script_Engine::SkeletalMeshComponent*& get_PlayerSourceComponent();
    static _Script_CoreUObject::Class* static_class();
    void SetIndividualCosmeticVisibility(void* Cosmetic_Type, bool Visible);
    void ResetCosmetics();
    void ResetIndividualCosmeticVisibility();
    void SetHandSourceComponent(_Script_Engine::SkeletalMeshComponent* Source, bool Left);
    void SetPlayerSourceComponent(_Script_Engine::SkeletalMeshComponent* Source);
    void SetNetworkCharacterOnContainers();
    void SetHandVisibility(bool Left, bool Visible);
    void SetVisibility(bool Visible);
    void SetOverridingVisbility(bool Visible);
    void UpdateCosmeticsFromPreset(_Script_Playtime_Multiplayer::PresetSlot Preset);
    void GetAllMeshContainers(void*& Return_Value);
    void UserConstructionScript0();
}; // Size: 0x278
#pragma pack(pop)
}
