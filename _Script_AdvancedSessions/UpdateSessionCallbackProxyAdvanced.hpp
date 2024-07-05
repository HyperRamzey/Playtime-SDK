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
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct UpdateSessionCallbackProxyAdvanced : public _Script_Engine::OnlineBlueprintCallProxyBase {
    private: char pad_30[0x68]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_AdvancedSessions::UpdateSessionCallbackProxyAdvanced* UpdateSession(_Script_CoreUObject::Object* WorldContextObject, void*& ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);
}; // Size: 0x98
#pragma pack(pop)
}
