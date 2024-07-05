#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SaveGame.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_SaveGames_BP_SaveTapes {
#pragma pack(push, 1)
struct BP_SaveTapes_C : public _Script_Engine::SaveGame {
    private: char pad_28[0x18]; public:
    void* get_TapesFound();
    void* get_FirstTapeDate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
