#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MagicLeapEyeBlinkState.hpp"
#include "MagicLeapEyeTrackerFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapEyeTracker::MagicLeapEyeTrackerFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary");
    return result;
}
bool _Script_MagicLeapEyeTracker::MagicLeapEyeTrackerFunctionLibrary::GetEyeBlinkState(_Script_MagicLeapEyeTracker::MagicLeapEyeBlinkState& BlinkState) {
    return;
}
void* _Script_MagicLeapEyeTracker::MagicLeapEyeTrackerFunctionLibrary::GetCalibrationStatus() {
    return;
}
