#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "QosEvaluator.hpp"
void _Script_Qos::QosEvaluator::set_bCancelOperation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Qos::QosEvaluator::get_bInProgress() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_Qos::QosEvaluator::get_Datacenters() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_Qos::QosEvaluator::set_bInProgress(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Qos::QosEvaluator::get_bCancelOperation() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Qos::QosEvaluator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Qos.QosEvaluator");
    return result;
}
