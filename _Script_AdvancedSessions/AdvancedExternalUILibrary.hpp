#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BPUniqueNetId.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct AdvancedExternalUILibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void ShowWebURLUI(void* URLToShow, void*& Result, void*& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32_t OffsetX, int32_t OffsetY, int32_t SizeX, int32_t SizeY);
    void ShowProfileUI(_Script_AdvancedSessions::BPUniqueNetId PlayerViewingProfile, _Script_AdvancedSessions::BPUniqueNetId PlayerToViewProfileOf, void*& Result);
    void ShowLeaderBoardUI(void* LeaderboardName, void*& Result);
    void ShowInviteUI(_Script_Engine::PlayerController* PlayerController, void*& Result);
    void ShowFriendsUI(_Script_Engine::PlayerController* PlayerController, void*& Result);
    void ShowAccountUpgradeUI(_Script_AdvancedSessions::BPUniqueNetId PlayerRequestingAccountUpgradeUI, void*& Result);
    void CloseWebURLUI();
}; // Size: 0x28
#pragma pack(pop)
}
