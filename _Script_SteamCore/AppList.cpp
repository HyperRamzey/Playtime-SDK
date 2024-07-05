#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AppList.hpp"
#include "SteamCoreSubsystem.hpp"
int32_t _Script_SteamCore::AppList::GetAppBuildId(int32_t AppID) {
    return;
}
void* _Script_SteamCore::AppList::get_SteamAppInstalled() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t _Script_SteamCore::AppList::GetInstalledApps(void*& AppIDs, int32_t MaxAppIDs) {
    return;
}
void* _Script_SteamCore::AppList::get_SteamAppUninstalled() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_SteamCore::AppList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.AppList");
    return result;
}
int32_t _Script_SteamCore::AppList::GetNumInstalledApps() {
    return;
}
int32_t _Script_SteamCore::AppList::GetAppName(int32_t AppID, void*& Name) {
    return;
}
int32_t _Script_SteamCore::AppList::GetAppInstallDir(int32_t AppID, void*& Directory) {
    return;
}
