#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGrantPackage.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGrantPackage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGrantPackage* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGrantPackage::GrantPackageAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t PackageId, void* Ipaddress, void* ThirdPartyKey, int32_t ThirdPartyAppId) {
    return;
}
