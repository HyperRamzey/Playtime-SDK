#include "..\FUObjectArray.hpp"
#include "CancelFindSessionsCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
void* _Script_AdvancedSessions::CancelFindSessionsCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AdvancedSessions::CancelFindSessionsCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::CancelFindSessionsCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.CancelFindSessionsCallbackProxy");
    return result;
}
_Script_AdvancedSessions::CancelFindSessionsCallbackProxy* _Script_AdvancedSessions::CancelFindSessionsCallbackProxy::CancelFindSessions(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController) {
    return;
}