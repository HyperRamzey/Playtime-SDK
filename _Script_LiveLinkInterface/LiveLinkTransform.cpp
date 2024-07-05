#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkTransform.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkTransform");
    return result;
}
