#include "..\FUObjectArray.hpp"
#include "ChaosClothingInteractor.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingInteractor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
void _Script_ChaosCloth::ChaosClothingInteractor::SetGravity(float GravityScale, bool bIsGravityOverridden, _Script_CoreUObject::Vector GravityOverride) {
    return;
}
void _Script_ChaosCloth::ChaosClothingInteractor::SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness) {
    return;
}
void _Script_ChaosCloth::ChaosClothingInteractor::SetVelocityScale(_Script_CoreUObject::Vector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale) {
    return;
}
_Script_CoreUObject::Class* _Script_ChaosCloth::ChaosClothingInteractor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosCloth.ChaosClothingInteractor");
    return result;
}
void _Script_ChaosCloth::ChaosClothingInteractor::SetLongRangeAttachmentLinear(float TetherStiffness) {
    return;
}
void _Script_ChaosCloth::ChaosClothingInteractor::SetDamping(float DampingCoefficient) {
    return;
}
void _Script_ChaosCloth::ChaosClothingInteractor::SetLongRangeAttachment(_Script_CoreUObject::Vector2D TetherStiffness) {
    return;
}
void _Script_ChaosCloth::ChaosClothingInteractor::SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness) {
    return;
}
void _Script_ChaosCloth::ChaosClothingInteractor::SetAnimDriveLinear(float AnimDriveStiffness) {
    return;
}
void _Script_ChaosCloth::ChaosClothingInteractor::SetAnimDrive(_Script_CoreUObject::Vector2D AnimDriveStiffness, _Script_CoreUObject::Vector2D AnimDriveDamping) {
    return;
}
void _Script_ChaosCloth::ChaosClothingInteractor::SetAerodynamics(float DragCoefficient, float LiftCoefficient, _Script_CoreUObject::Vector WindVelocity) {
    return;
}
void _Script_ChaosCloth::ChaosClothingInteractor::ResetAndTeleport(bool bReset, bool bTeleport) {
    return;
}
