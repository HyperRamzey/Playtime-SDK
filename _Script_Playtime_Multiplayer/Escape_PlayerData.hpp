#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PlayerData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct Escape_PlayerData : public PlayerData {
    private: char pad_70[0x30]; public:
    float& get_Health();
    int32_t& get_Strikes();
    void* get_PlayerStatus();
    int32_t& get_CartIndex();
    bool get_bInLocker();
    void set_bInLocker(bool value);
    float& get_LockerTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
