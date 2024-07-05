#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputCameraComponent.hpp"
#include "HoudiniInputSceneComponent.hpp"
bool _Script_HoudiniEngineRuntime::HoudiniInputCameraComponent::get_bIsOrthographic() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
float& _Script_HoudiniEngineRuntime::HoudiniInputCameraComponent::get_FOV() {
    return *(float*)((uintptr_t)this + 0xe0);
}
float& _Script_HoudiniEngineRuntime::HoudiniInputCameraComponent::get_AspectRatio() {
    return *(float*)((uintptr_t)this + 0xe4);
}
void _Script_HoudiniEngineRuntime::HoudiniInputCameraComponent::set_bIsOrthographic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_HoudiniEngineRuntime::HoudiniInputCameraComponent::get_OrthoWidth() {
    return *(float*)((uintptr_t)this + 0xec);
}
float& _Script_HoudiniEngineRuntime::HoudiniInputCameraComponent::get_OrthoNearClipPlane() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_HoudiniEngineRuntime::HoudiniInputCameraComponent::get_OrthoFarClipPlane() {
    return *(float*)((uintptr_t)this + 0xf4);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputCameraComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputCameraComponent");
    return result;
}
