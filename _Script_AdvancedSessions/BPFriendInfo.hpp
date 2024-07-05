#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct BPFriendInfo {
    private: char pad_0[0x68]; public:
    void* get_DisplayName();
    void* get_RealName();
    void* get_OnlineState();
    void* get_UniqueNetId();
    bool get_bIsPlayingSameGame();
    void set_bIsPlayingSameGame(bool value);
    void* get_PresenceInfo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
