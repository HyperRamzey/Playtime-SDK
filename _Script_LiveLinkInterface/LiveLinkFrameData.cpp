#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkFrameData.hpp"
void* _Script_LiveLinkInterface::LiveLinkFrameData::get_MetaData() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_LiveLinkInterface::LiveLinkFrameData::get_Transforms() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkInterface::LiveLinkFrameData::get_CurveElements() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkFrameData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkFrameData");
    return result;
}
void* _Script_LiveLinkInterface::LiveLinkFrameData::get_WorldTime() {
    return (void*)((uintptr_t)this + 0x20);
}
