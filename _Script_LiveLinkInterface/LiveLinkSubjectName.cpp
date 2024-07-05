#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkSubjectName.hpp"
void* _Script_LiveLinkInterface::LiveLinkSubjectName::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSubjectName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkSubjectName");
    return result;
}
