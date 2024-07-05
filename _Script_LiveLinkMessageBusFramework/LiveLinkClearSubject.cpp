#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkClearSubject.hpp"
void* _Script_LiveLinkMessageBusFramework::LiveLinkClearSubject::get_SubjectName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLinkMessageBusFramework::LiveLinkClearSubject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkMessageBusFramework.LiveLinkClearSubject");
    return result;
}
