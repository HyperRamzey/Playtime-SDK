#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkTimeCode_Base_DEPRECATED.hpp"
int32_t& _Script_LiveLinkInterface::LiveLinkTimeCode_Base_DEPRECATED::get_Seconds() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkTimeCode_Base_DEPRECATED::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED");
    return result;
}
int32_t& _Script_LiveLinkInterface::LiveLinkTimeCode_Base_DEPRECATED::get_Frames() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_LiveLinkInterface::LiveLinkTimeCode_Base_DEPRECATED::get_FrameRate() {
    return (void*)((uintptr_t)this + 0x8);
}
