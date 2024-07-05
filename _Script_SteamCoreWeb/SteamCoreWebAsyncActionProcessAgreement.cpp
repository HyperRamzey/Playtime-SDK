#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionProcessAgreement.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionProcessAgreement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionProcessAgreement* _Script_SteamCoreWeb::SteamCoreWebAsyncActionProcessAgreement::ProcessAgreementAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* OrderId, void* SteamID, void* AgreementId, int32_t AppID, int32_t Amount, void* Currency) {
    return;
}
