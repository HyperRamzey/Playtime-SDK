#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BPUniqueNetId.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_AdvancedSessions {
struct BPFriendInfo;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct AdvancedFriendsLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SendSessionInviteToFriends(_Script_Engine::PlayerController* PlayerController, void*& Friends, void*& Result);
    void SendSessionInviteToFriend(_Script_Engine::PlayerController* PlayerController, _Script_AdvancedSessions::BPUniqueNetId& FriendUniqueNetId, void*& Result);
    void IsAFriend(_Script_Engine::PlayerController* PlayerController, _Script_AdvancedSessions::BPUniqueNetId UniqueNetId, bool& IsFriend);
    void GetStoredRecentPlayersList(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId, void*& PlayersList);
    void GetStoredFriendsList(_Script_Engine::PlayerController* PlayerController, void*& FriendsList);
    void GetFriend(_Script_Engine::PlayerController* PlayerController, _Script_AdvancedSessions::BPUniqueNetId FriendUniqueNetId, _Script_AdvancedSessions::BPFriendInfo& Friend);
}; // Size: 0x28
#pragma pack(pop)
}
