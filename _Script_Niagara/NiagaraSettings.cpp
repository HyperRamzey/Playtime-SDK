#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "NiagaraEffectType.hpp"
#include "NiagaraSettings.hpp"
void* _Script_Niagara::NiagaraSettings::get_DefaultEffectType() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraSettings::get_QualityLevels() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Niagara::NiagaraSettings::get_DefaultRendererMotionVectorSetting() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_Niagara::NiagaraSettings::get_ComponentRendererWarningsPerClass() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Niagara::NiagaraSettings::get_NDISkelMesh_GpuUniformSamplingFormat() {
    return (void*)((uintptr_t)this + 0xb9);
}
void* _Script_Niagara::NiagaraSettings::get_DefaultRenderTargetFormat() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Niagara::NiagaraSettings::get_NDISkelMesh_GpuMaxInfluences() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Niagara::NiagaraSettings::get_DefaultGridFormat() {
    return (void*)((uintptr_t)this + 0xb1);
}
void* _Script_Niagara::NiagaraSettings::get_NDISkelMesh_AdjacencyTriangleIndexFormat() {
    return (void*)((uintptr_t)this + 0xba);
}
_Script_Niagara::NiagaraEffectType*& _Script_Niagara::NiagaraSettings::get_DefaultEffectTypePtr() {
    return *(_Script_Niagara::NiagaraEffectType**)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraSettings");
    return result;
}
