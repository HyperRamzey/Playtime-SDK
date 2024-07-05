#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct MonsterDataAsset : public _Script_Engine::DataAsset {
    private: char pad_30[0x30]; public:
    void* get_MonsterMovementData();
    float& get_AttackRange();
    void* get_AttackA();
    void* get_AttackB();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
