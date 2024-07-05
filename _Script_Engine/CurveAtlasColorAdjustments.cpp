#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveAtlasColorAdjustments.hpp"
float& _Script_Engine::CurveAtlasColorAdjustments::get_AdjustBrightness() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_Engine::CurveAtlasColorAdjustments::get_bChromaKeyTexture() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_Engine::CurveAtlasColorAdjustments::get_AdjustRGBCurve() {
    return *(float*)((uintptr_t)this + 0x14);
}
void _Script_Engine::CurveAtlasColorAdjustments::set_bChromaKeyTexture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::CurveAtlasColorAdjustments::get_AdjustSaturation() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::CurveAtlasColorAdjustments::get_AdjustBrightnessCurve() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::CurveAtlasColorAdjustments::get_AdjustVibrance() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::CurveAtlasColorAdjustments::get_AdjustHue() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::CurveAtlasColorAdjustments::get_AdjustMinAlpha() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::CurveAtlasColorAdjustments::get_AdjustMaxAlpha() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::CurveAtlasColorAdjustments::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CurveAtlasColorAdjustments");
    return result;
}
