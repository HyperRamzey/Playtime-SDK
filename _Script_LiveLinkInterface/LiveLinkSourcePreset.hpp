#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_LiveLinkInterface {
struct LiveLinkSourceSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkSourcePreset {
    private: char pad_0[0x30]; public:
    void* get_Guid();
    _Script_LiveLinkInterface::LiveLinkSourceSettings*& get_Settings();
    void* get_SourceType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
