#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "MagicLeapImageTargetSettings.hpp"
_Script_Engine::Texture2D*& _Script_MagicLeapImageTracker::MagicLeapImageTargetSettings::get_ImageTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x0);
}
bool _Script_MagicLeapImageTracker::MagicLeapImageTargetSettings::get_BIsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 1 != 0;
}
bool _Script_MagicLeapImageTracker::MagicLeapImageTargetSettings::get_bIsStationary() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void* _Script_MagicLeapImageTracker::MagicLeapImageTargetSettings::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_MagicLeapImageTracker::MagicLeapImageTargetSettings::get_LongerDimension() {
    return *(float*)((uintptr_t)this + 0x18);
}
void _Script_MagicLeapImageTracker::MagicLeapImageTargetSettings::set_bIsStationary(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MagicLeapImageTracker::MagicLeapImageTargetSettings::set_BIsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MagicLeapImageTracker::MagicLeapImageTargetSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapImageTracker.MagicLeapImageTargetSettings");
    return result;
}
