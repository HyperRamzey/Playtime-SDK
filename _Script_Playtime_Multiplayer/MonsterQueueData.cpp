#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MonsterQueueData.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MonsterQueueData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.MonsterQueueData");
    return result;
}
void _Script_Playtime_Multiplayer::MonsterQueueData::TestMonsterQueueDataSelection(int32_t NumberOfTests, bool& bSuccessful) {
    return;
}
int32_t _Script_Playtime_Multiplayer::MonsterQueueData::SelectMonsterFromQueueDatas(void* MonsterQueueDatas, bool& bSuccessful) {
    return;
}
