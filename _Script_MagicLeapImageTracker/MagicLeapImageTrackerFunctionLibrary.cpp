#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MagicLeapImageTrackerFunctionLibrary.hpp"
void _Script_MagicLeapImageTracker::MagicLeapImageTrackerFunctionLibrary::EnableImageTracking(bool bEnable) {
    return;
}
bool _Script_MagicLeapImageTracker::MagicLeapImageTrackerFunctionLibrary::IsImageTrackingEnabled() {
    return;
}
_Script_CoreUObject::Class* _Script_MagicLeapImageTracker::MagicLeapImageTrackerFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary");
    return result;
}
void _Script_MagicLeapImageTracker::MagicLeapImageTrackerFunctionLibrary::SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets) {
    return;
}
int32_t _Script_MagicLeapImageTracker::MagicLeapImageTrackerFunctionLibrary::GetMaxSimultaneousTargets() {
    return;
}
