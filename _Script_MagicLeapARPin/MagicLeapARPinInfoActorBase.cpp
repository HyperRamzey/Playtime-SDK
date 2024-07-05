#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "MagicLeapARPinInfoActorBase.hpp"
void _Script_MagicLeapARPin::MagicLeapARPinInfoActorBase::set_bVisibilityOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x230 + 0);
    *(uint8_t*)((uintptr_t)this + 0x230 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MagicLeapARPin::MagicLeapARPinInfoActorBase::get_PinId() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_MagicLeapARPin::MagicLeapARPinInfoActorBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase");
    return result;
}
bool _Script_MagicLeapARPin::MagicLeapARPinInfoActorBase::get_bVisibilityOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x230 + 0)) & 1 != 0;
}
void _Script_MagicLeapARPin::MagicLeapARPinInfoActorBase::OnUpdateARPinState() {
    return;
}
