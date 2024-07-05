#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AdvancedSteamSessions {
#pragma pack(push, 1)
struct BPSteamGroupInfo {
    private: char pad_0[0x50]; public:
    void* get_GroupID();
    void* get_GroupName();
    void* get_GroupTag();
    int32_t& get_numOnline();
    int32_t& get_numInGame();
    int32_t& get_numChatting();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
