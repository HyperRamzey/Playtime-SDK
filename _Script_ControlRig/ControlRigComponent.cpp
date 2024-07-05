#include "..\FUObjectArray.hpp"
#include "ControlRig.hpp"
#include "ControlRigComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void _Script_ControlRig::ControlRigComponent::ClearMappedElements() {
    return;
}
bool _Script_ControlRig::ControlRigComponent::get_bResetTransformBeforeTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b8 + 0)) & 1 != 0;
}
float _Script_ControlRig::ControlRigComponent::GetControlFloat(void* ControlName) {
    return;
}
void* _Script_ControlRig::ControlRigComponent::get_ControlRigClass() {
    return (void*)((uintptr_t)this + 0x450);
}
_Script_CoreUObject::Transform _Script_ControlRig::ControlRigComponent::GetControlTransform(void* ControlName, void* Space) {
    return;
}
bool _Script_ControlRig::ControlRigComponent::get_bResetInitialsBeforeSetup() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b9 + 0)) & 1 != 0;
}
void* _Script_ControlRig::ControlRigComponent::get_OnPostUpdateDelegate() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_ControlRig::ControlRigComponent::get_OnPostInitializeDelegate() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Script_ControlRig::ControlRigComponent::get_OnPreSetupDelegate() {
    return (void*)((uintptr_t)this + 0x468);
}
void* _Script_ControlRig::ControlRigComponent::get_OnPostSetupDelegate() {
    return (void*)((uintptr_t)this + 0x478);
}
void _Script_ControlRig::ControlRigComponent::OnPostSetup(_Script_ControlRig::ControlRigComponent* Component) {
    return;
}
void* _Script_ControlRig::ControlRigComponent::get_OnPreUpdateDelegate() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Script_ControlRig::ControlRigComponent::get_MappedElements() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void _Script_ControlRig::ControlRigComponent::AddMappedComponents(void* Components) {
    return;
}
void _Script_ControlRig::ControlRigComponent::set_bResetTransformBeforeTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ControlRig::ControlRigComponent::set_bResetInitialsBeforeSetup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::ControlRigComponent::get_bUpdateRigOnTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x4ba + 0)) & 1 != 0;
}
int32_t _Script_ControlRig::ControlRigComponent::GetControlInt(void* ControlName) {
    return;
}
void _Script_ControlRig::ControlRigComponent::OnPreSetup(_Script_ControlRig::ControlRigComponent* Component) {
    return;
}
void _Script_ControlRig::ControlRigComponent::set_bUpdateRigOnTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4ba + 0);
    *(uint8_t*)((uintptr_t)this + 0x4ba + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Rotator _Script_ControlRig::ControlRigComponent::GetControlRotator(void* ControlName, void* Space) {
    return;
}
_Script_CoreUObject::Transform _Script_ControlRig::ControlRigComponent::GetSpaceTransform(void* SpaceName, void* Space) {
    return;
}
bool _Script_ControlRig::ControlRigComponent::get_bUpdateInEditor() {
    return (*(uint8_t*)((uintptr_t)this + 0x4bb + 0)) & 1 != 0;
}
void _Script_ControlRig::ControlRigComponent::set_bUpdateInEditor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4bb + 0);
    *(uint8_t*)((uintptr_t)this + 0x4bb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_ControlRig::ControlRig*& _Script_ControlRig::ControlRigComponent::get_ControlRig() {
    return *(_Script_ControlRig::ControlRig**)((uintptr_t)this + 0x4c0);
}
bool _Script_ControlRig::ControlRigComponent::get_bDrawBones() {
    return (*(uint8_t*)((uintptr_t)this + 0x4bc + 0)) & 1 != 0;
}
void _Script_ControlRig::ControlRigComponent::set_bDrawBones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x4bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ControlRig::ControlRigComponent::OnPostInitialize(_Script_ControlRig::ControlRigComponent* Component) {
    return;
}
bool _Script_ControlRig::ControlRigComponent::get_bShowDebugDrawing() {
    return (*(uint8_t*)((uintptr_t)this + 0x4bd + 0)) & 1 != 0;
}
void _Script_ControlRig::ControlRigComponent::AddMappedCompleteSkeletalMesh(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent) {
    return;
}
void _Script_ControlRig::ControlRigComponent::set_bShowDebugDrawing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x4bd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ControlRig::ControlRigComponent::AddMappedSkeletalMesh(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent, void* Bones, void* Curves) {
    return;
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigComponent");
    return result;
}
void _Script_ControlRig::ControlRigComponent::Update(float DeltaTime) {
    return;
}
_Script_CoreUObject::Transform _Script_ControlRig::ControlRigComponent::GetControlOffset(void* ControlName, void* Space) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetMappedElements(void* NewMappedElements) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetInitialSpaceTransform(void* SpaceName, _Script_CoreUObject::Transform InitialTransform, void* Space) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetInitialBoneTransform(void* BoneName, _Script_CoreUObject::Transform InitialTransform, void* Space, bool bPropagateToChildren) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetControlVector2D(void* ControlName, _Script_CoreUObject::Vector2D Value) {
    return;
}
float _Script_ControlRig::ControlRigComponent::GetAbsoluteTime() {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetControlTransform(void* ControlName, _Script_CoreUObject::Transform Value, void* Space) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetControlScale(void* ControlName, _Script_CoreUObject::Vector Value, void* Space) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetControlRotator(void* ControlName, _Script_CoreUObject::Rotator Value, void* Space) {
    return;
}
bool _Script_ControlRig::ControlRigComponent::DoesElementExist(void* Name, void* ElementType) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetControlPosition(void* ControlName, _Script_CoreUObject::Vector Value, void* Space) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetControlOffset(void* ControlName, _Script_CoreUObject::Transform OffsetTransform, void* Space) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetControlInt(void* ControlName, int32_t Value) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetControlFloat(void* ControlName, float Value) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetControlBool(void* ControlName, bool Value) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetBoneTransform(void* BoneName, _Script_CoreUObject::Transform Transform, void* Space, float Weight, bool bPropagateToChildren) {
    return;
}
void _Script_ControlRig::ControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(_Script_Engine::SkeletalMesh* InSkeletalMesh) {
    return;
}
bool _Script_ControlRig::ControlRigComponent::GetControlBool(void* ControlName) {
    return;
}
void _Script_ControlRig::ControlRigComponent::OnPreUpdate(_Script_ControlRig::ControlRigComponent* Component) {
    return;
}
_Script_CoreUObject::Vector _Script_ControlRig::ControlRigComponent::GetControlScale(void* ControlName, void* Space) {
    return;
}
void _Script_ControlRig::ControlRigComponent::OnPostUpdate(_Script_ControlRig::ControlRigComponent* Component) {
    return;
}
void _Script_ControlRig::ControlRigComponent::Initialize() {
    return;
}
_Script_CoreUObject::Transform _Script_ControlRig::ControlRigComponent::GetInitialSpaceTransform(void* SpaceName, void* Space) {
    return;
}
_Script_CoreUObject::Transform _Script_ControlRig::ControlRigComponent::GetInitialBoneTransform(void* BoneName, void* Space) {
    return;
}
void* _Script_ControlRig::ControlRigComponent::GetElementNames(void* ElementType) {
    return;
}
_Script_CoreUObject::Vector2D _Script_ControlRig::ControlRigComponent::GetControlVector2D(void* ControlName) {
    return;
}
_Script_ControlRig::ControlRig* _Script_ControlRig::ControlRigComponent::GetControlRig() {
    return;
}
_Script_CoreUObject::Vector _Script_ControlRig::ControlRigComponent::GetControlPosition(void* ControlName, void* Space) {
    return;
}
_Script_CoreUObject::Transform _Script_ControlRig::ControlRigComponent::GetBoneTransform(void* BoneName, void* Space) {
    return;
}
void _Script_ControlRig::ControlRigComponent::AddMappedElements(void* NewMappedElements) {
    return;
}
