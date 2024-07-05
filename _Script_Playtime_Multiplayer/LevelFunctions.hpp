#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "LevelStruct.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct LevelFunctions : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Playtime_Multiplayer::LevelStruct GetLevelByName(void* Level);
    _Script_Playtime_Multiplayer::LevelStruct GetLevelByID(int32_t Level);
    void* GetAllPlayableLevels();
    void* GetAllLevels();
}; // Size: 0x28
#pragma pack(pop)
}
