#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PlayerData {
    private: char pad_0[0x70]; public:
    void* get_PlayerID();
    int32_t& get_Tickets();
    void* get_TicketRewardableActions();
    void* get_RewardableActions();
    void* get_PlayerTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
