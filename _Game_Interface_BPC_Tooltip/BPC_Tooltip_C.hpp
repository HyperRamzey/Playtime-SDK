#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\TooltipComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_BPC_Tooltip {
#pragma pack(push, 1)
struct BPC_Tooltip_C : public _Script_Playtime_Multiplayer::TooltipComponent {
    private: char pad_240[0x10]; public:
    void* get_UberGraphFrame();
    bool get_ShowNonEssentialHUD();
    void set_ShowNonEssentialHUD(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetNonEssentialHUDVisibility(bool Visible);
    void ShowTooltip0(bool Value);
    void ExecuteUbergraph_BPC_Tooltip(int32_t EntryPoint);
}; // Size: 0x250
#pragma pack(pop)
}
