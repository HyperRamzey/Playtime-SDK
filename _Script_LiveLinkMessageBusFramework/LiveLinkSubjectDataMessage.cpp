#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkSubjectDataMessage.hpp"
void* _Script_LiveLinkMessageBusFramework::LiveLinkSubjectDataMessage::get_RefSkeleton() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkMessageBusFramework::LiveLinkSubjectDataMessage::get_SubjectName() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_LiveLinkMessageBusFramework::LiveLinkSubjectDataMessage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage");
    return result;
}
