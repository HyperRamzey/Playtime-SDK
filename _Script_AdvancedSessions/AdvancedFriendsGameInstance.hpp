#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BPUniqueNetId.hpp"
#include "..\_Script_Engine\GameInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
struct BlueprintSessionResult;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct AdvancedFriendsGameInstance : public _Script_Engine::GameInstance {
    private: char pad_1a8[0x80]; public:
    bool get_bCallFriendInterfaceEventsOnPlayerControllers();
    void set_bCallFriendInterfaceEventsOnPlayerControllers(bool value);
    bool get_bCallIdentityInterfaceEventsOnPlayerControllers();
    void set_bCallIdentityInterfaceEventsOnPlayerControllers(bool value);
    bool get_bCallVoiceInterfaceEventsOnPlayerControllers();
    void set_bCallVoiceInterfaceEventsOnPlayerControllers(bool value);
    bool get_bEnableTalkingStatusDelegate();
    void set_bEnableTalkingStatusDelegate(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnSessionInviteReceived(int32_t LocalPlayerNum, _Script_AdvancedSessions::BPUniqueNetId PersonInviting, void* AppID, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionToJoin);
    void OnSessionInviteAccepted(int32_t LocalPlayerNum, _Script_AdvancedSessions::BPUniqueNetId PersonInvited, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionToJoin);
    void OnPlayerTalkingStateChanged(_Script_AdvancedSessions::BPUniqueNetId PlayerID, bool bIsTalking);
    void OnPlayerLoginStatusChanged(int32_t PlayerNum, void* PreviousStatus, void* NewStatus, _Script_AdvancedSessions::BPUniqueNetId NewPlayerUniqueNetID);
    void OnPlayerLoginChanged(int32_t PlayerNum);
}; // Size: 0x228
#pragma pack(pop)
}
