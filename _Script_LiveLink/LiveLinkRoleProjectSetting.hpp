#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkRoleProjectSetting {
    private: char pad_0[0x28]; public:
    void* get_Role();
    void* get_SettingClass();
    void* get_FrameInterpolationProcessor();
    void* get_FramePreProcessors();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
