#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_Engine {
struct SpringArmComponent;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera {
#pragma pack(push, 1)
struct BP_AbstractJumpscare_Camera_C : public _Script_Engine::Actor {
    private: char pad_220[0x70]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    _Script_Engine::SpringArmComponent*& get_SpringArm();
    _Script_Engine::CameraComponent*& get_Camera1();
    _Script_Engine::SkeletalMeshComponent*& get_Camera_End();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::SkeletalMeshComponent*& get_Camera_Rig();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_Played_Animation();
    _Script_Engine::Pawn*& get_Target_Pawn();
    _Script_Engine::AnimSequence*& get_Anim_To_Play();
    void* get_Final_Camera_Animation();
    bool get_Show_Light();
    void set_Show_Light(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnCreated();
    void Play_Animation();
    void ExecuteUbergraph_BP_AbstractJumpscare_Camera(int32_t EntryPoint);
    void Played_Animation__DelegateSignature();
}; // Size: 0x290
#pragma pack(pop)
}
