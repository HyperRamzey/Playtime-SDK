#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionSendQueryUGCRequest.hpp"
#include "SteamUGCQueryCompleted.hpp"
#include "UGCQueryHandle.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionSendQueryUGCRequest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest");
    return result;
}
void* _Script_SteamCore::SteamCoreUGCAsyncActionSendQueryUGCRequest::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_SteamCore::SteamCoreUGCAsyncActionSendQueryUGCRequest* _Script_SteamCore::SteamCoreUGCAsyncActionSendQueryUGCRequest::SendQueryUGCRequestAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::UGCQueryHandle Handle, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionSendQueryUGCRequest::HandleCallback(_Script_SteamCore::SteamUGCQueryCompleted& Data, bool bWasSuccessful) {
    return;
}
