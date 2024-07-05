#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct MonsterQueueData : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    void TestMonsterQueueDataSelection(int32_t NumberOfTests, bool& bSuccessful);
    int32_t SelectMonsterFromQueueDatas(void* MonsterQueueDatas, bool& bSuccessful);
}; // Size: 0x28
#pragma pack(pop)
}
