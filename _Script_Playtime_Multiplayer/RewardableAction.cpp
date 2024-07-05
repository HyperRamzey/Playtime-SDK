#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RewardableAction.hpp"
void* _Script_Playtime_Multiplayer::RewardableAction::get_Action() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Playtime_Multiplayer::RewardableAction::get_NumberOfEntries() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::RewardableAction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.RewardableAction");
    return result;
}
