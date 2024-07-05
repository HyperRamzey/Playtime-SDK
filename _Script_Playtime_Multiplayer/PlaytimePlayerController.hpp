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
struct PlaytimePlayerController : public _Script_Engine::PlayerController {
    static _Script_CoreUObject::Class* static_class();
    void ServerNotifyLoadedWorldWorkaround(void* WorldPackageName);
    void Server_SetQueueData(int32_t RoundsSinceLastMonster, bool bWantsToBeMonster);
}; // Size: 0x570
#pragma pack(pop)
}
