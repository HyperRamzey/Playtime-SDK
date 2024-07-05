#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSourceHandle.hpp"
#include "MagicLeapHandTrackingFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary");
    return result;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetHandThumbTip(void* Hand, void* TransformSpace, _Script_CoreUObject::Transform& Secondary) {
    return;
}
void _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::SetStaticGestureConfidenceThreshold(void* Gesture, float Confidence) {
    return;
}
float _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetStaticGestureConfidenceThreshold(void* Gesture) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::SetConfiguration(void*& StaticGesturesToActivate, void* KeypointsFilterLevel, void* GestureFilterLevel, bool bTrackingEnabled) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::IsHoldingControl(void* Hand) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetMotionSourceForHandKeypoint(void* Hand, void* Keypoint, void*& OutMotionSource) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetMagicLeapHandTrackingLiveLinkSource(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetHandKeypointForMotionSource(void* MotionSource, void*& OutKeyPoint) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetHandIndexFingerTip(void* Hand, void* TransformSpace, _Script_CoreUObject::Transform& Pointer) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetHandCenterNormalized(void* Hand, _Script_CoreUObject::Vector& HandCenterNormalized) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetHandCenter(void* Hand, _Script_CoreUObject::Transform& HandCenter) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetGestureKeypointTransform(void* Hand, void* Keypoint, void* TransformSpace, _Script_CoreUObject::Transform& Transform) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetGestureKeypoints(void* Hand, void*& Keypoints) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetCurrentGestureConfidence(void* Hand, float& Confidence) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetCurrentGesture(void* Hand, void*& Gesture) {
    return;
}
bool _Script_MagicLeapHandTracking::MagicLeapHandTrackingFunctionLibrary::GetConfiguration(void*& ActiveStaticGestures, void*& KeypointsFilterLevel, void*& GestureFilterLevel, bool& bTrackingEnabled) {
    return;
}
