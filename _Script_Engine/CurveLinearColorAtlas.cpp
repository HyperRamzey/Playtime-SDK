#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveLinearColor.hpp"
#include "CurveLinearColorAtlas.hpp"
#include "Texture2D.hpp"
void* _Script_Engine::CurveLinearColorAtlas::get_TextureSize() {
    return (void*)((uintptr_t)this + 0x1a0);
}
bool _Script_Engine::CurveLinearColorAtlas::GetCurvePosition(_Script_Engine::CurveLinearColor* InCurve, float& Position) {
    return;
}
bool _Script_Engine::CurveLinearColorAtlas::get_bSquareResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a4 + 0)) & 1 != 0;
}
void _Script_Engine::CurveLinearColorAtlas::set_bSquareResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::CurveLinearColorAtlas::get_TextureHeight() {
    return (void*)((uintptr_t)this + 0x1a8);
}
_Script_CoreUObject::Class* _Script_Engine::CurveLinearColorAtlas::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CurveLinearColorAtlas");
    return result;
}
void* _Script_Engine::CurveLinearColorAtlas::get_GradientCurves() {
    return (void*)((uintptr_t)this + 0x1b0);
}
