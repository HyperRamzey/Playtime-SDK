#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraLightRendererProperties.hpp"
#include "NiagaraRendererProperties.hpp"
bool _Script_Niagara::NiagaraLightRendererProperties::get_bUseInverseSquaredFalloff() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraLightRendererProperties::set_bUseInverseSquaredFalloff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraLightRendererProperties::get_bAffectsTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 2 != 0;
}
float& _Script_Niagara::NiagaraLightRendererProperties::get_DefaultExponent() {
    return *(float*)((uintptr_t)this + 0x80);
}
bool _Script_Niagara::NiagaraLightRendererProperties::get_bAlphaScalesBrightness() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraLightRendererProperties::set_bAffectsTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Niagara::NiagaraLightRendererProperties::set_bAlphaScalesBrightness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Niagara::NiagaraLightRendererProperties::get_RadiusScale() {
    return *(float*)((uintptr_t)this + 0x7c);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_ColorAdd() {
    return (void*)((uintptr_t)this + 0x84);
}
int32_t& _Script_Niagara::NiagaraLightRendererProperties::get_RendererVisibility() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_LightRenderingEnabledBinding() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_LightExponentBinding() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_PositionBinding() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_ColorBinding() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_RadiusBinding() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_VolumetricScatteringBinding() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_RendererVisibilityTagBinding() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraLightRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraLightRendererProperties");
    return result;
}
