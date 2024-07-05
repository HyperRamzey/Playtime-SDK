#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct TooltipComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x40]; public:
    void* get_Key();
    void* get_Tooltip();
    float& get_Duration();
    float& get_Distance();
    bool get_bCanShow();
    void set_bCanShow(bool value);
    void* get_TargetClass();
    static _Script_CoreUObject::Class* static_class();
    void StartUpdateTimer();
    void ShowTooltip(bool Value);
    void RetryTooltip();
    void ClearUpdateTimer();
}; // Size: 0x240
#pragma pack(pop)
}
