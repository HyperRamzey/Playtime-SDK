#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Game_Interface_Content_UI_N_RadialProgressBar {
struct UI_N_RadialProgressBar_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_HUDComponents_UI_CrosshairComponent {
#pragma pack(push, 1)
struct UI_CrosshairComponent_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HitMarker();
    _Script_UMG::WidgetAnimation*& get_Attack();
    _Script_UMG::Border*& get_Center();
    _Script_UMG::ProgressBar*& get_LockerOpenProgress();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_RadialBar();
    bool get_IsRadialRecharging();
    void set_IsRadialRecharging(bool value);
    float& get_RadialRechargeTime();
    static _Script_CoreUObject::Class* static_class();
    void SetLockerOpenVisibility(bool Visible_);
    void SetLockerOpenPercent(int32_t Hits);
    void ResetRadialRecharge();
    void RadialRecharge(float Time);
    void SetCrosshairProgress(float Progress);
    void PlayHitmarker(float Duration);
    void ColorCrosshairRed();
    void ColorCrosshairWhite();
    void SetCrosshairColor(_Script_CoreUObject::LinearColor Color);
    void PlayAttackAnimation(float Duration);
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_CrosshairComponent(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
