#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapImageTargetState.hpp"
void* _Script_MagicLeapImageTracker::MagicLeapImageTargetState::get_TrackingStatus() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MagicLeapImageTracker::MagicLeapImageTargetState::get_Location() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_MagicLeapImageTracker::MagicLeapImageTargetState::get_Rotation() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_MagicLeapImageTracker::MagicLeapImageTargetState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapImageTracker.MagicLeapImageTargetState");
    return result;
}
