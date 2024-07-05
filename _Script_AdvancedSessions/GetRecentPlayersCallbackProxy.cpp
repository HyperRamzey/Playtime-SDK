#include "..\FUObjectArray.hpp"
#include "BPUniqueNetId.hpp"
#include "GetRecentPlayersCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
void* _Script_AdvancedSessions::GetRecentPlayersCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AdvancedSessions::GetRecentPlayersCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::GetRecentPlayersCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.GetRecentPlayersCallbackProxy");
    return result;
}
_Script_AdvancedSessions::GetRecentPlayersCallbackProxy* _Script_AdvancedSessions::GetRecentPlayersCallbackProxy::GetAndStoreRecentPlayersList(_Script_CoreUObject::Object* WorldContextObject, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId) {
    return;
}
