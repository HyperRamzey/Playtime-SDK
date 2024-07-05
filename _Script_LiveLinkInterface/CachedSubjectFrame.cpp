#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CachedSubjectFrame.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::CachedSubjectFrame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.CachedSubjectFrame");
    return result;
}
