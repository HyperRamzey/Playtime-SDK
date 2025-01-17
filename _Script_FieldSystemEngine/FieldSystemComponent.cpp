#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "FieldNodeBase.hpp"
#include "FieldSystem.hpp"
#include "FieldSystemComponent.hpp"
#include "FieldSystemMetaData.hpp"
void* _Script_FieldSystemEngine::FieldSystemComponent::get_BufferCommands() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void _Script_FieldSystemEngine::FieldSystemComponent::set_bIsChaosField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x459 + 0);
    *(uint8_t*)((uintptr_t)this + 0x459 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_FieldSystemEngine::FieldSystem*& _Script_FieldSystemEngine::FieldSystemComponent::get_FieldSystem() {
    return *(_Script_FieldSystemEngine::FieldSystem**)((uintptr_t)this + 0x450);
}
void* _Script_FieldSystemEngine::FieldSystemComponent::get_SupportedSolvers() {
    return (void*)((uintptr_t)this + 0x460);
}
bool _Script_FieldSystemEngine::FieldSystemComponent::get_bIsWorldField() {
    return (*(uint8_t*)((uintptr_t)this + 0x458 + 0)) & 1 != 0;
}
bool _Script_FieldSystemEngine::FieldSystemComponent::get_bIsChaosField() {
    return (*(uint8_t*)((uintptr_t)this + 0x459 + 0)) & 1 != 0;
}
void _Script_FieldSystemEngine::FieldSystemComponent::set_bIsWorldField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x458 + 0);
    *(uint8_t*)((uintptr_t)this + 0x458 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_FieldSystemEngine::FieldSystemComponent::get_ConstructionCommands() {
    return (void*)((uintptr_t)this + 0x470);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::FieldSystemComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.FieldSystemComponent");
    return result;
}
void _Script_FieldSystemEngine::FieldSystemComponent::ResetFieldSystem() {
    return;
}
void _Script_FieldSystemEngine::FieldSystemComponent::RemovePersistentFields() {
    return;
}
void _Script_FieldSystemEngine::FieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, _Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Direction, float Radius, float Magnitude) {
    return;
}
void _Script_FieldSystemEngine::FieldSystemComponent::ApplyLinearForce(bool Enabled, _Script_CoreUObject::Vector Direction, float Magnitude) {
    return;
}
void _Script_FieldSystemEngine::FieldSystemComponent::ApplyStrainField(bool Enabled, _Script_CoreUObject::Vector Position, float Radius, float Magnitude, int32_t Iterations) {
    return;
}
void _Script_FieldSystemEngine::FieldSystemComponent::ApplyStayDynamicField(bool Enabled, _Script_CoreUObject::Vector Position, float Radius) {
    return;
}
void _Script_FieldSystemEngine::FieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, _Script_CoreUObject::Vector Position, float Radius, float Magnitude) {
    return;
}
void _Script_FieldSystemEngine::FieldSystemComponent::ApplyRadialForce(bool Enabled, _Script_CoreUObject::Vector Position, float Magnitude) {
    return;
}
void _Script_FieldSystemEngine::FieldSystemComponent::ApplyPhysicsField(bool Enabled, void* Target, _Script_FieldSystemEngine::FieldSystemMetaData* MetaData, _Script_FieldSystemEngine::FieldNodeBase* Field) {
    return;
}
void _Script_FieldSystemEngine::FieldSystemComponent::AddPersistentField(bool Enabled, void* Target, _Script_FieldSystemEngine::FieldSystemMetaData* MetaData, _Script_FieldSystemEngine::FieldNodeBase* Field) {
    return;
}
void _Script_FieldSystemEngine::FieldSystemComponent::AddFieldCommand(bool Enabled, void* Target, _Script_FieldSystemEngine::FieldSystemMetaData* MetaData, _Script_FieldSystemEngine::FieldNodeBase* Field) {
    return;
}
