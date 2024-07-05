#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LuminRuntimeSettings.hpp"
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_FrameTimingHint() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_LocalizedAppNames() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_PackageName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_ApplicationDisplayName() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_bProtectedContent() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
void _Script_LuminRuntimeSettings::LuminRuntimeSettings::set_bProtectedContent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_bManualCallToAppReady() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a + 0)) & 1 != 0;
}
void _Script_LuminRuntimeSettings::LuminRuntimeSettings::set_bManualCallToAppReady(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_bUseMobileRendering() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b + 0)) & 1 != 0;
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_OcclusionPlugin() {
    return (void*)((uintptr_t)this + 0xe8);
}
void _Script_LuminRuntimeSettings::LuminRuntimeSettings::set_bUseMobileRendering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_bUseVulkan() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_LuminRuntimeSettings::LuminRuntimeSettings::set_bRemoveDebugInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfc + 0);
    *(uint8_t*)((uintptr_t)this + 0xfc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_LuminRuntimeSettings::LuminRuntimeSettings::set_bUseVulkan(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_VulkanValidationLayerLibs() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_Certificate() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_IconModelPath() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_IconPortalPath() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_LocalizedIconInfos() {
    return (void*)((uintptr_t)this + 0x80);
}
int32_t& _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_VersionCode() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_LuminRuntimeSettings::LuminRuntimeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LuminRuntimeSettings.LuminRuntimeSettings");
    return result;
}
int32_t& _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_MinimumAPILevel() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_AppPrivileges() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_ExtraComponentSubElements() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_ExtraComponentElements() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_SpatializationPlugin() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_ReverbPlugin() {
    return (void*)((uintptr_t)this + 0xd8);
}
int32_t& _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_SoundCueCookQualityIndex() {
    return *(int32_t*)((uintptr_t)this + 0xf8);
}
bool _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_bRemoveDebugInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0xfc + 0)) & 1 != 0;
}
bool _Script_LuminRuntimeSettings::LuminRuntimeSettings::get_bFrameVignette() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_LuminRuntimeSettings::LuminRuntimeSettings::set_bFrameVignette(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
