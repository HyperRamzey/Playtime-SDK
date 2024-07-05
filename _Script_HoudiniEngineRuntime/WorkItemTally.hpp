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
struct WorkItemTally : public WorkItemTallyBase {
    private: char pad_8[0x230]; public:
    void* get_AllWorkItems();
    void* get_WaitingWorkItems();
    void* get_ScheduledWorkItems();
    void* get_CookingWorkItems();
    void* get_CookedWorkItems();
    void* get_ErroredWorkItems();
    void* get_CookCancelledWorkItems();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x238
#pragma pack(pop)
}
