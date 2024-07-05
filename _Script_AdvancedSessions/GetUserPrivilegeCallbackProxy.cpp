#include "..\FUObjectArray.hpp"
#include "BPUniqueNetId.hpp"
#include "GetUserPrivilegeCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
void* _Script_AdvancedSessions::GetUserPrivilegeCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_AdvancedSessions::GetUserPrivilegeCallbackProxy* _Script_AdvancedSessions::GetUserPrivilegeCallbackProxy::GetUserPrivilege(_Script_CoreUObject::Object* WorldContextObject, void*& PrivilegeToCheck, _Script_AdvancedSessions::BPUniqueNetId& PlayerUniqueNetID) {
    return;
}
void* _Script_AdvancedSessions::GetUserPrivilegeCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::GetUserPrivilegeCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.GetUserPrivilegeCallbackProxy");
    return result;
}
