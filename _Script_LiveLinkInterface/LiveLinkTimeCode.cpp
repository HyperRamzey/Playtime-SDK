#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkTimeCode.hpp"
#include "LiveLinkTimeCode_Base_DEPRECATED.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkTimeCode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkTimeCode");
    return result;
}
