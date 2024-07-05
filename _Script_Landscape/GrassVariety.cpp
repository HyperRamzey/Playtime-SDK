#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "GrassVariety.hpp"
void* _Script_Landscape::GrassVariety::get_Scaling() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Landscape::GrassVariety::set_bUseGrid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMesh*& _Script_Landscape::GrassVariety::get_GrassMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x0);
}
void* _Script_Landscape::GrassVariety::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Landscape::GrassVariety::get_bCastDynamicShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void* _Script_Landscape::GrassVariety::get_ScaleY() {
    return (void*)((uintptr_t)this + 0x3c);
}
float& _Script_Landscape::GrassVariety::get_PlacementJitter() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_Landscape::GrassVariety::get_GrassDensity() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_Landscape::GrassVariety::get_bUseGrid() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void* _Script_Landscape::GrassVariety::get_EndCullDistance() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Landscape::GrassVariety::get_StartCullDistance() {
    return (void*)((uintptr_t)this + 0x24);
}
int32_t& _Script_Landscape::GrassVariety::get_MinLOD() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_Landscape::GrassVariety::get_ScaleX() {
    return (void*)((uintptr_t)this + 0x34);
}
bool _Script_Landscape::GrassVariety::get_bUseLandscapeLightmap() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e + 0)) & 1 != 0;
}
void* _Script_Landscape::GrassVariety::get_ScaleZ() {
    return (void*)((uintptr_t)this + 0x44);
}
bool _Script_Landscape::GrassVariety::get_RandomRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_Landscape::GrassVariety::set_RandomRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::GrassVariety::get_AlignToSurface() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d + 0)) & 1 != 0;
}
void _Script_Landscape::GrassVariety::set_AlignToSurface(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Landscape::GrassVariety::set_bUseLandscapeLightmap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Landscape::GrassVariety::get_LightingChannels() {
    return (void*)((uintptr_t)this + 0x4f);
}
bool _Script_Landscape::GrassVariety::get_bReceivesDecals() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_Landscape::GrassVariety::set_bReceivesDecals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Landscape::GrassVariety::set_bCastDynamicShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::GrassVariety::get_bKeepInstanceBufferCPUCopy() {
    return (*(uint8_t*)((uintptr_t)this + 0x52 + 0)) & 1 != 0;
}
void _Script_Landscape::GrassVariety::set_bKeepInstanceBufferCPUCopy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x52 + 0);
    *(uint8_t*)((uintptr_t)this + 0x52 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Landscape::GrassVariety::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.GrassVariety");
    return result;
}
