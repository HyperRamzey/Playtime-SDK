#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PromptGenerator : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void GetPrompt(void*& PromptPrefix, void*& PromptSuffix, bool& CanPrompt);
}; // Size: 0x28
#pragma pack(pop)
}
