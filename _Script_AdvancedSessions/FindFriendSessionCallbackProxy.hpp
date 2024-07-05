#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_AdvancedSessions {
struct BPUniqueNetId;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct FindFriendSessionCallbackProxy : public _Script_Engine::OnlineBlueprintCallProxyBase {
    private: char pad_30[0x68]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_AdvancedSessions::FindFriendSessionCallbackProxy* FindFriendSession(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, _Script_AdvancedSessions::BPUniqueNetId& FriendUniqueNetId);
}; // Size: 0x98
#pragma pack(pop)
}
