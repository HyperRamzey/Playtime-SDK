#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
#include "SteamCoreWebAsyncAction.hpp"
void* _Script_SteamCoreWeb::SteamCoreWebAsyncAction::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncAction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncAction");
    return result;
}
void _Script_SteamCoreWeb::SteamCoreWebAsyncAction::HandleCallback(void* Data, bool bWasSuccessful) {
    return;
}
