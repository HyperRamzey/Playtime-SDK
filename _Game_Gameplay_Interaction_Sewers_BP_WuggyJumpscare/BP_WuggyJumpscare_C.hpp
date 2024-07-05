#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera {
struct BP_AbstractJumpscare_Camera_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WuggyJumpscare {
#pragma pack(push, 1)
struct BP_WuggyJumpscare_C : public _Script_Engine::Actor {
    private: char pad_220[0xc8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_Wuggy_Jump_Origin();
    _Script_Engine::SkeletalMeshComponent*& get_Wuggy();
    _Script_Engine::SceneComponent*& get_Scene();
    float& get_Jump_To_Player_Player_Look_Alpha_E2EC20B742F7C7F9063ED09E98134930();
    float& get_Jump_To_Player_Huggy_Z_Increase_E2EC20B742F7C7F9063ED09E98134930();
    float& get_Jump_To_Player_Huggy_Jump_Alpha_E2EC20B742F7C7F9063ED09E98134930();
    void* get_Jump_To_Player__Direction_E2EC20B742F7C7F9063ED09E98134930();
    _Script_Engine::TimelineComponent*& get_Jump_To_Player();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_PlayerToKill();
    void* get_ShouldKillPlayer();
    void* get_Huggy_Origin();
    void* get_Player_Jumpscare_End_Rotation();
    void* get_Jumpscare_Camera_Location();
    void* get_Huggy_Jumpscare_End_Point();
    void* get_Huggy_Origin_Rotator();
    void* get_Huggy_Jumpscare_End_Rotator();
    void* get_Player_Origin_Rotator();
    _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C*& get_Jumpscare_Camera();
    bool get_Jumpscare();
    void set_Jumpscare(bool value);
    _Script_Engine::SkeletalMesh*& get_Wuggy_Skeletal_Mesh();
    _Script_Engine::SkeletalMeshComponent*& get_Wuggy_Actor();
    static _Script_CoreUObject::Class* static_class();
    void Jump_To_Player__FinishedFunc();
    void Jump_To_Player__UpdateFunc();
    void ReceiveDestroyed0();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_WuggyJumpscare(int32_t EntryPoint);
    void ShouldKillPlayer__DelegateSignature();
}; // Size: 0x2e8
#pragma pack(pop)
}
