#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BPUniqueNetId.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
struct BlueprintSessionResult;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct AdvancedFriendsInterface : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void OnSessionInviteReceived(_Script_AdvancedSessions::BPUniqueNetId PersonInviting, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SearchResult);
    void OnSessionInviteAccepted(_Script_AdvancedSessions::BPUniqueNetId PersonInvited, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SearchResult);
    void OnPlayerVoiceStateChanged(_Script_AdvancedSessions::BPUniqueNetId PlayerID, bool bIsTalking);
    void OnPlayerLoginStatusChanged(void* PreviousStatus, void* NewStatus, _Script_AdvancedSessions::BPUniqueNetId PlayerUniqueNetID);
    void OnPlayerLoginChanged(int32_t PlayerNum);
}; // Size: 0x28
#pragma pack(pop)
}
