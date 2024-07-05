#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SaveGame.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_SaveGames_BP_PlatformData {
#pragma pack(push, 1)
struct BP_PlatformData_C : public _Script_Engine::SaveGame {
    private: char pad_28[0x10]; public:
    void* get_UberGraphFrame();
    bool get_bUsers200();
    void set_bUsers200(bool value);
    bool get_bCollection200();
    void set_bCollection200(bool value);
    bool get_bInventory200();
    void set_bInventory200(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ExecuteUbergraph_BP_PlatformData(int32_t EntryPoint);
}; // Size: 0x38
#pragma pack(pop)
}
