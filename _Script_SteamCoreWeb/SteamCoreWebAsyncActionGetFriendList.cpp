#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetFriendList.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetFriendList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetFriendList* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetFriendList::GetFriendListAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, void* Relationship) {
    return;
}
