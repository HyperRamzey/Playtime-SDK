#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PublishedFileID.hpp"
#include "SteamCoreAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
struct RemoveAppDependencyResult;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreUGCAsyncActionRemoveAppDependency : public SteamCoreAsyncAction {
    private: char pad_38[0x10]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCore::SteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileID, int32_t AppID, float Timeout);
    void HandleCallback(_Script_SteamCore::RemoveAppDependencyResult& Data, bool bWasSuccessful);
}; // Size: 0x48
#pragma pack(pop)
}
