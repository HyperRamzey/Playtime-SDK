#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstanceProxy.hpp"
#include "LiveLinkInstanceProxy.hpp"
void* _Script_LiveLink::LiveLinkInstanceProxy::get_PoseNode() {
    return (void*)((uintptr_t)this + 0x770);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkInstanceProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLink.LiveLinkInstanceProxy");
    return result;
}
