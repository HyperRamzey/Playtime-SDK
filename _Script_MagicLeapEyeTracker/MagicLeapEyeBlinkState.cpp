#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapEyeBlinkState.hpp"
bool _Script_MagicLeapEyeTracker::MagicLeapEyeBlinkState::get_LeftEyeBlinked() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_MagicLeapEyeTracker::MagicLeapEyeBlinkState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapEyeTracker.MagicLeapEyeBlinkState");
    return result;
}
void _Script_MagicLeapEyeTracker::MagicLeapEyeBlinkState::set_LeftEyeBlinked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MagicLeapEyeTracker::MagicLeapEyeBlinkState::get_RightEyeBlinked() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_MagicLeapEyeTracker::MagicLeapEyeBlinkState::set_RightEyeBlinked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
