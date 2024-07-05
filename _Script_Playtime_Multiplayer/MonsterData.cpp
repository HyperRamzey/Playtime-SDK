#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MonsterData.hpp"
void* _Script_Playtime_Multiplayer::MonsterData::get_SelectedMonster() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MonsterData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.MonsterData");
    return result;
}
void* _Script_Playtime_Multiplayer::MonsterData::get_MonsterPlayerID() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Playtime_Multiplayer::MonsterData::get_Kills() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_Playtime_Multiplayer::MonsterData::get_MonsterTransform() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_Playtime_Multiplayer::MonsterData::get_MonsterSelectTimeRemaining() {
    return *(float*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Playtime_Multiplayer::MonsterData::get_MiniHuggys() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
