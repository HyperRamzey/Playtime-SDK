#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionAdjustAgreement.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionAdjustAgreement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionAdjustAgreement* _Script_SteamCoreWeb::SteamCoreWebAsyncActionAdjustAgreement::AdjustAgreementAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, void* AgreementId, int32_t AppID, void* NextProcessDate) {
    return;
}
