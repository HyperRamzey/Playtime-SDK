#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Playtime_Multiplayer {
struct Monster;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer {
#pragma pack(push, 1)
struct BP_PlayerPOVJumpscareContainer_C : public _Script_Engine::Actor {
    private: char pad_220[0x1b8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    _Script_Engine::CameraComponent*& get_JumpscareCamera();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_SimpleMonsterSkin();
    _Script_Engine::SkeletalMeshComponent*& get_CameraSkeleton();
    _Script_Engine::SkeletalMeshComponent*& get_CharacterSkeleton();
    _Script_Engine::SceneComponent*& get_CharacterScaler();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_CameraAnimations();
    void* get_JumpscareAnimations();
    void* get_CharacterSkeletalMeshes();
    void* get_CharacterScales();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Target_Player();
    void* get_Character_Type();
    void* get_Character_Position();
    void* get_Target_Position();
    _Script_Playtime_Multiplayer::Monster*& get_Monster_Actor();
    void* get_Anim_Timer_Handle();
    static _Script_CoreUObject::Class* static_class();
    void Begin_Jumpscare(void* Character_Type, _Script_CoreUObject::Vector Monster_Position);
    void Trigger_Jumpscare(void* Character_Type, _Script_Playtime_Multiplayer::Monster* Monster_Actor);
    void ReturnControl();
    void ReceiveDestroyed0();
    void ExecuteUbergraph_BP_PlayerPOVJumpscareContainer(int32_t EntryPoint);
}; // Size: 0x3d8
#pragma pack(pop)
}
