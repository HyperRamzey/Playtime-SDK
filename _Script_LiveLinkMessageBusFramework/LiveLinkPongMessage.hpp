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
struct LiveLinkPongMessage {
    private: char pad_0[0x40]; public:
    void* get_ProviderName();
    void* get_MachineName();
    void* get_PollRequest();
    int32_t& get_LiveLinkVersion();
    double& get_CreationPlatformTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
