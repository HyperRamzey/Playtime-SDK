#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct TicketReward : public _Script_Engine::TableRowBase {
    private: char pad_8[0x38]; public:
    void* get_ScoreboardDisplayText();
    void* get_InGameNotificationDisplayText();
    int32_t& get_TicketsToReward();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
