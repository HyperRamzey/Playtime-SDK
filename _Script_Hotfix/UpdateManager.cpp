#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "UpdateManager.hpp"
bool _Script_Hotfix::UpdateManager::get_bInitialUpdateFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0xa9 + 0)) & 1 != 0;
}
float& _Script_Hotfix::UpdateManager::get_HotfixCheckCompleteDelay() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_Hotfix::UpdateManager::get_UpdateCheckCompleteDelay() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_Hotfix::UpdateManager::get_HotfixAvailabilityCheckCompleteDelay() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_Hotfix::UpdateManager::get_UpdateCheckAvailabilityCompleteDelay() {
    return *(float*)((uintptr_t)this + 0x94);
}
int32_t& _Script_Hotfix::UpdateManager::get_AppSuspendedUpdateCheckTimeSeconds() {
    return *(int32_t*)((uintptr_t)this + 0x9c);
}
bool _Script_Hotfix::UpdateManager::get_bPlatformEnvironmentDetected() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Enum*& _Script_Hotfix::UpdateManager::get_UpdateCompletionEnum() {
    return *(_Script_CoreUObject::Enum**)((uintptr_t)this + 0x108);
}
void _Script_Hotfix::UpdateManager::set_bPlatformEnvironmentDetected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Hotfix::UpdateManager::set_bInitialUpdateFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Hotfix::UpdateManager::get_bCheckHotfixAvailabilityOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0xaa + 0)) & 1 != 0;
}
void _Script_Hotfix::UpdateManager::set_bCheckHotfixAvailabilityOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaa + 0);
    *(uint8_t*)((uintptr_t)this + 0xaa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Hotfix::UpdateManager::get_CurrentUpdateState() {
    return (void*)((uintptr_t)this + 0xab);
}
int32_t& _Script_Hotfix::UpdateManager::get_WorstNumFilesPendingLoadViewed() {
    return *(int32_t*)((uintptr_t)this + 0xac);
}
void* _Script_Hotfix::UpdateManager::get_LastHotfixResult() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_Hotfix::UpdateManager::get_LastUpdateCheck() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_Hotfix::UpdateManager::get_LastCompletionResult() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Enum*& _Script_Hotfix::UpdateManager::get_UpdateStateEnum() {
    return *(_Script_CoreUObject::Enum**)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_Hotfix::UpdateManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Hotfix.UpdateManager");
    return result;
}
