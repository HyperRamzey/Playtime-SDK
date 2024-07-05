#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreFindSession : public SteamCoreAsyncAction {
    private: char pad_38[0xa0]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    void OnCompleted(bool bSuccessful);
    _Script_SteamCore::SteamCoreFindSession* FindSteamCoreSessions(_Script_CoreUObject::Object* WorldContextObject, void* SearchSettings, int32_t MaxResults, bool bUseLAN, void* ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout);
}; // Size: 0xd8
#pragma pack(pop)
}
