#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "LevelSequenceProjectSettings.hpp"
void* _Script_LevelSequence::LevelSequenceProjectSettings::get_DefaultDisplayRate() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_LevelSequence::LevelSequenceProjectSettings::get_bDefaultLockEngineToDisplayRate() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_LevelSequence::LevelSequenceProjectSettings::set_bDefaultLockEngineToDisplayRate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_LevelSequence::LevelSequenceProjectSettings::get_DefaultTickResolution() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_LevelSequence::LevelSequenceProjectSettings::get_DefaultClockSource() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceProjectSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequenceProjectSettings");
    return result;
}
