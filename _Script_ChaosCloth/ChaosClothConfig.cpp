#include "..\FUObjectArray.hpp"
#include "ChaosClothConfig.hpp"
#include "..\_Script_ClothingSystemRuntimeCommon\ClothConfigCommon.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ChaosCloth::ChaosClothConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosCloth.ChaosClothConfig");
    return result;
}
void* _Script_ChaosCloth::ChaosClothConfig::get_MassMode() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseBendingElements() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
float& _Script_ChaosCloth::ChaosClothConfig::get_TotalMass() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_UniformMass() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_Density() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_MinPerParticleMass() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_EdgeStiffness() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_BendingStiffness() {
    return *(float*)((uintptr_t)this + 0x40);
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseBendingElements(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseGeodesicDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_AreaStiffness() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_VolumeStiffness() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_ChaosCloth::ChaosClothConfig::get_TetherStiffness() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_DragCoefficient() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_LimitScale() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_ChaosCloth::ChaosClothConfig::get_AnimDriveDamping() {
    return (void*)((uintptr_t)this + 0xa4);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseGeodesicDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
float& _Script_ChaosCloth::ChaosClothConfig::get_ShapeTargetStiffness() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_CollisionThickness() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_FictitiousAngularScale() {
    return *(float*)((uintptr_t)this + 0xbc);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_FrictionCoefficient() {
    return *(float*)((uintptr_t)this + 0x68);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseCCD() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 1 != 0;
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseGravityOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseCCD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseSelfCollisions() {
    return (*(uint8_t*)((uintptr_t)this + 0x6d + 0)) & 1 != 0;
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseTetrahedralConstraints() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseSelfCollisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_SelfCollisionThickness() {
    return *(float*)((uintptr_t)this + 0x70);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseLegacyBackstop() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseLegacyBackstop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_DampingCoefficient() {
    return *(float*)((uintptr_t)this + 0x78);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUsePointBasedWindModel() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUsePointBasedWindModel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_LiftCoefficient() {
    return *(float*)((uintptr_t)this + 0x84);
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseGravityOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0x8c);
}
void* _Script_ChaosCloth::ChaosClothConfig::get_Gravity() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_ChaosCloth::ChaosClothConfig::get_AnimDriveStiffness() {
    return (void*)((uintptr_t)this + 0x9c);
}
void* _Script_ChaosCloth::ChaosClothConfig::get_LinearVelocityScale() {
    return (void*)((uintptr_t)this + 0xac);
}
float& _Script_ChaosCloth::ChaosClothConfig::get_AngularVelocityScale() {
    return *(float*)((uintptr_t)this + 0xb8);
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseTetrahedralConstraints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseThinShellVolumeConstraints() {
    return (*(uint8_t*)((uintptr_t)this + 0xc1 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseThinShellVolumeConstraints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosCloth::ChaosClothConfig::get_bUseContinuousCollisionDetection() {
    return (*(uint8_t*)((uintptr_t)this + 0xc2 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothConfig::set_bUseContinuousCollisionDetection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
