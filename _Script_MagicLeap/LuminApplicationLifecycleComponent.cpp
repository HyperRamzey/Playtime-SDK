#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ApplicationLifecycleComponent.hpp"
#include "LuminApplicationLifecycleComponent.hpp"
void* _Script_MagicLeap::LuminApplicationLifecycleComponent::get_DeviceHasReactivatedDelegate() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_MagicLeap::LuminApplicationLifecycleComponent::get_DeviceWillEnterRealityModeDelegate() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_MagicLeap::LuminApplicationLifecycleComponent::get_FocusLostDelegate() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_MagicLeap::LuminApplicationLifecycleComponent::get_DeviceWillGoInStandbyDelegate() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_MagicLeap::LuminApplicationLifecycleComponent::get_FocusGainedDelegate() {
    return (void*)((uintptr_t)this + 0x180);
}
_Script_CoreUObject::Class* _Script_MagicLeap::LuminApplicationLifecycleComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeap.LuminApplicationLifecycleComponent");
    return result;
}
