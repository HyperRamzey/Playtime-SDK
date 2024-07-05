#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Monster.hpp"
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_Engine {
struct SpringArmComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Playtime_Multiplayer {
struct UFistRigPackageComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Playtime_Multiplayer {
struct KangarooMovementComponent;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct NetworkKangaroo : public Monster {
    private: char pad_5d0[0x60]; public:
    _Script_Engine::SpringArmComponent*& get_CameraSpringArm();
    _Script_Engine::CameraComponent*& get_CameraComponent();
    _Script_Engine::SpringArmComponent*& get_ExtendoFist();
    _Script_Engine::SpringArmComponent*& get_RightSpringArm();
    _Script_Engine::StaticMeshComponent*& get_SM_RightLauncherGun();
    _Script_Engine::SkeletalMeshComponent*& get_SK_RightFist();
    _Script_Engine::SceneComponent*& get_RightFistSpawn();
    _Script_Playtime_Multiplayer::UFistRigPackageComponent*& get_FistPkg();
    float& get_MaxWireLength();
    void* get_NetworkFistClass();
    _Script_Engine::AnimSequence*& get_FistRetractedAnim();
    float& get_AvailableWireLength();
    static _Script_CoreUObject::Class* static_class();
    void ResetFOV();
    bool ParseInputAction_HandExtend_Pressed();
    void IsFistRetracting(bool& Retracting);
    void IsFistExtended(bool& Extended);
    void IncrementBoxyStat(float Amount, void* Stat);
    void GetSurvivorProximityMultiplier(_Script_Playtime_Multiplayer::ANetworkCharacter* Character, float MaxDistance, float& Multiplier, int32_t& Index);
    void GetFistPosition(_Script_CoreUObject::Vector& Position);
    _Script_Playtime_Multiplayer::KangarooMovementComponent* GetBoxyMovementComponent();
}; // Size: 0x630
#pragma pack(pop)
}
