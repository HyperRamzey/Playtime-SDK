#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Character.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_NinjaCharacter {
#pragma pack(push, 1)
struct NinjaCharacter : public _Script_Engine::Character {
    private: char pad_4c0[0x60]; public:
    bool get_bCapsuleRotatesControlRotation();
    void set_bCapsuleRotatesControlRotation(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SmoothComponentRotation(_Script_Engine::SceneComponent* SceneComponent, float DeltaTime, float RotationSpeed, _Script_CoreUObject::Rotator& RelativeRotation);
    void SmoothComponentLocationAndRotation(_Script_Engine::SceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, float RotationSpeed, _Script_CoreUObject::Vector& RelativeLocation, _Script_CoreUObject::Rotator& RelativeRotation);
    void SmoothComponentLocation(_Script_Engine::SceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, _Script_CoreUObject::Vector& RelativeLocation);
    bool SetCharMovementAxis(_Script_CoreUObject::Vector& NewAxisZ, bool bForceFindFloor);
    void LaunchCharacterRotated(_Script_CoreUObject::Vector LaunchVelocity, bool bHorizontalOverride, bool bVerticalOverride);
    void K2_OnUnwalkableHit(_Script_Engine::HitResult& Hit);
    void K2_OnGravityDirectionChanged(void* OldGravityDirectionMode, void* CurrentGravityDirectionMode);
    void K2_OnCharMovementAxisChanged(_Script_CoreUObject::Vector& OldAxisZ, _Script_CoreUObject::Vector& CurrentAxisZ);
}; // Size: 0x520
#pragma pack(pop)
}
