#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
struct LiveLinkSourceHandle;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_MagicLeapHandTracking {
#pragma pack(push, 1)
struct MagicLeapHandTrackingFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetStaticGestureConfidenceThreshold(void* Gesture, float Confidence);
    bool SetConfiguration(void*& StaticGesturesToActivate, void* KeypointsFilterLevel, void* GestureFilterLevel, bool bTrackingEnabled);
    bool IsHoldingControl(void* Hand);
    float GetStaticGestureConfidenceThreshold(void* Gesture);
    bool GetMotionSourceForHandKeypoint(void* Hand, void* Keypoint, void*& OutMotionSource);
    bool GetMagicLeapHandTrackingLiveLinkSource(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle);
    bool GetHandThumbTip(void* Hand, void* TransformSpace, _Script_CoreUObject::Transform& Secondary);
    bool GetHandKeypointForMotionSource(void* MotionSource, void*& OutKeyPoint);
    bool GetHandIndexFingerTip(void* Hand, void* TransformSpace, _Script_CoreUObject::Transform& Pointer);
    bool GetHandCenterNormalized(void* Hand, _Script_CoreUObject::Vector& HandCenterNormalized);
    bool GetHandCenter(void* Hand, _Script_CoreUObject::Transform& HandCenter);
    bool GetGestureKeypointTransform(void* Hand, void* Keypoint, void* TransformSpace, _Script_CoreUObject::Transform& Transform);
    bool GetGestureKeypoints(void* Hand, void*& Keypoints);
    bool GetCurrentGestureConfidence(void* Hand, float& Confidence);
    bool GetCurrentGesture(void* Hand, void*& Gesture);
    bool GetConfiguration(void*& ActiveStaticGestures, void*& KeypointsFilterLevel, void*& GestureFilterLevel, bool& bTrackingEnabled);
}; // Size: 0x28
#pragma pack(pop)
}
