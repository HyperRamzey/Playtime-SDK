#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AdvancedSessions\BPUniqueNetId.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AdvancedSteamSessions {
#pragma pack(push, 1)
struct SteamRequestGroupOfficersCallbackProxy : public _Script_Engine::OnlineBlueprintCallProxyBase {
    private: char pad_30[0x70]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_AdvancedSteamSessions::SteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(_Script_CoreUObject::Object* WorldContextObject, _Script_AdvancedSessions::BPUniqueNetId GroupUniqueNetID);
}; // Size: 0xa0
#pragma pack(pop)
}
