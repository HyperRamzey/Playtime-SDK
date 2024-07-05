#include "..\FUObjectArray.hpp"
#include "..\_Script_AdvancedSessions\BPUniqueNetId.hpp"
#include "AdvancedSteamFriendsLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
_Script_CoreUObject::Class* _Script_AdvancedSteamSessions::AdvancedSteamFriendsLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary");
    return result;
}
bool _Script_AdvancedSteamSessions::AdvancedSteamFriendsLibrary::RequestSteamFriendInfo(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId, bool bRequireNameOnly) {
    return;
}
_Script_AdvancedSessions::BPUniqueNetId _Script_AdvancedSteamSessions::AdvancedSteamFriendsLibrary::GetLocalSteamIDFromSteam() {
    return;
}
bool _Script_AdvancedSteamSessions::AdvancedSteamFriendsLibrary::OpenSteamUserOverlay(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId, void* DialogType) {
    return;
}
void _Script_AdvancedSteamSessions::AdvancedSteamFriendsLibrary::GetSteamGroups(void*& SteamGroups) {
    return;
}
void* _Script_AdvancedSteamSessions::AdvancedSteamFriendsLibrary::GetSteamPersonaName(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId) {
    return;
}
void _Script_AdvancedSteamSessions::AdvancedSteamFriendsLibrary::GetSteamFriendGamePlayed(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId, void*& Result, int32_t& AppID) {
    return;
}
_Script_Engine::Texture2D* _Script_AdvancedSteamSessions::AdvancedSteamFriendsLibrary::GetSteamFriendAvatar(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId, void*& Result, void* AvatarSize) {
    return;
}
int32_t _Script_AdvancedSteamSessions::AdvancedSteamFriendsLibrary::GetFriendSteamLevel(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId) {
    return;
}
_Script_AdvancedSessions::BPUniqueNetId _Script_AdvancedSteamSessions::AdvancedSteamFriendsLibrary::CreateSteamIDFromString(void* SteamID64) {
    return;
}
