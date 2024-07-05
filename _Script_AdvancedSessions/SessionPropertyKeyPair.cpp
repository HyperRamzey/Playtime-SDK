#include "..\FUObjectArray.hpp"
#include "SessionPropertyKeyPair.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AdvancedSessions::SessionPropertyKeyPair::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AdvancedSessions.SessionPropertyKeyPair");
    return result;
}
