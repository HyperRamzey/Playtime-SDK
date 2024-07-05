#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SaveGame.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct TicketSaveGame : public _Script_Engine::SaveGame {
    private: char pad_28[0x8]; public:
    int32_t& get_TicketCount();
    static _Script_CoreUObject::Class* static_class();
    void SetTicketCountClamped(int32_t AbsoluteValue);
    void RemoveFromTicketCount(int32_t Amount);
    int32_t GetTicketCount();
    void AddToTicketCount(int32_t Amount);
}; // Size: 0x30
#pragma pack(pop)
}
