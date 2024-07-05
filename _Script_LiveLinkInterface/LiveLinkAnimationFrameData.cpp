#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkAnimationFrameData.hpp"
#include "LiveLinkBaseFrameData.hpp"
void* _Script_LiveLinkInterface::LiveLinkAnimationFrameData::get_Transforms() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkAnimationFrameData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkAnimationFrameData");
    return result;
}
