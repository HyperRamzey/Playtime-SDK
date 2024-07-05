#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithCameraLookatTrackingSettingsTemplate.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithCameraLookatTrackingSettingsTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate");
    return result;
}
bool _Script_DatasmithContent::DatasmithCameraLookatTrackingSettingsTemplate::get_bEnableLookAtTracking() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithCameraLookatTrackingSettingsTemplate::set_bEnableLookAtTracking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DatasmithContent::DatasmithCameraLookatTrackingSettingsTemplate::get_ActorToTrack() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_DatasmithContent::DatasmithCameraLookatTrackingSettingsTemplate::get_bAllowRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_DatasmithContent::DatasmithCameraLookatTrackingSettingsTemplate::set_bAllowRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
