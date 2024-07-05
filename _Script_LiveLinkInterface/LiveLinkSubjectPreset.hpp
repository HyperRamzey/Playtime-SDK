#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_LiveLinkInterface {
struct LiveLinkSubjectSettings;
}
namespace _Script_LiveLinkInterface {
struct LiveLinkVirtualSubject;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkSubjectPreset {
    private: char pad_0[0x38]; public:
    void* get_Key();
    void* get_Role();
    _Script_LiveLinkInterface::LiveLinkSubjectSettings*& get_Settings();
    _Script_LiveLinkInterface::LiveLinkVirtualSubject*& get_VirtualSubject();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
