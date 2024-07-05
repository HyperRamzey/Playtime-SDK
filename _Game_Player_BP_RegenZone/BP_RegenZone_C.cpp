#include "..\FUObjectArray.hpp"
#include "BP_RegenZone_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\RegenZone.hpp"
_Script_CoreUObject::Class* _Game_Player_BP_RegenZone::BP_RegenZone_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/BP_RegenZone.BP_RegenZone_C");
    return result;
}
