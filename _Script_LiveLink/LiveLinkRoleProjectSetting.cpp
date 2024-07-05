#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkRoleProjectSetting.hpp"
void* _Script_LiveLink::LiveLinkRoleProjectSetting::get_Role() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLink::LiveLinkRoleProjectSetting::get_FrameInterpolationProcessor() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_LiveLink::LiveLinkRoleProjectSetting::get_SettingClass() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_LiveLink::LiveLinkRoleProjectSetting::get_FramePreProcessors() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkRoleProjectSetting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLink.LiveLinkRoleProjectSetting");
    return result;
}
