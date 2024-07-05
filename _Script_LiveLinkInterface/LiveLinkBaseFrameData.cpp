#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBaseFrameData.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkBaseFrameData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkBaseFrameData");
    return result;
}
void* _Script_LiveLinkInterface::LiveLinkBaseFrameData::get_WorldTime() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkInterface::LiveLinkBaseFrameData::get_MetaData() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_LiveLinkInterface::LiveLinkBaseFrameData::get_PropertyValues() {
    return (void*)((uintptr_t)this + 0x70);
}
