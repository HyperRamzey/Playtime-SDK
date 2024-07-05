#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceConstant.hpp"
#include "LandscapeMaterialInstanceConstant.hpp"
bool _Script_Landscape::LandscapeMaterialInstanceConstant::get_bMobile() {
    return (*(uint8_t*)((uintptr_t)this + 0x328 + 0)) & 4 != 0;
}
void* _Script_Landscape::LandscapeMaterialInstanceConstant::get_TextureStreamingInfo() {
    return (void*)((uintptr_t)this + 0x318);
}
void _Script_Landscape::LandscapeMaterialInstanceConstant::set_bDisableTessellation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x328 + 0);
    *(uint8_t*)((uintptr_t)this + 0x328 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Landscape::LandscapeMaterialInstanceConstant::get_bIsLayerThumbnail() {
    return (*(uint8_t*)((uintptr_t)this + 0x328 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeMaterialInstanceConstant::set_bEditorToolUsage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x328 + 0);
    *(uint8_t*)((uintptr_t)this + 0x328 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Landscape::LandscapeMaterialInstanceConstant::set_bMobile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x328 + 0);
    *(uint8_t*)((uintptr_t)this + 0x328 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Landscape::LandscapeMaterialInstanceConstant::set_bIsLayerThumbnail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x328 + 0);
    *(uint8_t*)((uintptr_t)this + 0x328 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::LandscapeMaterialInstanceConstant::get_bDisableTessellation() {
    return (*(uint8_t*)((uintptr_t)this + 0x328 + 0)) & 2 != 0;
}
bool _Script_Landscape::LandscapeMaterialInstanceConstant::get_bEditorToolUsage() {
    return (*(uint8_t*)((uintptr_t)this + 0x328 + 0)) & 8 != 0;
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeMaterialInstanceConstant::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeMaterialInstanceConstant");
    return result;
}
