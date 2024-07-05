#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ApplicationLifecycleComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct LuminApplicationLifecycleComponent : public _Script_Engine::ApplicationLifecycleComponent {
    private: char pad_140[0x50]; public:
    void* get_DeviceHasReactivatedDelegate();
    void* get_DeviceWillEnterRealityModeDelegate();
    void* get_DeviceWillGoInStandbyDelegate();
    void* get_FocusLostDelegate();
    void* get_FocusGainedDelegate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x190
#pragma pack(pop)
}
