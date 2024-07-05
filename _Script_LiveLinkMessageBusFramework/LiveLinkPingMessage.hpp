#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkMessageBusFramework {
#pragma pack(push, 1)
struct LiveLinkPingMessage {
    private: char pad_0[0x14]; public:
    void* get_PollRequest();
    int32_t& get_LiveLinkVersion();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
