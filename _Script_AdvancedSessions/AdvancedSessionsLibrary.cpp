#include "..\FUObjectArray.hpp"
#include "AdvancedSessionsLibrary.hpp"
#include "BPUniqueNetId.hpp"
#include "SessionPropertyKeyPair.hpp"
#include "SessionsSearchSetting.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\PlayerState.hpp"
#include "..\_Script_OnlineSubsystemUtils\BlueprintSessionResult.hpp"
_Script_CoreUObject::Class* _Script_AdvancedSessions::AdvancedSessionsLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.AdvancedSessionsLibrary");
    return result;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetCurrentSessionID_AsString(_Script_CoreUObject::Object* WorldContextObject, void*& SessionID) {
    return;
}
_Script_AdvancedSessions::SessionPropertyKeyPair _Script_AdvancedSessions::AdvancedSessionsLibrary::MakeLiteralSessionPropertyByte(void* Key, void* Value) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::UniqueNetIdToString(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, void*& String) {
    return;
}
_Script_AdvancedSessions::SessionsSearchSetting _Script_AdvancedSessions::AdvancedSessionsLibrary::MakeLiteralSessionSearchProperty(_Script_AdvancedSessions::SessionPropertyKeyPair SessionSearchProperty, void* ComparisonOp) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::SetPlayerName(_Script_Engine::PlayerController* PlayerController, void* PlayerName) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetSessionPropertyBool(void*& ExtraSettings, void* SettingName, void*& SearchResult, bool& SettingValue) {
    return;
}
_Script_AdvancedSessions::SessionPropertyKeyPair _Script_AdvancedSessions::AdvancedSessionsLibrary::MakeLiteralSessionPropertyString(void* Key, void* Value) {
    return;
}
_Script_AdvancedSessions::SessionPropertyKeyPair _Script_AdvancedSessions::AdvancedSessionsLibrary::MakeLiteralSessionPropertyFloat(void* Key, float Value) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetNetPlayerIndex(_Script_Engine::PlayerController* PlayerController, int32_t& NetPlayerIndex) {
    return;
}
_Script_AdvancedSessions::SessionPropertyKeyPair _Script_AdvancedSessions::AdvancedSessionsLibrary::MakeLiteralSessionPropertyInt(void* Key, int32_t Value) {
    return;
}
_Script_AdvancedSessions::SessionPropertyKeyPair _Script_AdvancedSessions::AdvancedSessionsLibrary::MakeLiteralSessionPropertyBool(void* Key, bool Value) {
    return;
}
bool _Script_AdvancedSessions::AdvancedSessionsLibrary::KickPlayer(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerToKick, void* KickReason) {
    return;
}
bool _Script_AdvancedSessions::AdvancedSessionsLibrary::IsValidUniqueNetID(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId) {
    return;
}
bool _Script_AdvancedSessions::AdvancedSessionsLibrary::IsValidSession(_Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionResult) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::IsPlayerInSession(_Script_CoreUObject::Object* WorldContextObject, _Script_AdvancedSessions::BPUniqueNetId& PlayerToCheck, bool& bIsInSession) {
    return;
}
bool _Script_AdvancedSessions::AdvancedSessionsLibrary::HasOnlineSubsystem(void* SubSystemName) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetUniqueNetIDFromPlayerState(_Script_Engine::PlayerState* PlayerState, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetUniqueNetID(_Script_Engine::PlayerController* PlayerController, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetUniqueBuildID(_Script_OnlineSubsystemUtils::BlueprintSessionResult SessionResult, int32_t& UniqueBuildId) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetSessionState(_Script_CoreUObject::Object* WorldContextObject, void*& SessionState) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::AddOrModifyExtraSettings(void*& SettingsArray, void*& NewOrChangedSettings, void*& ModifiedSettingsArray) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetSessionSettings(_Script_CoreUObject::Object* WorldContextObject, int32_t& NumConnections, int32_t& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32_t& BuildUniqueID, void*& ExtraSettings, void*& Result) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetSessionPropertyString(void*& ExtraSettings, void* SettingName, void*& SearchResult, void*& SettingValue) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetPlayerName(_Script_Engine::PlayerController* PlayerController, void*& PlayerName) {
    return;
}
void* _Script_AdvancedSessions::AdvancedSessionsLibrary::GetSessionPropertyKey(_Script_AdvancedSessions::SessionPropertyKeyPair& SessionProperty) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetSessionPropertyInt(void*& ExtraSettings, void* SettingName, void*& SearchResult, int32_t& SettingValue) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetSessionPropertyFloat(void*& ExtraSettings, void* SettingName, void*& SearchResult, float& SettingValue) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetSessionPropertyByte(void*& ExtraSettings, void* SettingName, void*& SearchResult, void*& SettingValue) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetSessionID_AsString(_Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionResult, void*& SessionID) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetNumberOfNetworkPlayers(_Script_CoreUObject::Object* WorldContextObject, int32_t& NumNetPlayers) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetExtraSettings(_Script_OnlineSubsystemUtils::BlueprintSessionResult SessionResult, void*& ExtraSettings) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::GetCurrentUniqueBuildID(int32_t& UniqueBuildId) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::FindSessionPropertyIndexByName(void*& ExtraSettings, void* SettingName, void*& Result, int32_t& OutIndex) {
    return;
}
void _Script_AdvancedSessions::AdvancedSessionsLibrary::FindSessionPropertyByName(void*& ExtraSettings, void* SettingsName, void*& Result, _Script_AdvancedSessions::SessionPropertyKeyPair& OutProperty) {
    return;
}
bool _Script_AdvancedSessions::AdvancedSessionsLibrary::EqualEqual_UNetIDUnetID(_Script_AdvancedSessions::BPUniqueNetId& A, _Script_AdvancedSessions::BPUniqueNetId& B) {
    return;
}
bool _Script_AdvancedSessions::AdvancedSessionsLibrary::BanPlayer(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerToBan, void* BanReason) {
    return;
}
