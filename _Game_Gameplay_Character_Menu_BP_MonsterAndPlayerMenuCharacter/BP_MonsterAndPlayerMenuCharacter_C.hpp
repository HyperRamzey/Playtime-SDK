#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter {
struct BP_CustomizationMenuCharacter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter {
#pragma pack(push, 1)
struct BP_MonsterAndPlayerMenuCharacter_C : public _Script_Engine::Actor {
    private: char pad_220[0x78]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BillboardComponent*& get_Loading_Screen_Billboard();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_HandCosmetic();
    _Script_Engine::SkeletalMeshComponent*& get_HandMesh();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_BoxySkin();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_MommySkin();
    _Script_Engine::SkeletalMeshComponent*& get_BoxyMesh();
    _Script_Engine::SkeletalMeshComponent*& get_MommyMesh();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_HuggySkin();
    _Script_Engine::SkeletalMeshComponent*& get_HuggyMesh();
    _Script_Engine::ChildActorComponent*& get_BP_CustomizationMenuCharacter();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& get_PlayerMenuCharacter();
    void* get_StartingRotation();
    static _Script_CoreUObject::Class* static_class();
    void SetLoadingScreenVisibility(bool Visible);
    void SetLoadingScreen(int32_t ID);
    void SetMainCharactersVisibility(bool Visible);
    void SetPlayerGrabpackVisibility(bool Visible);
    void SetHandCosmetic(int32_t ID);
    void SetHandVisibility(bool Visible);
    void ResetRotation();
    void PlayAction(int32_t ID, void* Character_Type);
    void ResetCharacterAnimations();
    void SetPlayerCosmeticCategory(void* Cosmetic_Type);
    void PlayUpdateAnimation(void* Cosmetic_Type);
    void SetVisibleCharacter(void* Character_Type);
    void SetCharacter(void* Character_Type, _Script_Playtime_Multiplayer::PresetSlot Preset);
    void RotateLeft();
    void ReceiveBeginPlay0();
    void RotateRight();
    void ExecuteUbergraph_BP_MonsterAndPlayerMenuCharacter(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
