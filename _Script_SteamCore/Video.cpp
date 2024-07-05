#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreSubsystem.hpp"
#include "Video.hpp"
void* _Script_SteamCore::Video::get_GetOPFSettingsResult() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SteamCore::Video::get_GetVideoURLResult() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_SteamCore::Video::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.Video");
    return result;
}
bool _Script_SteamCore::Video::IsBroadcasting(int32_t& NumViewers) {
    return;
}
bool _Script_SteamCore::Video::GetOPFStringForApp(int32_t VideoAppID, void*& OutBuffer) {
    return;
}
void _Script_SteamCore::Video::GetVideoURL(int32_t VideoAppID) {
    return;
}
void _Script_SteamCore::Video::GetOPFSettings(int32_t VideoAppID) {
    return;
}
