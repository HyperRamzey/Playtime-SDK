#include "..\FUObjectArray.hpp"
#include "EndSessionCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
void* _Script_AdvancedSessions::EndSessionCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::EndSessionCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.EndSessionCallbackProxy");
    return result;
}
void* _Script_AdvancedSessions::EndSessionCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_AdvancedSessions::EndSessionCallbackProxy* _Script_AdvancedSessions::EndSessionCallbackProxy::EndSession(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController) {
    return;
}
