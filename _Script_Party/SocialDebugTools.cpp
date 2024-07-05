#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SocialDebugTools.hpp"
_Script_CoreUObject::Class* _Script_Party::SocialDebugTools::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.SocialDebugTools");
    return result;
}
