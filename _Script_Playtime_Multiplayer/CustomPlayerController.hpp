#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PlayerController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct CustomPlayerController : public _Script_Engine::PlayerController {
    private: char pad_570[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetViewTargetToMommyCamera();
}; // Size: 0x578
#pragma pack(pop)
}
