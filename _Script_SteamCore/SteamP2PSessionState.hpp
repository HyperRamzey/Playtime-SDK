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
struct SteamP2PSessionState {
    private: char pad_0[0x28]; public:
    bool get_bConnectionActive();
    void set_bConnectionActive(bool value);
    bool get_bConnecting();
    void set_bConnecting(bool value);
    void* get_P2PSessionError();
    bool get_bUsingRelay();
    void set_bUsingRelay(bool value);
    int32_t& get_BytesQueuedForSend();
    int32_t& get_PacketsQueuedForSend();
    void* get_RemoteIP();
    int32_t& get_RemotePort();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
