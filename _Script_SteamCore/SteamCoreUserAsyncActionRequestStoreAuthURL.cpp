#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserAsyncActionRequestStoreAuthURL.hpp"
#include "StoreAuthURLResponse.hpp"
void* _Script_SteamCore::SteamCoreUserAsyncActionRequestStoreAuthURL::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserAsyncActionRequestStoreAuthURL::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL");
    return result;
}
_Script_SteamCore::SteamCoreUserAsyncActionRequestStoreAuthURL* _Script_SteamCore::SteamCoreUserAsyncActionRequestStoreAuthURL::RequestStoreAuthURLAsync(_Script_CoreUObject::Object* WorldContextObject, void* RedirectURL, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreUserAsyncActionRequestStoreAuthURL::HandleCallback(_Script_SteamCore::StoreAuthURLResponse& Data, bool bWasSuccessful) {
    return;
}
