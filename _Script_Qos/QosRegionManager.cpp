#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "QosEvaluator.hpp"
#include "QosRegionManager.hpp"
void* _Script_Qos::QosRegionManager::get_QosEvalResult() {
    return (void*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Qos::QosRegionManager::get_NumTestsPerRegion() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
float& _Script_Qos::QosRegionManager::get_PingTimeout() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_Qos::QosRegionManager::get_RegionDefinitions() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Qos::QosRegionManager::get_DatacenterDefinitions() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Qos::QosRegionManager::get_LastCheckTimestamp() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_Qos::QosRegionManager::set_bRegionForcedViaCommandline(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Qos::QosRegionManager::get_RegionOptions() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_Qos::QosEvaluator*& _Script_Qos::QosRegionManager::get_Evaluator() {
    return *(_Script_Qos::QosEvaluator**)((uintptr_t)this + 0x58);
}
void* _Script_Qos::QosRegionManager::get_ForceRegionId() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_Qos::QosRegionManager::get_bRegionForcedViaCommandline() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void* _Script_Qos::QosRegionManager::get_SelectedRegionId() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Qos::QosRegionManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Qos.QosRegionManager");
    return result;
}
