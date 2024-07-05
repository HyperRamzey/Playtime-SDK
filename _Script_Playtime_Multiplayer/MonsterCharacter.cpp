#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "MonsterCharacter.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MonsterCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.MonsterCharacter");
    return result;
}
