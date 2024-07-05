#include "..\FUObjectArray.hpp"
#include "BPUniqueNetId.hpp"
#include "FindFriendSessionCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
void* _Script_AdvancedSessions::FindFriendSessionCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AdvancedSessions::FindFriendSessionCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::FindFriendSessionCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.FindFriendSessionCallbackProxy");
    return result;
}
_Script_AdvancedSessions::FindFriendSessionCallbackProxy* _Script_AdvancedSessions::FindFriendSessionCallbackProxy::FindFriendSession(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, _Script_AdvancedSessions::BPUniqueNetId& FriendUniqueNetId) {
    return;
}
