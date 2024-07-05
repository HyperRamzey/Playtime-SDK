#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionResolveVanityURL.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionResolveVanityURL::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionResolveVanityURL* _Script_SteamCoreWeb::SteamCoreWebAsyncActionResolveVanityURL::ResolveVanityURLAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* VanityURL, void* URLType) {
    return;
}
