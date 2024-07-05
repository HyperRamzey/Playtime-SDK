#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MonsterMovementData.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MonsterMovementData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.MonsterMovementData");
    return result;
}
float& _Script_Playtime_Multiplayer::MonsterMovementData::get_JumpVelocity() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Playtime_Multiplayer::MonsterMovementData::get_WalkSpeed() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Playtime_Multiplayer::MonsterMovementData::get_CrouchSpeed() {
    return *(float*)((uintptr_t)this + 0x4);
}
