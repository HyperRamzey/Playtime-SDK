#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatacenterQosInstance.hpp"
void* _Script_Qos::DatacenterQosInstance::get_Result() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Qos::DatacenterQosInstance::get_Definition() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Qos::DatacenterQosInstance::get_LastCheckTimestamp() {
    return (void*)((uintptr_t)this + 0x58);
}
int32_t& _Script_Qos::DatacenterQosInstance::get_AvgPingMs() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void _Script_Qos::DatacenterQosInstance::set_bUsable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Qos::DatacenterQosInstance::get_PingResults() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Qos::DatacenterQosInstance::get_bUsable() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Qos::DatacenterQosInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Qos.DatacenterQosInstance");
    return result;
}
