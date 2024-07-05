#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SaveGame.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_SaveGames_BP_SaveTutorial {
#pragma pack(push, 1)
struct BP_SaveTutorial_C : public _Script_Engine::SaveGame {
    private: char pad_28[0x8]; public:
    bool get_CompletedTutorial();
    void set_CompletedTutorial(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
