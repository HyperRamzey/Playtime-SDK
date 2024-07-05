#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "WorkItemTallyBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct AggregatedWorkItemTally : public WorkItemTallyBase {
    private: char pad_8[0x20]; public:
    int32_t& get_TotalWorkItems();
    int32_t& get_WaitingWorkItems();
    int32_t& get_ScheduledWorkItems();
    int32_t& get_CookingWorkItems();
    int32_t& get_CookedWorkItems();
    int32_t& get_ErroredWorkItems();
    int32_t& get_CookCancelledWorkItems();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
