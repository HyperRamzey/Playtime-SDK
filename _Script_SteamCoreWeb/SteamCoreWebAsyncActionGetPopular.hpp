#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct SteamCoreWebAsyncActionGetPopular : public SteamCoreWebAsyncAction {
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPopular* GetPopularAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency);
}; // Size: 0x58
#pragma pack(pop)
}
