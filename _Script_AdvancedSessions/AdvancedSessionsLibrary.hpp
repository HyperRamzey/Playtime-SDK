#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SessionPropertyKeyPair.hpp"
#include "SessionsSearchSetting.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_OnlineSubsystemUtils\BlueprintSessionResult.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AdvancedSessions {
struct BPUniqueNetId;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct AdvancedSessionsLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UniqueNetIdToString(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, void*& String);
    void SetPlayerName(_Script_Engine::PlayerController* PlayerController, void* PlayerName);
    _Script_AdvancedSessions::SessionsSearchSetting MakeLiteralSessionSearchProperty(_Script_AdvancedSessions::SessionPropertyKeyPair SessionSearchProperty, void* ComparisonOp);
    _Script_AdvancedSessions::SessionPropertyKeyPair MakeLiteralSessionPropertyString(void* Key, void* Value);
    _Script_AdvancedSessions::SessionPropertyKeyPair MakeLiteralSessionPropertyInt(void* Key, int32_t Value);
    _Script_AdvancedSessions::SessionPropertyKeyPair MakeLiteralSessionPropertyFloat(void* Key, float Value);
    _Script_AdvancedSessions::SessionPropertyKeyPair MakeLiteralSessionPropertyByte(void* Key, void* Value);
    _Script_AdvancedSessions::SessionPropertyKeyPair MakeLiteralSessionPropertyBool(void* Key, bool Value);
    bool KickPlayer(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerToKick, void* KickReason);
    bool IsValidUniqueNetID(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId);
    bool IsValidSession(_Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionResult);
    void IsPlayerInSession(_Script_CoreUObject::Object* WorldContextObject, _Script_AdvancedSessions::BPUniqueNetId& PlayerToCheck, bool& bIsInSession);
    bool HasOnlineSubsystem(void* SubSystemName);
    void GetUniqueNetIDFromPlayerState(_Script_Engine::PlayerState* PlayerState, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId);
    void GetUniqueNetID(_Script_Engine::PlayerController* PlayerController, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId);
    void GetUniqueBuildID(_Script_OnlineSubsystemUtils::BlueprintSessionResult SessionResult, int32_t& UniqueBuildId);
    void GetSessionState(_Script_CoreUObject::Object* WorldContextObject, void*& SessionState);
    void GetSessionSettings(_Script_CoreUObject::Object* WorldContextObject, int32_t& NumConnections, int32_t& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32_t& BuildUniqueID, void*& ExtraSettings, void*& Result);
    void GetSessionPropertyString(void*& ExtraSettings, void* SettingName, void*& SearchResult, void*& SettingValue);
    void* GetSessionPropertyKey(_Script_AdvancedSessions::SessionPropertyKeyPair& SessionProperty);
    void GetSessionPropertyInt(void*& ExtraSettings, void* SettingName, void*& SearchResult, int32_t& SettingValue);
    void GetSessionPropertyFloat(void*& ExtraSettings, void* SettingName, void*& SearchResult, float& SettingValue);
    void GetSessionPropertyByte(void*& ExtraSettings, void* SettingName, void*& SearchResult, void*& SettingValue);
    void GetSessionPropertyBool(void*& ExtraSettings, void* SettingName, void*& SearchResult, bool& SettingValue);
    void GetSessionID_AsString(_Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionResult, void*& SessionID);
    void GetPlayerName(_Script_Engine::PlayerController* PlayerController, void*& PlayerName);
    void GetNumberOfNetworkPlayers(_Script_CoreUObject::Object* WorldContextObject, int32_t& NumNetPlayers);
    void GetNetPlayerIndex(_Script_Engine::PlayerController* PlayerController, int32_t& NetPlayerIndex);
    void GetExtraSettings(_Script_OnlineSubsystemUtils::BlueprintSessionResult SessionResult, void*& ExtraSettings);
    void GetCurrentUniqueBuildID(int32_t& UniqueBuildId);
    void GetCurrentSessionID_AsString(_Script_CoreUObject::Object* WorldContextObject, void*& SessionID);
    void FindSessionPropertyIndexByName(void*& ExtraSettings, void* SettingName, void*& Result, int32_t& OutIndex);
    void FindSessionPropertyByName(void*& ExtraSettings, void* SettingsName, void*& Result, _Script_AdvancedSessions::SessionPropertyKeyPair& OutProperty);
    bool EqualEqual_UNetIDUnetID(_Script_AdvancedSessions::BPUniqueNetId& A, _Script_AdvancedSessions::BPUniqueNetId& B);
    bool BanPlayer(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerToBan, void* BanReason);
    void AddOrModifyExtraSettings(void*& SettingsArray, void*& NewOrChangedSettings, void*& ModifiedSettingsArray);
}; // Size: 0x28
#pragma pack(pop)
}
