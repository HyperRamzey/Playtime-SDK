#include "..\FUObjectArray.hpp"
#include "ARFaceGeometry.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
void* _Script_AugmentedReality::ARFaceGeometry::get_LookAtTarget() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARFaceGeometry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARFaceGeometry");
    return result;
}
void* _Script_AugmentedReality::ARFaceGeometry::get_BlendShapes() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_AugmentedReality::ARFaceGeometry::get_bIsTracked() {
    return (*(uint8_t*)((uintptr_t)this + 0x104 + 0)) & 1 != 0;
}
void* _Script_AugmentedReality::ARFaceGeometry::get_RightEyeTransform() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void _Script_AugmentedReality::ARFaceGeometry::set_bIsTracked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x104 + 0);
    *(uint8_t*)((uintptr_t)this + 0x104 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AugmentedReality::ARFaceGeometry::get_LeftEyeTransform() {
    return (void*)((uintptr_t)this + 0x190);
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARFaceGeometry::GetWorldSpaceEyeTransform(void* Eye) {
    return;
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARFaceGeometry::GetLocalSpaceEyeTransform(void* Eye) {
    return;
}
float _Script_AugmentedReality::ARFaceGeometry::GetBlendShapeValue(void* BlendShape) {
    return;
}
void* _Script_AugmentedReality::ARFaceGeometry::GetBlendShapes() {
    return;
}
