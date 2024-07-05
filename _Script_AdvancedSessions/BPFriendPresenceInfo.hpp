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
struct BPFriendPresenceInfo {
    private: char pad_0[0x18]; public:
    bool get_bIsOnline();
    void set_bIsOnline(bool value);
    bool get_BIsPlaying();
    void set_BIsPlaying(bool value);
    bool get_bIsPlayingThisGame();
    void set_bIsPlayingThisGame(bool value);
    bool get_bIsJoinable();
    void set_bIsJoinable(bool value);
    bool get_bHasVoiceSupport();
    void set_bHasVoiceSupport(bool value);
    void* get_PresenceState();
    void* get_StatusString();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
