#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MobilePatchingUtils {
struct MobileInstalledContent;
}
namespace _Script_MobilePatchingUtils {
#pragma pack(push, 1)
struct MobilePatchingLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void RequestContent(void* RemoteManifestURL, void* CloudURL, void* InstallDirectory, void* OnSucceeded, void* OnFailed);
    bool HasActiveWiFiConnection();
    void* GetSupportedPlatformNames();
    _Script_MobilePatchingUtils::MobileInstalledContent* GetInstalledContent(void* InstallDirectory);
    void* GetActiveDeviceProfileName();
}; // Size: 0x28
#pragma pack(pop)
}
