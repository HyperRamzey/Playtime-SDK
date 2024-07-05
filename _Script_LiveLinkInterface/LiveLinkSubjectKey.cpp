#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkSubjectKey.hpp"
void* _Script_LiveLinkInterface::LiveLinkSubjectKey::get_Source() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkInterface::LiveLinkSubjectKey::get_SubjectName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSubjectKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkSubjectKey");
    return result;
}
