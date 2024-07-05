#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraOutlinerSystemInstanceData {
    private: char pad_0[0x48]; public:
    void* get_ComponentName();
    void* get_Emitters();
    void* get_ActualExecutionState();
    void* get_RequestedExecutionState();
    void* get_ScalabilityState();
    bool get_bPendingKill();
    void set_bPendingKill(bool value);
    void* get_PoolMethod();
    void* get_AverageTime();
    void* get_MaxTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
