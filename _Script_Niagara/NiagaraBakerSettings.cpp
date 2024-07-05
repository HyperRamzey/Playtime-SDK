#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraBakerSettings.hpp"
float& _Script_Niagara::NiagaraBakerSettings::get_StartSeconds() {
    return *(float*)((uintptr_t)this + 0x28);
}
bool _Script_Niagara::NiagaraBakerSettings::get_bPreviewLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
float& _Script_Niagara::NiagaraBakerSettings::get_DurationSeconds() {
    return *(float*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_Niagara::NiagaraBakerSettings::get_FramesPerSecond() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void _Script_Niagara::NiagaraBakerSettings::set_bPreviewLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraBakerSettings::get_FramesPerDimension() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraBakerSettings::get_OutputTextures() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Niagara::NiagaraBakerSettings::get_bRenderComponentOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraBakerSettings::get_CameraViewportMode() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Niagara::NiagaraBakerSettings::get_CameraViewportLocation() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Niagara::NiagaraBakerSettings::get_CameraViewportRotation() {
    return (void*)((uintptr_t)this + 0xa8);
}
float& _Script_Niagara::NiagaraBakerSettings::get_CameraOrbitDistance() {
    return *(float*)((uintptr_t)this + 0xfc);
}
float& _Script_Niagara::NiagaraBakerSettings::get_CameraFOV() {
    return *(float*)((uintptr_t)this + 0x100);
}
void _Script_Niagara::NiagaraBakerSettings::set_bUseCameraAspectRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Niagara::NiagaraBakerSettings::get_CameraOrthoWidth() {
    return *(float*)((uintptr_t)this + 0x104);
}
bool _Script_Niagara::NiagaraBakerSettings::get_bUseCameraAspectRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 1 != 0;
}
float& _Script_Niagara::NiagaraBakerSettings::get_CameraAspectRatio() {
    return *(float*)((uintptr_t)this + 0x10c);
}
void _Script_Niagara::NiagaraBakerSettings::set_bRenderComponentOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraBakerSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraBakerSettings");
    return result;
}
