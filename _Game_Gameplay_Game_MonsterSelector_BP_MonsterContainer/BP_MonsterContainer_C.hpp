#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_CinematicCamera {
struct CineCameraComponent;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Playtime_Multiplayer {
struct CustomizationSaveGame;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Game_MonsterSelector_BP_MonsterContainer {
#pragma pack(push, 1)
struct BP_MonsterContainer_C : public _Script_Engine::Actor {
    private: char pad_220[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_MommySkin();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_HuggySkin();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_BoxySkin();
    _Script_CinematicCamera::CineCameraComponent*& get_CineCamera();
    _Script_Engine::SceneComponent*& get_CameraMover();
    _Script_Engine::SkeletalMeshComponent*& get_MommyCosmetic();
    _Script_Engine::SkeletalMeshComponent*& get_BoxyCosmetic();
    _Script_Engine::SkeletalMeshComponent*& get_HuggyCosmetic();
    _Script_Engine::SkeletalMeshComponent*& get_Mommy();
    _Script_Engine::SkeletalMeshComponent*& get_Huggy();
    _Script_Engine::SkeletalMeshComponent*& get_Boxy();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_CameraTranslationTimeline_ReverseMovement_3343ADEF48ACC1FD792B8D93E702994B();
    float& get_CameraTranslationTimeline_Movement_3343ADEF48ACC1FD792B8D93E702994B();
    void* get_CameraTranslationTimeline__Direction_3343ADEF48ACC1FD792B8D93E702994B();
    _Script_Engine::TimelineComponent*& get_CameraTranslationTimeline();
    void* get_Character();
    void* get_Timer();
    _Script_Engine::PlayerController*& get_CharPicking();
    bool get_Invert_Cam_Movement();
    void set_Invert_Cam_Movement(bool value);
    _Script_Playtime_Multiplayer::CustomizationSaveGame*& get_Save_Game();
    static _Script_CoreUObject::Class* static_class();
    void GetMonsterIndex(void* Character, int32_t& Index);
    void CameraTranslationTimeline__FinishedFunc();
    void CameraTranslationTimeline__UpdateFunc();
    void Owning_Capture(_Script_Engine::PlayerController* Controller);
    void Server_Capture(_Script_Engine::PlayerController* CharPicking);
    void StartAnimation();
    void Main_Menu_View_Target();
    void RefreshVisuals(bool Delay);
    void SetCharacter(void* CharacterType);
    void ExecuteUbergraph_BP_MonsterContainer(int32_t EntryPoint);
}; // Size: 0x2c8
#pragma pack(pop)
}
