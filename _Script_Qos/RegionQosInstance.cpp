#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RegionQosInstance.hpp"
void* _Script_Qos::RegionQosInstance::get_Definition() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Qos::RegionQosInstance::get_DatacenterOptions() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Qos::RegionQosInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Qos.RegionQosInstance");
    return result;
}
