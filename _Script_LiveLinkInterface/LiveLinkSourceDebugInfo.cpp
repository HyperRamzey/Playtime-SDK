#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkSourceDebugInfo.hpp"
void* _Script_LiveLinkInterface::LiveLinkSourceDebugInfo::get_SubjectName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_LiveLinkInterface::LiveLinkSourceDebugInfo::get_NumberOfBufferAtSnapshot() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_LiveLinkInterface::LiveLinkSourceDebugInfo::get_SnapshotIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSourceDebugInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkSourceDebugInfo");
    return result;
}
