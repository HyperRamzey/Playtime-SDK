#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapARPinState.hpp"
float& _Script_MagicLeapARPin::MagicLeapARPinState::get_Confidence() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_MagicLeapARPin::MagicLeapARPinState::get_ValidRadius() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_MagicLeapARPin::MagicLeapARPinState::get_RotationError() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_MagicLeapARPin::MagicLeapARPinState::get_TranslationError() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_MagicLeapARPin::MagicLeapARPinState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapARPin.MagicLeapARPinState");
    return result;
}
void* _Script_MagicLeapARPin::MagicLeapARPinState::get_PinType() {
    return (void*)((uintptr_t)this + 0x10);
}
