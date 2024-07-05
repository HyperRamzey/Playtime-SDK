#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_HeadMountedDisplay\VRNotificationsComponent.hpp"
#include "MagicLeapHeadTrackingNotificationsComponent.hpp"
void* _Script_MagicLeap::MagicLeapHeadTrackingNotificationsComponent::get_OnHeadTrackingRecovered() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_MagicLeap::MagicLeapHeadTrackingNotificationsComponent::get_OnHeadTrackingLost() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_MagicLeap::MagicLeapHeadTrackingNotificationsComponent::get_OnHeadTrackingRecoveryFailed() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_MagicLeap::MagicLeapHeadTrackingNotificationsComponent::get_OnHeadTrackingNewSessionStarted() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapHeadTrackingNotificationsComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeap.MagicLeapHeadTrackingNotificationsComponent");
    return result;
}
