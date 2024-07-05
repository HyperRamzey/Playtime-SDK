#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LiveLinkInterface\LiveLinkSourceSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkVirtualSubjectSourceSettings : public _Script_LiveLinkInterface::LiveLinkSourceSettings {
    private: char pad_a0[0x8]; public:
    void* get_SourceName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
