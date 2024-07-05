#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "NiagaraRendererProperties.hpp"
#include "NiagaraRibbonRendererProperties.hpp"
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_FacingMode() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_Engine::MaterialInterface*& _Script_Niagara::NiagaraRibbonRendererProperties::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x78);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DrawDirection() {
    return (void*)((uintptr_t)this + 0xec);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonWidthBinding() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_MaterialUserParamBinding() {
    return (void*)((uintptr_t)this + 0x80);
}
int32_t& _Script_Niagara::NiagaraRibbonRendererProperties::get_MultiPlaneCount() {
    return *(int32_t*)((uintptr_t)this + 0xf4);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_UV1Settings() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonTwistBinding() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_UV0Settings() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_Shape() {
    return (void*)((uintptr_t)this + 0xed);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_ColorBinding() {
    return (void*)((uintptr_t)this + 0x180);
}
bool _Script_Niagara::NiagaraRibbonRendererProperties::get_bEnableAccurateGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0xee + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraRibbonRendererProperties::get_bScreenSpaceTessellation() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraRibbonRendererProperties::set_bEnableAccurateGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xee + 0);
    *(uint8_t*)((uintptr_t)this + 0xee + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Niagara::NiagaraRibbonRendererProperties::get_WidthSegmentationCount() {
    return *(int32_t*)((uintptr_t)this + 0xf0);
}
int32_t& _Script_Niagara::NiagaraRibbonRendererProperties::get_TubeSubdivisions() {
    return *(int32_t*)((uintptr_t)this + 0xf8);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_CustomVertices() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonUVDistance() {
    return (void*)((uintptr_t)this + 0x5f8);
}
float& _Script_Niagara::NiagaraRibbonRendererProperties::get_CurveTension() {
    return *(float*)((uintptr_t)this + 0x110);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_TessellationMode() {
    return (void*)((uintptr_t)this + 0x114);
}
int32_t& _Script_Niagara::NiagaraRibbonRendererProperties::get_TessellationFactor() {
    return *(int32_t*)((uintptr_t)this + 0x118);
}
bool _Script_Niagara::NiagaraRibbonRendererProperties::get_bUseConstantFactor() {
    return (*(uint8_t*)((uintptr_t)this + 0x11c + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraRibbonRendererProperties::set_bUseConstantFactor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11c + 0);
    *(uint8_t*)((uintptr_t)this + 0x11c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Niagara::NiagaraRibbonRendererProperties::get_TessellationAngle() {
    return *(float*)((uintptr_t)this + 0x120);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_U0OverrideBinding() {
    return (void*)((uintptr_t)this + 0x650);
}
void _Script_Niagara::NiagaraRibbonRendererProperties::set_bScreenSpaceTessellation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_MaterialParameterBindings() {
    return (void*)((uintptr_t)this + 0x7b0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_PositionBinding() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_VelocityBinding() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_NormalizedAgeBinding() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonFacingBinding() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonIdBinding() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonLinkOrderBinding() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_MaterialRandomBinding() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_V1RangeOverrideBinding() {
    return (void*)((uintptr_t)this + 0x758);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterialBinding() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterial1Binding() {
    return (void*)((uintptr_t)this + 0x4f0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterial2Binding() {
    return (void*)((uintptr_t)this + 0x548);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterial3Binding() {
    return (void*)((uintptr_t)this + 0x5a0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_V0RangeOverrideBinding() {
    return (void*)((uintptr_t)this + 0x6a8);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_U1OverrideBinding() {
    return (void*)((uintptr_t)this + 0x700);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraRibbonRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraRibbonRendererProperties");
    return result;
}
