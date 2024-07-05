#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0xa8]; public:
    void* get_DefaultRoleSettings();
    void* get_FrameInterpolationProcessor();
    void* get_DefaultLiveLinkPreset();
    void* get_PresetSaveDir();
    float& get_ClockOffsetCorrectionStep();
    void* get_DefaultMessageBusSourceMode();
    double& get_MessageBusPingRequestFrequency();
    double& get_MessageBusHeartbeatFrequency();
    double& get_MessageBusHeartbeatTimeout();
    double& get_MessageBusTimeBeforeRemovingInactiveSource();
    double& get_TimeWithoutFrameToBeConsiderAsInvalid();
    void* get_ValidColor();
    void* get_InvalidColor();
    void* get_TextSizeSource();
    void* get_TextSizeSubject();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
