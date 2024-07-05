#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Enum;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Hotfix {
#pragma pack(push, 1)
struct UpdateManager : public _Script_CoreUObject::Object {
    private: char pad_28[0xe8]; public:
    float& get_HotfixCheckCompleteDelay();
    float& get_UpdateCheckCompleteDelay();
    float& get_HotfixAvailabilityCheckCompleteDelay();
    float& get_UpdateCheckAvailabilityCompleteDelay();
    int32_t& get_AppSuspendedUpdateCheckTimeSeconds();
    bool get_bPlatformEnvironmentDetected();
    void set_bPlatformEnvironmentDetected(bool value);
    bool get_bInitialUpdateFinished();
    void set_bInitialUpdateFinished(bool value);
    bool get_bCheckHotfixAvailabilityOnly();
    void set_bCheckHotfixAvailabilityOnly(bool value);
    void* get_CurrentUpdateState();
    int32_t& get_WorstNumFilesPendingLoadViewed();
    void* get_LastHotfixResult();
    void* get_LastUpdateCheck();
    void* get_LastCompletionResult();
    _Script_CoreUObject::Enum*& get_UpdateStateEnum();
    _Script_CoreUObject::Enum*& get_UpdateCompletionEnum();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x110
#pragma pack(pop)
}
