#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "OnlineHotfixManager.hpp"
void* _Script_Hotfix::OnlineHotfixManager::get_OSSName() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_Hotfix::OnlineHotfixManager::get_HotfixManagerClassName() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_Hotfix::OnlineHotfixManager::get_DebugPrefix() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Script_Hotfix::OnlineHotfixManager::StartHotfixProcess() {
    return;
}
void* _Script_Hotfix::OnlineHotfixManager::get_AssetsHotfixedFromIniFiles() {
    return (void*)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Script_Hotfix::OnlineHotfixManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Hotfix.OnlineHotfixManager");
    return result;
}
