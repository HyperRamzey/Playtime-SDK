#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RemoteSession {
#pragma pack(push, 1)
struct RemoteSessionSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x40]; public:
    int32_t& get_HostPort();
    int32_t& get_ConnectionTimeout();
    int32_t& get_ConnectionTimeoutWhenDebugging();
    int32_t& get_PingTime();
    bool get_bAllowInShipping();
    void set_bAllowInShipping(bool value);
    bool get_bAutoHostWithPIE();
    void set_bAutoHostWithPIE(bool value);
    bool get_bAutoHostWithGame();
    void set_bAutoHostWithGame(bool value);
    int32_t& get_ImageQuality();
    int32_t& get_FrameRate();
    void* get_WhitelistedChannels();
    void* get_BlacklistedChannels();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
