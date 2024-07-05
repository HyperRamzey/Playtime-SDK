#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct LeaverSaveGame;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct LeaverFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SaveLeaverSaveGame(_Script_Playtime_Multiplayer::LeaverSaveGame* SaveGame);
    _Script_Playtime_Multiplayer::LeaverSaveGame* LoadLeaverSaveGame();
}; // Size: 0x28
#pragma pack(pop)
}
