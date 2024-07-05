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
struct MonsterData {
    private: char pad_0[0x60]; public:
    void* get_SelectedMonster();
    void* get_MonsterPlayerID();
    void* get_MonsterTransform();
    float& get_MonsterSelectTimeRemaining();
    int32_t& get_MiniHuggys();
    int32_t& get_Kills();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
