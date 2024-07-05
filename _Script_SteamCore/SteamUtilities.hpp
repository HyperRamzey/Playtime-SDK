#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "HostPingData.hpp"
#include "PublishedFileID.hpp"
#include "SteamGameID.hpp"
#include "SteamID.hpp"
#include "SteamInventoryUpdateHandle.hpp"
#include "SteamItemInstanceID.hpp"
#include "SteamSessionSearchSetting.hpp"
#include "SteamSessionSetting.hpp"
#include "SteamTicketHandle.hpp"
#include "SteamUGCHandle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_SteamCore {
struct ServerFilter;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamUtilities : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool WriteBytesToFile(bool bOverwriteIfExists, void* AbsoluteFilePath, void*& DataBuffer);
    void SteamItemInstanceID_Equals_Exec(_Script_SteamCore::SteamItemInstanceID A, _Script_SteamCore::SteamItemInstanceID B, void*& Result);
    bool SteamItemInstanceID_Equals(_Script_SteamCore::SteamItemInstanceID A, _Script_SteamCore::SteamItemInstanceID B);
    void ReleaseRequest();
    void* ReadFileToBytes(void* AbsoluteFilePath);
    bool PublishedFileID_NotEquals(_Script_SteamCore::PublishedFileID A, _Script_SteamCore::PublishedFileID B);
    void PublishedFileID_Equals_Exec(_Script_SteamCore::PublishedFileID A, _Script_SteamCore::PublishedFileID B, void*& Result);
    bool PublishedFileID_Equals(_Script_SteamCore::PublishedFileID A, _Script_SteamCore::PublishedFileID B);
    bool NotEqual(_Script_SteamCore::SteamID A, _Script_SteamCore::SteamID B);
    _Script_SteamCore::SteamUGCHandle MakeUGCHandle(void* Value);
    _Script_SteamCore::SteamTicketHandle MakeTicketHandle(void* Value);
    _Script_SteamCore::SteamSessionSetting MakeString(void* Value);
    _Script_SteamCore::SteamID MakeSteamID(void* Value);
    _Script_SteamCore::SteamGameID MakeSteamGameID(void* Value);
    _Script_SteamCore::SteamSessionSearchSetting MakeSearchString(void* Value);
    _Script_SteamCore::SteamSessionSearchSetting MakeSearchInteger(void* ComparisonOperator, int32_t Value);
    _Script_SteamCore::SteamSessionSearchSetting MakeSearchBool(bool bValue);
    _Script_SteamCore::PublishedFileID MakePublishedFileID(void* Value);
    _Script_SteamCore::SteamInventoryUpdateHandle MakeInventoryUpdateHandle(void* Value);
    _Script_SteamCore::SteamSessionSetting MakeInteger(int32_t Value);
    _Script_SteamCore::SteamSessionSetting MakeBool(bool bValue);
    void ListenForSteamMessages(void*& Callback);
    bool IsValid(_Script_SteamCore::SteamID SteamID);
    bool IsUsingP2PRelays();
    void IsUGCHandleValid_Exec(_Script_SteamCore::SteamUGCHandle Handle, void*& Result);
    bool IsUGCHandleValid(_Script_SteamCore::SteamUGCHandle Handle);
    void IsSteamTicketHandleValid_Exec(_Script_SteamCore::SteamTicketHandle Handle, void*& Result);
    bool IsSteamTicketHandleValid(_Script_SteamCore::SteamTicketHandle Handle);
    bool IsSteamServerInitialized();
    void IsSteamInventoryUpdateHandleValid_Exec(_Script_SteamCore::SteamInventoryUpdateHandle Handle, void*& Result);
    bool IsSteamInventoryUpdateHandleValid(_Script_SteamCore::SteamInventoryUpdateHandle Handle);
    void IsSteamIDValid_Exec(_Script_SteamCore::SteamID SteamID, void*& Result);
    bool IsSteamAvailable();
    bool IsRecalculatingPing();
    void IsPublishedFileIDValid_Exec(_Script_SteamCore::PublishedFileID Handle, void*& Result);
    bool IsPublishedFileIDValid(_Script_SteamCore::PublishedFileID PublishedFileID);
    bool IsLobby(_Script_SteamCore::SteamID SteamID);
    void IsGameIDValid_Exec(_Script_SteamCore::SteamGameID GameID, void*& Result);
    bool IsGameIDValid(_Script_SteamCore::SteamGameID GameID);
    void* GetType(_Script_SteamCore::SteamSessionSetting Settings);
    bool GetString(_Script_SteamCore::SteamSessionSetting Settings, void*& Key, void*& OutValue);
    _Script_SteamCore::SteamID GetSteamIdFromPlayerState(_Script_Engine::PlayerState* PlayerState);
    void GetPublicIp(void*& Callback);
    int32_t GetPingFromHostData(_Script_SteamCore::HostPingData& Data);
    bool GetInteger(_Script_SteamCore::SteamSessionSetting Settings, void*& Key, int32_t& OutValue);
    _Script_SteamCore::HostPingData GetHostPingData();
    bool GetBool(_Script_SteamCore::SteamSessionSetting Settings, void*& Key, bool& OutValue);
    void* GetAccountType(_Script_SteamCore::SteamID SteamID);
    _Script_CoreUObject::DateTime FromUnixTimestamp(void* Timestamp);
    void Equal_Exec(_Script_SteamCore::SteamID A, _Script_SteamCore::SteamID B, void*& Result);
    bool Equal(_Script_SteamCore::SteamID A, _Script_SteamCore::SteamID B);
    void* EncryptString(void* String);
    _Script_SteamCore::ServerFilter* ConstructServerFilter(_Script_CoreUObject::Object* WorldContextObject);
    void CancelQuery();
    void* BreakUGCHandle(_Script_SteamCore::SteamUGCHandle Handle);
    void* BreakTicketHandle(_Script_SteamCore::SteamTicketHandle Handle);
    void* BreakSteamID(_Script_SteamCore::SteamID SteamID);
    void* BreakSteamGameID(_Script_SteamCore::SteamGameID SteamID);
    void* BreakPublishedFileID(_Script_SteamCore::PublishedFileID FileID);
    void* BreakInventoryUpdateHandle(_Script_SteamCore::SteamInventoryUpdateHandle Handle);
    void* BP_StringToBytes(void* String);
    void* BP_BytesToString(void* Array);
}; // Size: 0x28
#pragma pack(pop)
}
