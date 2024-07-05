#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "QosPingServerInfo.hpp"
_Script_CoreUObject::Class* _Script_Qos::QosPingServerInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Qos.QosPingServerInfo");
    return result;
}
void* _Script_Qos::QosPingServerInfo::get_Address() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Qos::QosPingServerInfo::get_Port() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
