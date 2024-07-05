#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "AFirstCPPClass.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::AFirstCPPClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.AFirstCPPClass");
    return result;
}
