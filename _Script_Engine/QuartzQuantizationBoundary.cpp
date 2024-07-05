#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "QuartzQuantizationBoundary.hpp"
void _Script_Engine::QuartzQuantizationBoundary::set_bFireOnClockStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::QuartzQuantizationBoundary::get_Quantization() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::QuartzQuantizationBoundary::get_Multiplier() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::QuartzQuantizationBoundary::get_CountingReferencePoint() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::QuartzQuantizationBoundary::get_bFireOnClockStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::QuartzQuantizationBoundary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.QuartzQuantizationBoundary");
    return result;
}
