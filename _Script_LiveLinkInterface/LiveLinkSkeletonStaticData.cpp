#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBaseStaticData.hpp"
#include "LiveLinkSkeletonStaticData.hpp"
void* _Script_LiveLinkInterface::LiveLinkSkeletonStaticData::get_BoneNames() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_LiveLinkInterface::LiveLinkSkeletonStaticData::get_BoneParents() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSkeletonStaticData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkSkeletonStaticData");
    return result;
}
