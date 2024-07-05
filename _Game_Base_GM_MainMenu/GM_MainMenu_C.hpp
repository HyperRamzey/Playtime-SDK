#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameMode.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Game_Base_GM_MainMenu {
#pragma pack(push, 1)
struct GM_MainMenu_C : public _Script_Engine::GameMode {
    private: char pad_308[0x10]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void printauthtoken();
    void clearbackendcaches();
    void ReceiveBeginPlay();
    void K2_PostLogin(_Script_Engine::PlayerController* NewPlayer);
    void K2_OnLogout(_Script_Engine::Controller* ExitingController);
    void SilentlyRefreshCoins();
    void ExecuteUbergraph_GM_MainMenu(int32_t EntryPoint);
}; // Size: 0x318
#pragma pack(pop)
}
