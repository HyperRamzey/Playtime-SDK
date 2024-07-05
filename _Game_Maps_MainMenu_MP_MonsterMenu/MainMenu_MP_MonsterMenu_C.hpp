#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Maps_MainMenu_MP_MonsterMenu {
#pragma pack(push, 1)
struct MainMenu_MP_MonsterMenu_C : public _Script_Engine::LevelScriptActor {
    private: char pad_228[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenu_MP_MonsterMenu(int32_t EntryPoint);
}; // Size: 0x230
#pragma pack(pop)
}
