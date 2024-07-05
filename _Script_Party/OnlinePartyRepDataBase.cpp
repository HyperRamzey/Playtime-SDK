#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OnlinePartyRepDataBase.hpp"
_Script_CoreUObject::Class* _Script_Party::OnlinePartyRepDataBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Party.OnlinePartyRepDataBase");
    return result;
}
