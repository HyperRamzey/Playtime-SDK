#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct SabotageSaveGame : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_SelectedSabotage();
    static _Script_CoreUObject::Class* static_class();
    void SetSelectedSabotage(void* Sabotage);
    bool IsSabotageOwned(void*& Inventory, void*& Sabotage, int32_t& Level);
    void* GetSelectedSabotage();
    _Script_Playtime_Multiplayer::SabotageSaveGame* GetSabotageSave();
}; // Size: 0x50
#pragma pack(pop)
}
