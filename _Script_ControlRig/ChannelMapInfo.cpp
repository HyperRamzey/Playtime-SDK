#include "..\FUObjectArray.hpp"
#include "ChannelMapInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::ChannelMapInfo::get_ControlIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_ControlRig::ChannelMapInfo::get_TotalChannelIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_ControlRig::ChannelMapInfo::get_ParentControlIndex() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_ControlRig::ChannelMapInfo::get_ChannelIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::ChannelMapInfo::get_ChannelTypeName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::ChannelMapInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ChannelMapInfo");
    return result;
}
