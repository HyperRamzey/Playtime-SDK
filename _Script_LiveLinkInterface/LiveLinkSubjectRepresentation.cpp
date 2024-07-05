#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkSubjectRepresentation.hpp"
void* _Script_LiveLinkInterface::LiveLinkSubjectRepresentation::get_Subject() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSubjectRepresentation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkSubjectRepresentation");
    return result;
}
void* _Script_LiveLinkInterface::LiveLinkSubjectRepresentation::get_Role() {
    return (void*)((uintptr_t)this + 0x8);
}
