#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionSubmitItemUpdate.hpp"
#include "SubmitItemUpdateResult.hpp"
#include "UGCUpdateHandle.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionSubmitItemUpdate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate");
    return result;
}
void* _Script_SteamCore::SteamCoreUGCAsyncActionSubmitItemUpdate::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_SteamCore::SteamCoreUGCAsyncActionSubmitItemUpdate* _Script_SteamCore::SteamCoreUGCAsyncActionSubmitItemUpdate::SubmitItemUpdateAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::UGCUpdateHandle Handle, void* ChangeNote, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionSubmitItemUpdate::HandleCallback(_Script_SteamCore::SubmitItemUpdateResult& Data, bool bWasSuccessful) {
    return;
}
