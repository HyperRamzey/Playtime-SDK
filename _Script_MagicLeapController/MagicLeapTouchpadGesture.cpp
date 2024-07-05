#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapTouchpadGesture.hpp"
void* _Script_MagicLeapController::MagicLeapTouchpadGesture::get_PositionAndForce() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MagicLeapController::MagicLeapTouchpadGesture::get_Direction() {
    return (void*)((uintptr_t)this + 0xd);
}
void* _Script_MagicLeapController::MagicLeapTouchpadGesture::get_Hand() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_MagicLeapController::MagicLeapTouchpadGesture::get_Speed() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_MagicLeapController::MagicLeapTouchpadGesture::get_MotionSource() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_MagicLeapController::MagicLeapTouchpadGesture::get_Type() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_MagicLeapController::MagicLeapTouchpadGesture::get_Distance() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_MagicLeapController::MagicLeapTouchpadGesture::get_FingerGap() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_MagicLeapController::MagicLeapTouchpadGesture::get_Radius() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_MagicLeapController::MagicLeapTouchpadGesture::get_Angle() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_MagicLeapController::MagicLeapTouchpadGesture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapController.MagicLeapTouchpadGesture");
    return result;
}
