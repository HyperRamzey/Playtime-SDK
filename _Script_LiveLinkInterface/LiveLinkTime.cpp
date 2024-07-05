#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkTime.hpp"
double& _Script_LiveLinkInterface::LiveLinkTime::get_WorldTime() {
    return *(double*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkInterface::LiveLinkTime::get_SceneTime() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkTime");
    return result;
}
