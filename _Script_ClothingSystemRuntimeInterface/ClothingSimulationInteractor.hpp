#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeInterface {
struct ClothingInteractor;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_ClothingSystemRuntimeInterface {
#pragma pack(push, 1)
struct ClothingSimulationInteractor : public _Script_CoreUObject::Object {
    private: char pad_28[0x68]; public:
    void* get_ClothingInteractors();
    static _Script_CoreUObject::Class* static_class();
    void SetNumSubsteps(int32_t NumSubsteps);
    void SetNumIterations(int32_t NumIterations);
    void SetAnimDriveSpringStiffness(float InStiffness);
    void PhysicsAssetUpdated();
    float GetSimulationTime();
    int32_t GetNumSubsteps();
    int32_t GetNumKinematicParticles();
    int32_t GetNumIterations();
    int32_t GetNumDynamicParticles();
    int32_t GetNumCloths();
    _Script_ClothingSystemRuntimeInterface::ClothingInteractor* GetClothingInteractor(void* ClothingAssetName);
    void EnableGravityOverride(_Script_CoreUObject::Vector& InVector);
    void DisableGravityOverride();
    void ClothConfigUpdated();
}; // Size: 0x90
#pragma pack(pop)
}
