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
struct BPUniqueNetId;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct GetUserPrivilegeCallbackProxy : public _Script_Engine::OnlineBlueprintCallProxyBase {
    private: char pad_30[0x50]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_AdvancedSessions::GetUserPrivilegeCallbackProxy* GetUserPrivilege(_Script_CoreUObject::Object* WorldContextObject, void*& PrivilegeToCheck, _Script_AdvancedSessions::BPUniqueNetId& PlayerUniqueNetID);
}; // Size: 0x80
#pragma pack(pop)
}
