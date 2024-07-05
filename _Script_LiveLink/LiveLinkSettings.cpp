#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkSettings.hpp"
void* _Script_LiveLink::LiveLinkSettings::get_PresetSaveDir() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_LiveLink::LiveLinkSettings::get_DefaultRoleSettings() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_LiveLink::LiveLinkSettings::get_FrameInterpolationProcessor() {
    return (void*)((uintptr_t)this + 0x38);
}
double& _Script_LiveLink::LiveLinkSettings::get_MessageBusPingRequestFrequency() {
    return *(double*)((uintptr_t)this + 0x80);
}
void* _Script_LiveLink::LiveLinkSettings::get_DefaultMessageBusSourceMode() {
    return (void*)((uintptr_t)this + 0x7c);
}
void* _Script_LiveLink::LiveLinkSettings::get_DefaultLiveLinkPreset() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_LiveLink::LiveLinkSettings::get_ClockOffsetCorrectionStep() {
    return *(float*)((uintptr_t)this + 0x78);
}
double& _Script_LiveLink::LiveLinkSettings::get_MessageBusHeartbeatFrequency() {
    return *(double*)((uintptr_t)this + 0x88);
}
double& _Script_LiveLink::LiveLinkSettings::get_MessageBusHeartbeatTimeout() {
    return *(double*)((uintptr_t)this + 0x90);
}
double& _Script_LiveLink::LiveLinkSettings::get_MessageBusTimeBeforeRemovingInactiveSource() {
    return *(double*)((uintptr_t)this + 0x98);
}
double& _Script_LiveLink::LiveLinkSettings::get_TimeWithoutFrameToBeConsiderAsInvalid() {
    return *(double*)((uintptr_t)this + 0xa0);
}
void* _Script_LiveLink::LiveLinkSettings::get_ValidColor() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_LiveLink::LiveLinkSettings::get_InvalidColor() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_LiveLink::LiveLinkSettings::get_TextSizeSource() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_LiveLink::LiveLinkSettings::get_TextSizeSubject() {
    return (void*)((uintptr_t)this + 0xc9);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkSettings");
    return result;
}
