#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Default_W_HoleReviveTooltip {
#pragma pack(push, 1)
struct W_HoleReviveTooltip_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x98]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_SuccessAnimation();
    _Script_UMG::WidgetAnimation*& get_CancelAnimation();
    _Script_UMG::WidgetAnimation*& get_FadeAway();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::WidgetAnimation*& get_Loop();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_OffScreen();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_OnScreen();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_Arrow();
    _Script_UMG::Image*& get_Halo();
    _Script_UMG::Image*& get_HandIcon_OffScreen();
    _Script_UMG::Image*& get_HandIcon_OnScreen();
    _Script_UMG::Image*& get_Image_AngleArrow();
    _Script_UMG::Image*& get_MouseIcon();
    _Script_UMG::ProgressBar*& get_ProgressBar_100();
    _Script_UMG::CanvasPanel*& get_ReviverTooltip();
    _Script_UMG::TextBlock*& get_ReviveTooltipText();
    _Script_UMG::TextBlock*& get_TextBlock_Distance();
    int32_t& get_MaxDisplayedDistance();
    static _Script_CoreUObject::Class* static_class();
    void GetScaleDesiredSize(_Script_CoreUObject::Vector2D& Result);
    void Cancel_Revive(void* FinishedHandler);
    void SuccessRevive(void* FinishedHandler);
    void UpdateMainText(void* Text);
    void SetArrowAngle(float Angle);
    void UpdateParentAngle(float ParentAngle);
    void UpdateMapRotate(float Angle);
    void SetScaleUsingSize(float IpScale);
    void Construct0();
    void UpdateDistance(float Distance);
    void UpdateIndicatorOffScreenAngle(float Angle);
    void ShowOffScreenArrow(bool IsVisible);
    void Show(bool IsShow);
    void StartRevive();
    void SetReviveProgress(float Progress);
    void SetLimbForTooltip(void* Limb);
    void ExecuteUbergraph_W_HoleReviveTooltip(int32_t EntryPoint);
}; // Size: 0x2f8
#pragma pack(pop)
}
