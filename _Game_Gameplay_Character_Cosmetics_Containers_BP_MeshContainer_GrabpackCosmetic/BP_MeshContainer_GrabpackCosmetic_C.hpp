#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic\BP_MeshContainer_PlayerCosmetic_C.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic {
struct BP_MeshContainer_HandCosmetic_C;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct PlaytimeCharacter;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic {
#pragma pack(push, 1)
struct BP_MeshContainer_GrabpackCosmetic_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_PlayerCosmetic::BP_MeshContainer_PlayerCosmetic_C {
    private: char pad_298[0x58]; public:
    _Script_Engine::SceneComponent*& get_LeftHandAttachFP();
    _Script_Engine::SceneComponent*& get_RightHandAttachFP();
    _Script_Engine::ChildActorComponent*& get_RightHand();
    _Script_Engine::ChildActorComponent*& get_LeftHand();
    _Script_Engine::BillboardComponent*& get_Billboard1();
    _Script_Engine::BillboardComponent*& get_Billboard();
    _Script_Engine::SceneComponent*& get_RightHandAttach();
    _Script_Engine::SceneComponent*& get_LeftHandAttach();
    _Script_Engine::SkeletalMeshComponent*& get_LeftHandSourceComponent();
    _Script_Engine::SkeletalMeshComponent*& get_RightHandSourceComponent();
    bool get_First_Person();
    void set_First_Person(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetHandVisibility(bool Left, bool Visible);
    void SetHandSourceComponent(_Script_Engine::SkeletalMeshComponent* Source, bool Left);
    void Set_Overriding_Visibility(bool Visible);
    void SetVisibility(bool Visible);
    void UpdateHandCosmetics(_Script_Playtime_Multiplayer::PresetSlot Preset);
    void SetPlaytimeCharacter(_Script_Playtime_Multiplayer::PlaytimeCharacter* Playtime_Character);
    void GetHand(bool Left, _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C*& Return_Value, bool& Valid);
    void UserConstructionScript();
}; // Size: 0x2f0
#pragma pack(pop)
}
