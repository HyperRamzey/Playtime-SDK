#include "..\FUObjectArray.hpp"
#include "BPUserOnlineAccount.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AdvancedSessions::BPUserOnlineAccount::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AdvancedSessions.BPUserOnlineAccount");
    return result;
}
