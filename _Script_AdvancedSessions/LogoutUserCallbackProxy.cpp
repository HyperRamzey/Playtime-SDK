#include "..\FUObjectArray.hpp"
#include "LogoutUserCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
void* _Script_AdvancedSessions::LogoutUserCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AdvancedSessions::LogoutUserCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::LogoutUserCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.LogoutUserCallbackProxy");
    return result;
}
_Script_AdvancedSessions::LogoutUserCallbackProxy* _Script_AdvancedSessions::LogoutUserCallbackProxy::LogoutUser(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController) {
    return;
}
