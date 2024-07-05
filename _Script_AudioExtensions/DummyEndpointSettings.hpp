#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AudioEndpointSettingsBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioExtensions {
#pragma pack(push, 1)
struct DummyEndpointSettings : public AudioEndpointSettingsBase {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
