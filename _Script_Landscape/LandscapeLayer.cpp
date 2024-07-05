#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeLayer.hpp"
void* _Script_Landscape::LandscapeLayer::get_Name() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Landscape::LandscapeLayer::get_Guid() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Landscape::LandscapeLayer::get_WeightmapAlpha() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_Landscape::LandscapeLayer::get_bLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeLayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeLayer");
    return result;
}
bool _Script_Landscape::LandscapeLayer::get_bVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
float& _Script_Landscape::LandscapeLayer::get_HeightmapAlpha() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void _Script_Landscape::LandscapeLayer::set_bVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Landscape::LandscapeLayer::set_bLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Landscape::LandscapeLayer::get_BlendMode() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_Landscape::LandscapeLayer::get_Brushes() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Landscape::LandscapeLayer::get_WeightmapLayerAllocationBlend() {
    return (void*)((uintptr_t)this + 0x38);
}
