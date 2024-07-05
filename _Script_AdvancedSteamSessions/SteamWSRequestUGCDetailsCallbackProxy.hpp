#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BPSteamWorkshopID.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AdvancedSteamSessions {
#pragma pack(push, 1)
struct SteamWSRequestUGCDetailsCallbackProxy : public _Script_Engine::OnlineBlueprintCallProxyBase {
    private: char pad_30[0x58]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_AdvancedSteamSessions::SteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(_Script_CoreUObject::Object* WorldContextObject, _Script_AdvancedSteamSessions::BPSteamWorkshopID WorkShopID);
}; // Size: 0x88
#pragma pack(pop)
}
