#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionAuthenticateUser.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionAuthenticateUser::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionAuthenticateUser* _Script_SteamCoreWeb::SteamCoreWebAsyncActionAuthenticateUser::AuthenticateUserAsync(_Script_CoreUObject::Object* WorldContextObject, void* SteamID, void* SessionKey, void* EncryptedLoginKey) {
    return;
}
