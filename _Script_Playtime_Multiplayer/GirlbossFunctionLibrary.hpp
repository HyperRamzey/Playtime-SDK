#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct GirlbossFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* LoadAssetsByClassFromPath(void* Class, void* Path);
    bool InEditor();
    void ForceResetBoundInputsOnActor(_Script_Engine::Actor* Actor);
}; // Size: 0x28
#pragma pack(pop)
}
