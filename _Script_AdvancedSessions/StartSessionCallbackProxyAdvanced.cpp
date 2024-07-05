#include "..\FUObjectArray.hpp"
#include "StartSessionCallbackProxyAdvanced.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
void* _Script_AdvancedSessions::StartSessionCallbackProxyAdvanced::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_AdvancedSessions::StartSessionCallbackProxyAdvanced* _Script_AdvancedSessions::StartSessionCallbackProxyAdvanced::StartAdvancedSession(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::StartSessionCallbackProxyAdvanced::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.StartSessionCallbackProxyAdvanced");
    return result;
}
void* _Script_AdvancedSessions::StartSessionCallbackProxyAdvanced::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
