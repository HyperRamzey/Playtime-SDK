#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBaseFrameData.hpp"
#include "LiveLinkTransformFrameData.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkTransformFrameData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkTransformFrameData");
    return result;
}
void* _Script_LiveLinkInterface::LiveLinkTransformFrameData::get_Transform() {
    return (void*)((uintptr_t)this + 0xa0);
}
