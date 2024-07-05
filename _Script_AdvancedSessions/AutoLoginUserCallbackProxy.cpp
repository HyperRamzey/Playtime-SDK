#include "..\FUObjectArray.hpp"
#include "AutoLoginUserCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
void* _Script_AdvancedSessions::AutoLoginUserCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AdvancedSessions::AutoLoginUserCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::AutoLoginUserCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.AutoLoginUserCallbackProxy");
    return result;
}
_Script_AdvancedSessions::AutoLoginUserCallbackProxy* _Script_AdvancedSessions::AutoLoginUserCallbackProxy::AutoLoginUser(_Script_CoreUObject::Object* WorldContextObject, int32_t LocalUserNum) {
    return;
}
