#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkRefSkeleton.hpp"
void* _Script_LiveLinkInterface::LiveLinkRefSkeleton::get_BoneNames() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkRefSkeleton::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkRefSkeleton");
    return result;
}
void* _Script_LiveLinkInterface::LiveLinkRefSkeleton::get_BoneParents() {
    return (void*)((uintptr_t)this + 0x10);
}
