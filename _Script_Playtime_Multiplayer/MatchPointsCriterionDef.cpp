#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "MatchPointsCriterionDef.hpp"
void* _Script_Playtime_Multiplayer::MatchPointsCriterionDef::get_NotificationText() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Playtime_Multiplayer::MatchPointsCriterionDef::get_CriteriaName() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Playtime_Multiplayer::MatchPointsCriterionDef::get_MaxPointEntries() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
float& _Script_Playtime_Multiplayer::MatchPointsCriterionDef::get_PointWeight() {
    return *(float*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Playtime_Multiplayer::MatchPointsCriterionDef::get_Tickets() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MatchPointsCriterionDef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.MatchPointsCriterionDef");
    return result;
}
