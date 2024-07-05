#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player {
struct BP_MeshContainer_Player_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer {
struct ABP_CustomizationMenuPlayer_C;
}
namespace _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter {
#pragma pack(push, 1)
struct BP_CustomizationMenuCharacter_C : public _Script_Engine::Actor {
    private: char pad_220[0xf0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SkeletalMeshComponent*& get_RightHand();
    _Script_Engine::SkeletalMeshComponent*& get_LeftHand();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_Player();
    _Script_Engine::SkeletalMeshComponent*& get_Mesh();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& get_Player_Mesh_Container();
    void* get_SelectMontages();
    void* get_CurrentPreset();
    void* get_Inventory();
    static _Script_CoreUObject::Class* static_class();
    void PlaySelectEmote(int32_t Emote_ID);
    void SetGrabpackVisibility(bool Visible);
    void SetVisibility(bool Visible);
    void SetType(void* Type);
    void GetAnimationBlueprint(_Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_CustomizationMenuPlayer::ABP_CustomizationMenuPlayer_C*& Return_Value);
    void UpdateCosmeticsFromSave();
    void UpdateCosmeticsFromPreset(_Script_Playtime_Multiplayer::PresetSlot Preset);
    void PlaySelectAnimation(void* Cosmetic_Type);
    void SetSourceComponent();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void SetInventory(void*& Inventory);
    void FailSilently(void* ErrorMessage);
    void ExecuteUbergraph_BP_CustomizationMenuCharacter(int32_t EntryPoint);
}; // Size: 0x310
#pragma pack(pop)
}
