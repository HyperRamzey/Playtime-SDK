#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingInteractor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosCloth {
#pragma pack(push, 1)
struct ChaosClothingInteractor : public _Script_ClothingSystemRuntimeInterface::ClothingInteractor {
    private: char pad_30[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetVelocityScale(_Script_CoreUObject::Vector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
    void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
    void SetLongRangeAttachmentLinear(float TetherStiffness);
    void SetLongRangeAttachment(_Script_CoreUObject::Vector2D TetherStiffness);
    void SetGravity(float GravityScale, bool bIsGravityOverridden, _Script_CoreUObject::Vector GravityOverride);
    void SetDamping(float DampingCoefficient);
    void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
    void SetAnimDriveLinear(float AnimDriveStiffness);
    void SetAnimDrive(_Script_CoreUObject::Vector2D AnimDriveStiffness, _Script_CoreUObject::Vector2D AnimDriveDamping);
    void SetAerodynamics(float DragCoefficient, float LiftCoefficient, _Script_CoreUObject::Vector WindVelocity);
    void ResetAndTeleport(bool bReset, bool bTeleport);
}; // Size: 0x40
#pragma pack(pop)
}
