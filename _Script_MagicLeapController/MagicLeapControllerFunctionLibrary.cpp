#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MagicLeapControllerFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapController.MagicLeapControllerFunctionLibrary");
    return result;
}
bool _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::SetMotionSourceForHand(void* Hand, void* MotionSource) {
    return;
}
bool _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::SetControllerTrackingMode(void* TrackingMode) {
    return;
}
bool _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::PlayLEDPattern(void* MotionSource, void* LEDPattern, void* LEDColor, float DurationInSec) {
    return;
}
bool _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::PlayLEDEffect(void* MotionSource, void* LEDEffect, void* LEDSpeed, void* LEDPattern, void* LEDColor, float DurationInSec) {
    return;
}
bool _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::PlayControllerLEDEffect(void* Hand, void* LEDEffect, void* LEDSpeed, void* LEDPattern, void* LEDColor, float DurationInSec) {
    return;
}
bool _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::PlayHapticPattern(void* MotionSource, void* HapticPattern, void* Intensity) {
    return;
}
bool _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::PlayControllerLED(void* Hand, void* LEDPattern, void* LEDColor, float DurationInSec) {
    return;
}
bool _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::PlayControllerHapticFeedback(void* Hand, void* HapticPattern, void* Intensity) {
    return;
}
int32_t _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::MaxSupportedMagicLeapControllers() {
    return;
}
bool _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::IsMLControllerConnected(void* MotionSource) {
    return;
}
void _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::InvertControllerMapping() {
    return;
}
void* _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::GetMotionSourceForHand(void* Hand) {
    return;
}
void* _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::GetMLControllerType(void* Hand) {
    return;
}
void* _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::GetHandForMotionSource(void* MotionSource) {
    return;
}
void* _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::GetControllerType(void* MotionSource) {
    return;
}
void* _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::GetControllerTrackingMode() {
    return;
}
bool _Script_MagicLeapController::MagicLeapControllerFunctionLibrary::GetControllerMapping(int32_t ControllerIndex, void*& Hand) {
    return;
}
