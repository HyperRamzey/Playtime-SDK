#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkTimeSynchronizationSettings.hpp"
void* _Script_LiveLinkInterface::LiveLinkTimeSynchronizationSettings::get_FrameRate() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkInterface::LiveLinkTimeSynchronizationSettings::get_FrameOffset() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkTimeSynchronizationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkTimeSynchronizationSettings");
    return result;
}
