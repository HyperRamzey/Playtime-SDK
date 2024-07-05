#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapLightEstimation {
#pragma pack(push, 1)
struct MagicLeapLightingTrackingComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x10]; public:
    bool get_UseGlobalAmbience();
    void set_UseGlobalAmbience(bool value);
    bool get_UseColorTemp();
    void set_UseColorTemp(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
