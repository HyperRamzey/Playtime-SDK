#include "..\FUObjectArray.hpp"
#include "LoginUserCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
void* _Script_AdvancedSessions::LoginUserCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AdvancedSessions::LoginUserCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::LoginUserCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.LoginUserCallbackProxy");
    return result;
}
_Script_AdvancedSessions::LoginUserCallbackProxy* _Script_AdvancedSessions::LoginUserCallbackProxy::LoginUser(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* UserID, void* UserToken) {
    return;
}
