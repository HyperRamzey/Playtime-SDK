#include "..\FUObjectArray.hpp"
#include "FindSessionsCallbackProxyAdvanced.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
void* _Script_AdvancedSessions::FindSessionsCallbackProxyAdvanced::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AdvancedSessions::FindSessionsCallbackProxyAdvanced::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::FindSessionsCallbackProxyAdvanced::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.FindSessionsCallbackProxyAdvanced");
    return result;
}
_Script_AdvancedSessions::FindSessionsCallbackProxyAdvanced* _Script_AdvancedSessions::FindSessionsCallbackProxyAdvanced::FindSessionsAdvanced(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, void* ServerTypeToSearch, void*& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, int32_t MinSlotsAvailable) {
    return;
}
void _Script_AdvancedSessions::FindSessionsCallbackProxyAdvanced::FilterSessionResults(void*& SessionResults, void*& Filters, void*& FilteredResults) {
    return;
}
