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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Default_W_HoleReviveIcon {
#pragma pack(push, 1)
struct W_HoleReviveIcon_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x78]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeAway();
    _Script_UMG::WidgetAnimation*& get_NewAnimation();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::WidgetAnimation*& get_Loop();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_OffScreen();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_OnScreen();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_Arrow();
    _Script_UMG::Image*& get_Icon_1();
    _Script_UMG::Image*& get_Image_AngleArrow();
    _Script_UMG::Image*& get_Image_Icon();
    _Script_UMG::Image*& get_Image_Icon2();
    _Script_UMG::TextBlock*& get_TextBlock_Distance();
    _Script_UMG::TextBlock*& get_TextBlock_Distance_1();
    int32_t& get_MaxDisplayedDistance();
    static _Script_CoreUObject::Class* static_class();
    void GetScaleDesiredSize(_Script_CoreUObject::Vector2D& Result);
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
    void ExecuteUbergraph_W_HoleReviveIcon(int32_t EntryPoint);
}; // Size: 0x2d8
#pragma pack(pop)
}
