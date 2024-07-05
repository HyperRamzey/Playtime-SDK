#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "QosDatacenterInfo.hpp"
void* _Script_Qos::QosDatacenterInfo::get_Servers() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Qos::QosDatacenterInfo::get_ID() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Qos::QosDatacenterInfo::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Qos::QosDatacenterInfo::get_RegionId() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_Qos::QosDatacenterInfo::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Qos::QosDatacenterInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Qos.QosDatacenterInfo");
    return result;
}
