#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "MagicLeapARPinRenderer.hpp"
void _Script_MagicLeapARPin::MagicLeapARPinRenderer::SetVisibilityOverride(bool InVisibilityOverride) {
    return;
}
_Script_CoreUObject::Class* _Script_MagicLeapARPin::MagicLeapARPinRenderer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapARPin.MagicLeapARPinRenderer");
    return result;
}
bool _Script_MagicLeapARPin::MagicLeapARPinRenderer::get_bInfoActorsVisibilityOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
void _Script_MagicLeapARPin::MagicLeapARPinRenderer::set_bInfoActorsVisibilityOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MagicLeapARPin::MagicLeapARPinRenderer::get_AllInfoActors() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_MagicLeapARPin::MagicLeapARPinRenderer::get_ClassToSpawn() {
    return (void*)((uintptr_t)this + 0x280);
}
