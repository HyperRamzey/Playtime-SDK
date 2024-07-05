#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamServerAddr {
    private: char pad_0[0x38]; public:
    void* get_IP();
    int32_t& get_Port();
    int32_t& get_QueryPort();
    void* get_ConnectionAddressString();
    void* get_SteamP2PAddr();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
