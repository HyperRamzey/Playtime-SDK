#include "..\FUObjectArray.hpp"
#include "AdvancedIdentityLibrary.hpp"
#include "BPUniqueNetId.hpp"
#include "BPUserOnlineAccount.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
void _Script_AdvancedSessions::AdvancedIdentityLibrary::GetUserAccountAttribute(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void* AttributeName, void*& AttributeValue, void*& Result) {
    return;
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::AdvancedIdentityLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.AdvancedIdentityLibrary");
    return result;
}
void _Script_AdvancedSessions::AdvancedIdentityLibrary::GetUserAccountAccessToken(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void*& AccessToken) {
    return;
}
void _Script_AdvancedSessions::AdvancedIdentityLibrary::GetUserAccountDisplayName(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void*& DisplayName) {
    return;
}
void _Script_AdvancedSessions::AdvancedIdentityLibrary::SetUserAccountAttribute(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void* AttributeName, void* NewAttributeValue, void*& Result) {
    return;
}
void _Script_AdvancedSessions::AdvancedIdentityLibrary::GetUserID(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId) {
    return;
}
void _Script_AdvancedSessions::AdvancedIdentityLibrary::GetUserAccountRealName(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void*& UserName) {
    return;
}
void _Script_AdvancedSessions::AdvancedIdentityLibrary::GetUserAccountAuthAttribute(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void* AttributeName, void*& AuthAttribute, void*& Result) {
    return;
}
void _Script_AdvancedSessions::AdvancedIdentityLibrary::GetUserAccount(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, _Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void*& Result) {
    return;
}
void _Script_AdvancedSessions::AdvancedIdentityLibrary::GetPlayerNickname(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, void*& PlayerNickname) {
    return;
}
void _Script_AdvancedSessions::AdvancedIdentityLibrary::GetPlayerAuthToken(_Script_Engine::PlayerController* PlayerController, void*& AuthToken, void*& Result) {
    return;
}
void _Script_AdvancedSessions::AdvancedIdentityLibrary::GetLoginStatus(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, void*& LoginStatus, void*& Result) {
    return;
}
void _Script_AdvancedSessions::AdvancedIdentityLibrary::GetAllUserAccounts(void*& AccountInfos, void*& Result) {
    return;
}
