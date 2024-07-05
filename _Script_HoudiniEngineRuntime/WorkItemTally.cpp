#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WorkItemTally.hpp"
#include "WorkItemTallyBase.hpp"
void* _Script_HoudiniEngineRuntime::WorkItemTally::get_CookCancelledWorkItems() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_HoudiniEngineRuntime::WorkItemTally::get_AllWorkItems() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_HoudiniEngineRuntime::WorkItemTally::get_WaitingWorkItems() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_HoudiniEngineRuntime::WorkItemTally::get_ScheduledWorkItems() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_HoudiniEngineRuntime::WorkItemTally::get_CookedWorkItems() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_HoudiniEngineRuntime::WorkItemTally::get_CookingWorkItems() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_HoudiniEngineRuntime::WorkItemTally::get_ErroredWorkItems() {
    return (void*)((uintptr_t)this + 0x198);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::WorkItemTally::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.WorkItemTally");
    return result;
}
