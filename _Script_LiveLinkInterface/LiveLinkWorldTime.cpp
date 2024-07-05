#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkWorldTime.hpp"
double& _Script_LiveLinkInterface::LiveLinkWorldTime::get_Time() {
    return *(double*)((uintptr_t)this + 0x0);
}
double& _Script_LiveLinkInterface::LiveLinkWorldTime::get_Offset() {
    return *(double*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkWorldTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkWorldTime");
    return result;
}
