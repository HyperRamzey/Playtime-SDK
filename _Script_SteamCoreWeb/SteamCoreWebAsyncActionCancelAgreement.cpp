#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionCancelAgreement.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionCancelAgreement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionCancelAgreement* _Script_SteamCoreWeb::SteamCoreWebAsyncActionCancelAgreement::CancelAgreementAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, void* AgreementId, int32_t AppID) {
    return;
}
