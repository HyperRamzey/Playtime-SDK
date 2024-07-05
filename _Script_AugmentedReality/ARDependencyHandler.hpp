#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
struct ARSessionConfig;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARDependencyHandler : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    void StartARSessionLatent(_Script_CoreUObject::Object* WorldContextObject, _Script_AugmentedReality::ARSessionConfig* SessionConfig, _Script_Engine::LatentActionInfo LatentInfo);
    void RequestARSessionPermission(_Script_CoreUObject::Object* WorldContextObject, _Script_AugmentedReality::ARSessionConfig* SessionConfig, _Script_Engine::LatentActionInfo LatentInfo, void*& OutPermissionResult);
    void InstallARService(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, void*& OutInstallResult);
    _Script_AugmentedReality::ARDependencyHandler* GetARDependencyHandler();
    void CheckARServiceAvailability(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, void*& OutAvailability);
}; // Size: 0x28
#pragma pack(pop)
}
