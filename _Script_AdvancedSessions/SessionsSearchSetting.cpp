#include "..\FUObjectArray.hpp"
#include "SessionsSearchSetting.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AdvancedSessions::SessionsSearchSetting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AdvancedSessions.SessionsSearchSetting");
    return result;
}
