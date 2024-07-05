#include "..\FUObjectArray.hpp"
#include "AdvancedVoiceLibrary.hpp"
#include "BPUniqueNetId.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_AdvancedSessions::AdvancedVoiceLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.AdvancedVoiceLibrary");
    return result;
}
void _Script_AdvancedSessions::AdvancedVoiceLibrary::UnRegisterAllLocalTalkers() {
    return;
}
bool _Script_AdvancedSessions::AdvancedVoiceLibrary::UnRegisterRemoteTalker(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId) {
    return;
}
void _Script_AdvancedSessions::AdvancedVoiceLibrary::StartNetworkedVoice(void* LocalPlayerNum) {
    return;
}
void _Script_AdvancedSessions::AdvancedVoiceLibrary::UnRegisterLocalTalker(void* LocalPlayerNum) {
    return;
}
bool _Script_AdvancedSessions::AdvancedVoiceLibrary::UnMuteRemoteTalker(void* LocalUserNum, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, bool bIsSystemWide) {
    return;
}
void _Script_AdvancedSessions::AdvancedVoiceLibrary::StopNetworkedVoice(void* LocalPlayerNum) {
    return;
}
void _Script_AdvancedSessions::AdvancedVoiceLibrary::RemoveAllRemoteTalkers() {
    return;
}
bool _Script_AdvancedSessions::AdvancedVoiceLibrary::RegisterRemoteTalker(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId) {
    return;
}
bool _Script_AdvancedSessions::AdvancedVoiceLibrary::RegisterLocalTalker(void* LocalPlayerNum) {
    return;
}
void _Script_AdvancedSessions::AdvancedVoiceLibrary::RegisterAllLocalTalkers() {
    return;
}
bool _Script_AdvancedSessions::AdvancedVoiceLibrary::MuteRemoteTalker(void* LocalUserNum, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, bool bIsSystemWide) {
    return;
}
bool _Script_AdvancedSessions::AdvancedVoiceLibrary::IsRemotePlayerTalking(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId) {
    return;
}
bool _Script_AdvancedSessions::AdvancedVoiceLibrary::IsPlayerMuted(void* LocalUserNumChecking, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId) {
    return;
}
bool _Script_AdvancedSessions::AdvancedVoiceLibrary::IsLocalPlayerTalking(void* LocalPlayerNum) {
    return;
}
void _Script_AdvancedSessions::AdvancedVoiceLibrary::IsHeadsetPresent(bool& bHasHeadset, void* LocalPlayerNum) {
    return;
}
void _Script_AdvancedSessions::AdvancedVoiceLibrary::GetNumLocalTalkers(int32_t& NumLocalTalkers) {
    return;
}
