#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequenceProjectSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x30]; public:
    bool get_bDefaultLockEngineToDisplayRate();
    void set_bDefaultLockEngineToDisplayRate(bool value);
    void* get_DefaultDisplayRate();
    void* get_DefaultTickResolution();
    void* get_DefaultClockSource();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
