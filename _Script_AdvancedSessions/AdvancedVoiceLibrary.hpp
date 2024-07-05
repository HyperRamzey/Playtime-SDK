#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AdvancedSessions {
struct BPUniqueNetId;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct AdvancedVoiceLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool UnRegisterRemoteTalker(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId);
    void UnRegisterLocalTalker(void* LocalPlayerNum);
    void UnRegisterAllLocalTalkers();
    bool UnMuteRemoteTalker(void* LocalUserNum, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, bool bIsSystemWide);
    void StopNetworkedVoice(void* LocalPlayerNum);
    void StartNetworkedVoice(void* LocalPlayerNum);
    void RemoveAllRemoteTalkers();
    bool RegisterRemoteTalker(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId);
    bool RegisterLocalTalker(void* LocalPlayerNum);
    void RegisterAllLocalTalkers();
    bool MuteRemoteTalker(void* LocalUserNum, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, bool bIsSystemWide);
    bool IsRemotePlayerTalking(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId);
    bool IsPlayerMuted(void* LocalUserNumChecking, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId);
    bool IsLocalPlayerTalking(void* LocalPlayerNum);
    void IsHeadsetPresent(bool& bHasHeadset, void* LocalPlayerNum);
    void GetNumLocalTalkers(int32_t& NumLocalTalkers);
}; // Size: 0x28
#pragma pack(pop)
}
