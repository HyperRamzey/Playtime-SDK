#include "..\FUObjectArray.hpp"
#include "ClothingInteractor.hpp"
#include "ClothingSimulationInteractor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
int32_t _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::GetNumSubsteps() {
    return;
}
void* _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::get_ClothingInteractors() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
    return result;
}
void _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::SetNumSubsteps(int32_t NumSubsteps) {
    return;
}
float _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::GetSimulationTime() {
    return;
}
void _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::SetNumIterations(int32_t NumIterations) {
    return;
}
void _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness) {
    return;
}
void _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::PhysicsAssetUpdated() {
    return;
}
int32_t _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::GetNumKinematicParticles() {
    return;
}
int32_t _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::GetNumIterations() {
    return;
}
int32_t _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::GetNumDynamicParticles() {
    return;
}
int32_t _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::GetNumCloths() {
    return;
}
_Script_ClothingSystemRuntimeInterface::ClothingInteractor* _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::GetClothingInteractor(void* ClothingAssetName) {
    return;
}
void _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::EnableGravityOverride(_Script_CoreUObject::Vector& InVector) {
    return;
}
void _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::DisableGravityOverride() {
    return;
}
void _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor::ClothConfigUpdated() {
    return;
}
