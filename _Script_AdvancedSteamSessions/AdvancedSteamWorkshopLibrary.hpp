#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AdvancedSteamSessions {
#pragma pack(push, 1)
struct AdvancedSteamWorkshopLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* GetSubscribedWorkshopItems(int32_t& NumberOfItems);
    void GetNumSubscribedWorkshopItems(int32_t& NumberOfItems);
}; // Size: 0x28
#pragma pack(pop)
}
