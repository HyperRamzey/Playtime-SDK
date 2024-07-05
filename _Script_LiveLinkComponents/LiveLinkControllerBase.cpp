#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkControllerBase.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkComponents::LiveLinkControllerBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkComponents.LiveLinkControllerBase");
    return result;
}
