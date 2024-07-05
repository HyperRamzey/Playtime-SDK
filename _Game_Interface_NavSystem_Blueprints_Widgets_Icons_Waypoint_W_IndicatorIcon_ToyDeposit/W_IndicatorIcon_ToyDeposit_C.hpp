#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_ToyDeposit {
#pragma pack(push, 1)
struct W_IndicatorIcon_ToyDeposit_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x58]; public:
    void* get_UberGraphFrame();
    _Script_UMG::CanvasPanel*& get_CanvasPanel();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_OffScreen();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_OnScreen();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_Arrow();
    _Script_UMG::Image*& get_Image_AngleArrow();
    _Script_UMG::Image*& get_Image_Icon();
    _Script_UMG::Image*& get_Image_Icon2();
    _Script_UMG::TextBlock*& get_TextBlock_Distance_1();
    float& get_MaxDisplayedDistance();
    _Script_Engine::CurveFloat*& get_IconFadeCurve();
    static _Script_CoreUObject::Class* static_class();
    void GetScaleDesiredSize(_Script_CoreUObject::Vector2D& Result);
    void UpdateDistance(float Distance);
    void UpdateIndicatorOffScreenAngle(float Angle);
    void ShowOffScreenArrow(bool IsVisible);
    void Show(bool IsShow);
    void SetScaleUsingSize(float IpScale);
    void UpdateMainText(void* Text);
    void UpdateMapRotate(float Angle);
    void UpdateParentAngle(float ParentAngle);
    void SetArrowAngle(float Angle);
    void ExecuteUbergraph_W_IndicatorIcon_ToyDeposit(int32_t EntryPoint);
}; // Size: 0x2b8
#pragma pack(pop)
}
