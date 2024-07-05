#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GrabpackHelpers.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::GrabpackHelpers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.GrabpackHelpers");
    return result;
}
