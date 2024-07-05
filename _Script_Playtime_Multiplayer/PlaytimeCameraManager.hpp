#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MinimalViewInfo.hpp"
#include "..\_Script_Engine\PlayerCameraManager.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PlaytimeCameraManager : public _Script_Engine::PlayerCameraManager {
    static _Script_CoreUObject::Class* static_class();
    void OnUpdatePOV(_Script_Engine::MinimalViewInfo NewPOV);
    void BP_OnBlendComplete();
}; // Size: 0x2810
#pragma pack(pop)
}
