#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MagicLeapLightEstimationAmbientGlobalState.hpp"
#include "MagicLeapLightEstimationColorTemperatureState.hpp"
#include "MagicLeapLightEstimationFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapLightEstimation::MagicLeapLightEstimationFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary");
    return result;
}
bool _Script_MagicLeapLightEstimation::MagicLeapLightEstimationFunctionLibrary::IsTrackerValid() {
    return;
}
void _Script_MagicLeapLightEstimation::MagicLeapLightEstimationFunctionLibrary::DestroyTracker() {
    return;
}
bool _Script_MagicLeapLightEstimation::MagicLeapLightEstimationFunctionLibrary::GetColorTemperatureState(_Script_MagicLeapLightEstimation::MagicLeapLightEstimationColorTemperatureState& ColorTemperatureState) {
    return;
}
bool _Script_MagicLeapLightEstimation::MagicLeapLightEstimationFunctionLibrary::GetAmbientGlobalState(_Script_MagicLeapLightEstimation::MagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState) {
    return;
}
bool _Script_MagicLeapLightEstimation::MagicLeapLightEstimationFunctionLibrary::CreateTracker() {
    return;
}
