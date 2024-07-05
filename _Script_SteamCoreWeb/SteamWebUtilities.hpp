#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct SteamWebUtilities : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool ParseJson(void* JsonString, void*& Data);
    void* GetProjectKey();
    int32_t GetProjectAppID();
    void* GetDevSteamID();
    void FindJsonStrings(void* JsonString, void* Key, void*& Values, void*& Result);
    void FindJsonString(void* JsonString, void* Key, void*& Value, void*& Result);
    void FindJsonNumbers(void* JsonString, void* Key, void*& Values, void*& Result);
    void FindJsonNumber(void* JsonString, void* Key, int32_t& Value, void*& Result);
    void FindJsonBools(void* JsonString, void* Key, void*& bValues, void*& Result);
    void FindJsonBool(void* JsonString, void* Key, bool& bValue, void*& Result);
}; // Size: 0x28
#pragma pack(pop)
}
