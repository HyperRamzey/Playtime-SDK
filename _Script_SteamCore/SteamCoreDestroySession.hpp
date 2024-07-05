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
struct SteamCoreDestroySession : public SteamCoreAsyncAction {
    private: char pad_38[0x40]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    void OnCompleted(void* SessionName, bool bWasSuccessful);
    _Script_SteamCore::SteamCoreDestroySession* DestroySteamCoreSession(_Script_CoreUObject::Object* WorldContextObject, float Timeout);
}; // Size: 0x78
#pragma pack(pop)
}
