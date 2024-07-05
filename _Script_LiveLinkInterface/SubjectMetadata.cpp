#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubjectMetadata.hpp"
void* _Script_LiveLinkInterface::SubjectMetadata::get_StringMetadata() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkInterface::SubjectMetadata::get_SceneTimecode() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_LiveLinkInterface::SubjectMetadata::get_SceneFramerate() {
    return (void*)((uintptr_t)this + 0x64);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::SubjectMetadata::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.SubjectMetadata");
    return result;
}
