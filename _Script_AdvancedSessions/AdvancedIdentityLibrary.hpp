#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AdvancedSessions {
struct BPUserOnlineAccount;
}
namespace _Script_AdvancedSessions {
struct BPUniqueNetId;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct AdvancedIdentityLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetUserAccountAttribute(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void* AttributeName, void* NewAttributeValue, void*& Result);
    void GetUserID(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, _Script_AdvancedSessions::BPUniqueNetId& UniqueNetId);
    void GetUserAccountRealName(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void*& UserName);
    void GetUserAccountDisplayName(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void*& DisplayName);
    void GetUserAccountAuthAttribute(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void* AttributeName, void*& AuthAttribute, void*& Result);
    void GetUserAccountAttribute(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void* AttributeName, void*& AttributeValue, void*& Result);
    void GetUserAccountAccessToken(_Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void*& AccessToken);
    void GetUserAccount(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, _Script_AdvancedSessions::BPUserOnlineAccount& AccountInfo, void*& Result);
    void GetPlayerNickname(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, void*& PlayerNickname);
    void GetPlayerAuthToken(_Script_Engine::PlayerController* PlayerController, void*& AuthToken, void*& Result);
    void GetLoginStatus(_Script_AdvancedSessions::BPUniqueNetId& UniqueNetId, void*& LoginStatus, void*& Result);
    void GetAllUserAccounts(void*& AccountInfos, void*& Result);
}; // Size: 0x28
#pragma pack(pop)
}
