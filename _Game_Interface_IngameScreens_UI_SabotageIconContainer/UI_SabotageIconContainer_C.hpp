#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\SabotageDef.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_IngameScreens_UI_SabotageIcon {
struct UI_SabotageIcon_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_SabotageSplashText {
struct UI_SabotageSplashText_C;
}
namespace _Game_Interface_IngameScreens_UI_SabotageIconContainer {
#pragma pack(push, 1)
struct UI_SabotageIconContainer_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Outline();
    _Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C*& get_UI_SabotageIcon();
    bool get_NoSabotageDuration();
    void set_NoSabotageDuration(bool value);
    void* get_SabotageDurationText();
    float& get_SabotageStartDuration();
    void* get_SabotageDurationHandle();
    void* get_Timespan();
    static _Script_CoreUObject::Class* static_class();
    void ConvertTime(float Time_To_Convert, void*& Converted_Time);
    void ResetSabotageIcon();
    void InitializeSabotageIcons(_Script_Playtime_Multiplayer::SabotageDef SabotageDef, int32_t SabotageLevel, _Game_Interface_IngameScreens_UI_SabotageSplashText::UI_SabotageSplashText_C* SabotageSplashTextRef);
    void PreConstruct0(bool IsDesignTime);
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void IconHandoff();
    void ExecuteUbergraph_UI_SabotageIconContainer(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
