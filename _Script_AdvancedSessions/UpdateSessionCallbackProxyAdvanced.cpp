#include "..\FUObjectArray.hpp"
#include "UpdateSessionCallbackProxyAdvanced.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
void* _Script_AdvancedSessions::UpdateSessionCallbackProxyAdvanced::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AdvancedSessions::UpdateSessionCallbackProxyAdvanced::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::UpdateSessionCallbackProxyAdvanced::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.UpdateSessionCallbackProxyAdvanced");
    return result;
}
_Script_AdvancedSessions::UpdateSessionCallbackProxyAdvanced* _Script_AdvancedSessions::UpdateSessionCallbackProxyAdvanced::UpdateSession(_Script_CoreUObject::Object* WorldContextObject, void*& ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer) {
    return;
}
