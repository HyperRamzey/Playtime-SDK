#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "MagicLeapTouchpadGesturesComponent.hpp"
void* _Script_MagicLeapController::MagicLeapTouchpadGesturesComponent::get_OnTouchpadGestureStart() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_MagicLeapController::MagicLeapTouchpadGesturesComponent::get_OnTouchpadGestureEnd() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_MagicLeapController::MagicLeapTouchpadGesturesComponent::get_OnTouchpadGestureContinue() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_MagicLeapController::MagicLeapTouchpadGesturesComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapController.MagicLeapTouchpadGesturesComponent");
    return result;
}
