#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MagicLeapGraphicsClientPerformanceInfo.hpp"
#include "MagicLeapHMDFunctionLibrary.hpp"
#include "MagicLeapHeadTrackingState.hpp"
bool _Script_MagicLeap::MagicLeapHMDFunctionLibrary::IsRunningOnMagicLeapHMD() {
    return;
}
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapHMDFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeap.MagicLeapHMDFunctionLibrary");
    return result;
}
void _Script_MagicLeap::MagicLeapHMDFunctionLibrary::SetFocusActor(_Script_Engine::Actor* InFocusActor, bool bSetStabilizationActor) {
    return;
}
void _Script_MagicLeap::MagicLeapHMDFunctionLibrary::SetStabilizationDepthActor(_Script_Engine::Actor* InStabilizationDepthActor, bool bSetFocusActor) {
    return;
}
bool _Script_MagicLeap::MagicLeapHMDFunctionLibrary::SetAppReady() {
    return;
}
void* _Script_MagicLeap::MagicLeapHMDFunctionLibrary::GetMLSDKVersion() {
    return;
}
void _Script_MagicLeap::MagicLeapHMDFunctionLibrary::SetBaseRotation(_Script_CoreUObject::Rotator& InBaseRotation) {
    return;
}
void _Script_MagicLeap::MagicLeapHMDFunctionLibrary::SetBasePosition(_Script_CoreUObject::Vector& InBasePosition) {
    return;
}
void _Script_MagicLeap::MagicLeapHMDFunctionLibrary::SetBaseOrientation(_Script_CoreUObject::Quat& InBaseOrientation) {
    return;
}
int32_t _Script_MagicLeap::MagicLeapHMDFunctionLibrary::GetPlatformAPILevel() {
    return;
}
int32_t _Script_MagicLeap::MagicLeapHMDFunctionLibrary::GetMLSDKVersionRevision() {
    return;
}
int32_t _Script_MagicLeap::MagicLeapHMDFunctionLibrary::GetMLSDKVersionMinor() {
    return;
}
int32_t _Script_MagicLeap::MagicLeapHMDFunctionLibrary::GetMLSDKVersionMajor() {
    return;
}
int32_t _Script_MagicLeap::MagicLeapHMDFunctionLibrary::GetMinimumAPILevel() {
    return;
}
bool _Script_MagicLeap::MagicLeapHMDFunctionLibrary::GetHeadTrackingState(_Script_MagicLeap::MagicLeapHeadTrackingState& State) {
    return;
}
bool _Script_MagicLeap::MagicLeapHMDFunctionLibrary::GetHeadTrackingMapEvents(void*& MapEvents) {
    return;
}
bool _Script_MagicLeap::MagicLeapHMDFunctionLibrary::GetGraphicsClientPerformanceInfo(_Script_MagicLeap::MagicLeapGraphicsClientPerformanceInfo& PerformanceInfo) {
    return;
}
