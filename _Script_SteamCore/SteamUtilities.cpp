#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\PlayerState.hpp"
#include "HostPingData.hpp"
#include "PublishedFileID.hpp"
#include "ServerFilter.hpp"
#include "SteamGameID.hpp"
#include "SteamID.hpp"
#include "SteamInventoryUpdateHandle.hpp"
#include "SteamItemInstanceID.hpp"
#include "SteamSessionSearchSetting.hpp"
#include "SteamSessionSetting.hpp"
#include "SteamTicketHandle.hpp"
#include "SteamUGCHandle.hpp"
#include "SteamUtilities.hpp"
void _Script_SteamCore::SteamUtilities::IsSteamIDValid_Exec(_Script_SteamCore::SteamID SteamID, void*& Result) {
    return;
}
bool _Script_SteamCore::SteamUtilities::SteamItemInstanceID_Equals(_Script_SteamCore::SteamItemInstanceID A, _Script_SteamCore::SteamItemInstanceID B) {
    return;
}
void _Script_SteamCore::SteamUtilities::PublishedFileID_Equals_Exec(_Script_SteamCore::PublishedFileID A, _Script_SteamCore::PublishedFileID B, void*& Result) {
    return;
}
bool _Script_SteamCore::SteamUtilities::PublishedFileID_NotEquals(_Script_SteamCore::PublishedFileID A, _Script_SteamCore::PublishedFileID B) {
    return;
}
bool _Script_SteamCore::SteamUtilities::WriteBytesToFile(bool bOverwriteIfExists, void* AbsoluteFilePath, void*& DataBuffer) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamUtilities::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamUtilities");
    return result;
}
int32_t _Script_SteamCore::SteamUtilities::GetPingFromHostData(_Script_SteamCore::HostPingData& Data) {
    return;
}
void _Script_SteamCore::SteamUtilities::IsGameIDValid_Exec(_Script_SteamCore::SteamGameID GameID, void*& Result) {
    return;
}
void _Script_SteamCore::SteamUtilities::SteamItemInstanceID_Equals_Exec(_Script_SteamCore::SteamItemInstanceID A, _Script_SteamCore::SteamItemInstanceID B, void*& Result) {
    return;
}
void _Script_SteamCore::SteamUtilities::ReleaseRequest() {
    return;
}
_Script_SteamCore::SteamSessionSetting _Script_SteamCore::SteamUtilities::MakeInteger(int32_t Value) {
    return;
}
void* _Script_SteamCore::SteamUtilities::ReadFileToBytes(void* AbsoluteFilePath) {
    return;
}
bool _Script_SteamCore::SteamUtilities::PublishedFileID_Equals(_Script_SteamCore::PublishedFileID A, _Script_SteamCore::PublishedFileID B) {
    return;
}
void _Script_SteamCore::SteamUtilities::Equal_Exec(_Script_SteamCore::SteamID A, _Script_SteamCore::SteamID B, void*& Result) {
    return;
}
bool _Script_SteamCore::SteamUtilities::IsGameIDValid(_Script_SteamCore::SteamGameID GameID) {
    return;
}
bool _Script_SteamCore::SteamUtilities::NotEqual(_Script_SteamCore::SteamID A, _Script_SteamCore::SteamID B) {
    return;
}
_Script_SteamCore::SteamSessionSearchSetting _Script_SteamCore::SteamUtilities::MakeSearchString(void* Value) {
    return;
}
_Script_SteamCore::SteamUGCHandle _Script_SteamCore::SteamUtilities::MakeUGCHandle(void* Value) {
    return;
}
_Script_SteamCore::SteamTicketHandle _Script_SteamCore::SteamUtilities::MakeTicketHandle(void* Value) {
    return;
}
_Script_SteamCore::SteamSessionSetting _Script_SteamCore::SteamUtilities::MakeString(void* Value) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::SteamUtilities::MakeSteamID(void* Value) {
    return;
}
void _Script_SteamCore::SteamUtilities::GetPublicIp(void*& Callback) {
    return;
}
_Script_SteamCore::SteamGameID _Script_SteamCore::SteamUtilities::MakeSteamGameID(void* Value) {
    return;
}
_Script_SteamCore::SteamSessionSearchSetting _Script_SteamCore::SteamUtilities::MakeSearchInteger(void* ComparisonOperator, int32_t Value) {
    return;
}
void _Script_SteamCore::SteamUtilities::CancelQuery() {
    return;
}
bool _Script_SteamCore::SteamUtilities::IsPublishedFileIDValid(_Script_SteamCore::PublishedFileID PublishedFileID) {
    return;
}
_Script_SteamCore::SteamSessionSearchSetting _Script_SteamCore::SteamUtilities::MakeSearchBool(bool bValue) {
    return;
}
bool _Script_SteamCore::SteamUtilities::GetInteger(_Script_SteamCore::SteamSessionSetting Settings, void*& Key, int32_t& OutValue) {
    return;
}
_Script_SteamCore::PublishedFileID _Script_SteamCore::SteamUtilities::MakePublishedFileID(void* Value) {
    return;
}
_Script_SteamCore::SteamInventoryUpdateHandle _Script_SteamCore::SteamUtilities::MakeInventoryUpdateHandle(void* Value) {
    return;
}
_Script_SteamCore::SteamSessionSetting _Script_SteamCore::SteamUtilities::MakeBool(bool bValue) {
    return;
}
void _Script_SteamCore::SteamUtilities::ListenForSteamMessages(void*& Callback) {
    return;
}
bool _Script_SteamCore::SteamUtilities::IsValid(_Script_SteamCore::SteamID SteamID) {
    return;
}
bool _Script_SteamCore::SteamUtilities::IsUsingP2PRelays() {
    return;
}
void _Script_SteamCore::SteamUtilities::IsUGCHandleValid_Exec(_Script_SteamCore::SteamUGCHandle Handle, void*& Result) {
    return;
}
bool _Script_SteamCore::SteamUtilities::IsSteamServerInitialized() {
    return;
}
bool _Script_SteamCore::SteamUtilities::IsUGCHandleValid(_Script_SteamCore::SteamUGCHandle Handle) {
    return;
}
void _Script_SteamCore::SteamUtilities::IsSteamTicketHandleValid_Exec(_Script_SteamCore::SteamTicketHandle Handle, void*& Result) {
    return;
}
bool _Script_SteamCore::SteamUtilities::IsSteamTicketHandleValid(_Script_SteamCore::SteamTicketHandle Handle) {
    return;
}
_Script_CoreUObject::DateTime _Script_SteamCore::SteamUtilities::FromUnixTimestamp(void* Timestamp) {
    return;
}
void _Script_SteamCore::SteamUtilities::IsSteamInventoryUpdateHandleValid_Exec(_Script_SteamCore::SteamInventoryUpdateHandle Handle, void*& Result) {
    return;
}
bool _Script_SteamCore::SteamUtilities::IsSteamInventoryUpdateHandleValid(_Script_SteamCore::SteamInventoryUpdateHandle Handle) {
    return;
}
bool _Script_SteamCore::SteamUtilities::IsSteamAvailable() {
    return;
}
bool _Script_SteamCore::SteamUtilities::GetString(_Script_SteamCore::SteamSessionSetting Settings, void*& Key, void*& OutValue) {
    return;
}
bool _Script_SteamCore::SteamUtilities::IsRecalculatingPing() {
    return;
}
void _Script_SteamCore::SteamUtilities::IsPublishedFileIDValid_Exec(_Script_SteamCore::PublishedFileID Handle, void*& Result) {
    return;
}
bool _Script_SteamCore::SteamUtilities::IsLobby(_Script_SteamCore::SteamID SteamID) {
    return;
}
void* _Script_SteamCore::SteamUtilities::GetType(_Script_SteamCore::SteamSessionSetting Settings) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::SteamUtilities::GetSteamIdFromPlayerState(_Script_Engine::PlayerState* PlayerState) {
    return;
}
void* _Script_SteamCore::SteamUtilities::GetAccountType(_Script_SteamCore::SteamID SteamID) {
    return;
}
_Script_SteamCore::HostPingData _Script_SteamCore::SteamUtilities::GetHostPingData() {
    return;
}
bool _Script_SteamCore::SteamUtilities::GetBool(_Script_SteamCore::SteamSessionSetting Settings, void*& Key, bool& OutValue) {
    return;
}
bool _Script_SteamCore::SteamUtilities::Equal(_Script_SteamCore::SteamID A, _Script_SteamCore::SteamID B) {
    return;
}
void* _Script_SteamCore::SteamUtilities::EncryptString(void* String) {
    return;
}
_Script_SteamCore::ServerFilter* _Script_SteamCore::SteamUtilities::ConstructServerFilter(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void* _Script_SteamCore::SteamUtilities::BreakUGCHandle(_Script_SteamCore::SteamUGCHandle Handle) {
    return;
}
void* _Script_SteamCore::SteamUtilities::BreakSteamGameID(_Script_SteamCore::SteamGameID SteamID) {
    return;
}
void* _Script_SteamCore::SteamUtilities::BreakTicketHandle(_Script_SteamCore::SteamTicketHandle Handle) {
    return;
}
void* _Script_SteamCore::SteamUtilities::BreakSteamID(_Script_SteamCore::SteamID SteamID) {
    return;
}
void* _Script_SteamCore::SteamUtilities::BreakPublishedFileID(_Script_SteamCore::PublishedFileID FileID) {
    return;
}
void* _Script_SteamCore::SteamUtilities::BreakInventoryUpdateHandle(_Script_SteamCore::SteamInventoryUpdateHandle Handle) {
    return;
}
void* _Script_SteamCore::SteamUtilities::BP_StringToBytes(void* String) {
    return;
}
void* _Script_SteamCore::SteamUtilities::BP_BytesToString(void* Array) {
    return;
}
