#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkSubjectFrameMessage.hpp"
void* _Script_LiveLinkMessageBusFramework::LiveLinkSubjectFrameMessage::get_SubjectName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkMessageBusFramework::LiveLinkSubjectFrameMessage::get_Transforms() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_LiveLinkMessageBusFramework::LiveLinkSubjectFrameMessage::get_Curves() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_LiveLinkMessageBusFramework::LiveLinkSubjectFrameMessage::get_MetaData() {
    return (void*)((uintptr_t)this + 0x28);
}
double& _Script_LiveLinkMessageBusFramework::LiveLinkSubjectFrameMessage::get_Time() {
    return *(double*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_LiveLinkMessageBusFramework::LiveLinkSubjectFrameMessage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage");
    return result;
}
