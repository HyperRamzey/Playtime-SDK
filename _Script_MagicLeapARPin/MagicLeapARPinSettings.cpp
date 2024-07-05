#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MagicLeapARPinSettings.hpp"
float& _Script_MagicLeapARPin::MagicLeapARPinSettings::get_UpdateCheckFrequency() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_MagicLeapARPin::MagicLeapARPinSettings::get_OnUpdatedEventTriggerDelta() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_MagicLeapARPin::MagicLeapARPinSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapARPin.MagicLeapARPinSettings");
    return result;
}
