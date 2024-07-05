#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBaseBlueprintData.hpp"
#include "SubjectFrameHandle.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::SubjectFrameHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.SubjectFrameHandle");
    return result;
}
