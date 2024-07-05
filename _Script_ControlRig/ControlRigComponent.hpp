#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_ControlRig {
struct ControlRig;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_450[0xe0]; public:
    void* get_ControlRigClass();
    void* get_OnPostInitializeDelegate();
    void* get_OnPreSetupDelegate();
    void* get_OnPostSetupDelegate();
    void* get_OnPreUpdateDelegate();
    void* get_OnPostUpdateDelegate();
    void* get_MappedElements();
    bool get_bResetTransformBeforeTick();
    void set_bResetTransformBeforeTick(bool value);
    bool get_bResetInitialsBeforeSetup();
    void set_bResetInitialsBeforeSetup(bool value);
    bool get_bUpdateRigOnTick();
    void set_bUpdateRigOnTick(bool value);
    bool get_bUpdateInEditor();
    void set_bUpdateInEditor(bool value);
    bool get_bDrawBones();
    void set_bDrawBones(bool value);
    bool get_bShowDebugDrawing();
    void set_bShowDebugDrawing(bool value);
    _Script_ControlRig::ControlRig*& get_ControlRig();
    static _Script_CoreUObject::Class* static_class();
    void Update(float DeltaTime);
    void SetMappedElements(void* NewMappedElements);
    void SetInitialSpaceTransform(void* SpaceName, _Script_CoreUObject::Transform InitialTransform, void* Space);
    void SetInitialBoneTransform(void* BoneName, _Script_CoreUObject::Transform InitialTransform, void* Space, bool bPropagateToChildren);
    void SetControlVector2D(void* ControlName, _Script_CoreUObject::Vector2D Value);
    void SetControlTransform(void* ControlName, _Script_CoreUObject::Transform Value, void* Space);
    void SetControlScale(void* ControlName, _Script_CoreUObject::Vector Value, void* Space);
    void SetControlRotator(void* ControlName, _Script_CoreUObject::Rotator Value, void* Space);
    void SetControlPosition(void* ControlName, _Script_CoreUObject::Vector Value, void* Space);
    void SetControlOffset(void* ControlName, _Script_CoreUObject::Transform OffsetTransform, void* Space);
    void SetControlInt(void* ControlName, int32_t Value);
    void SetControlFloat(void* ControlName, float Value);
    void SetControlBool(void* ControlName, bool Value);
    void SetBoneTransform(void* BoneName, _Script_CoreUObject::Transform Transform, void* Space, float Weight, bool bPropagateToChildren);
    void SetBoneInitialTransformsFromSkeletalMesh(_Script_Engine::SkeletalMesh* InSkeletalMesh);
    void OnPreUpdate(_Script_ControlRig::ControlRigComponent* Component);
    void OnPreSetup(_Script_ControlRig::ControlRigComponent* Component);
    void OnPostUpdate(_Script_ControlRig::ControlRigComponent* Component);
    void OnPostSetup(_Script_ControlRig::ControlRigComponent* Component);
    void OnPostInitialize(_Script_ControlRig::ControlRigComponent* Component);
    void Initialize();
    _Script_CoreUObject::Transform GetSpaceTransform(void* SpaceName, void* Space);
    _Script_CoreUObject::Transform GetInitialSpaceTransform(void* SpaceName, void* Space);
    _Script_CoreUObject::Transform GetInitialBoneTransform(void* BoneName, void* Space);
    void* GetElementNames(void* ElementType);
    _Script_CoreUObject::Vector2D GetControlVector2D(void* ControlName);
    _Script_CoreUObject::Transform GetControlTransform(void* ControlName, void* Space);
    _Script_CoreUObject::Vector GetControlScale(void* ControlName, void* Space);
    _Script_CoreUObject::Rotator GetControlRotator(void* ControlName, void* Space);
    _Script_ControlRig::ControlRig* GetControlRig();
    _Script_CoreUObject::Vector GetControlPosition(void* ControlName, void* Space);
    _Script_CoreUObject::Transform GetControlOffset(void* ControlName, void* Space);
    int32_t GetControlInt(void* ControlName);
    float GetControlFloat(void* ControlName);
    bool GetControlBool(void* ControlName);
    _Script_CoreUObject::Transform GetBoneTransform(void* BoneName, void* Space);
    float GetAbsoluteTime();
    bool DoesElementExist(void* Name, void* ElementType);
    void ClearMappedElements();
    void AddMappedSkeletalMesh(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent, void* Bones, void* Curves);
    void AddMappedElements(void* NewMappedElements);
    void AddMappedComponents(void* Components);
    void AddMappedCompleteSkeletalMesh(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent);
}; // Size: 0x530
#pragma pack(pop)
}
