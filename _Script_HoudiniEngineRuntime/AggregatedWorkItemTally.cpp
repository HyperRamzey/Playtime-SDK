#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AggregatedWorkItemTally.hpp"
#include "WorkItemTallyBase.hpp"
int32_t& _Script_HoudiniEngineRuntime::AggregatedWorkItemTally::get_TotalWorkItems() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_HoudiniEngineRuntime::AggregatedWorkItemTally::get_WaitingWorkItems() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_HoudiniEngineRuntime::AggregatedWorkItemTally::get_CookingWorkItems() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_HoudiniEngineRuntime::AggregatedWorkItemTally::get_ScheduledWorkItems() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::AggregatedWorkItemTally::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.AggregatedWorkItemTally");
    return result;
}
int32_t& _Script_HoudiniEngineRuntime::AggregatedWorkItemTally::get_CookedWorkItems() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_HoudiniEngineRuntime::AggregatedWorkItemTally::get_ErroredWorkItems() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_HoudiniEngineRuntime::AggregatedWorkItemTally::get_CookCancelledWorkItems() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
