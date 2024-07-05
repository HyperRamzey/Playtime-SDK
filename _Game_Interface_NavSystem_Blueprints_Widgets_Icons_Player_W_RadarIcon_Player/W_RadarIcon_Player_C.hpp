#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Player_W_RadarIcon_Player {
#pragma pack(push, 1)
struct W_RadarIcon_Player_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x18]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_Icon();
    int32_t& get_MaxDisplayedDistance();
    static _Script_CoreUObject::Class* static_class();
    void GetScaleDesiredSize(_Script_CoreUObject::Vector2D& Result);
    void UpdateDistance(float Distance);
    void UpdateIndicatorOffScreenAngle(float Angle);
    void ShowOffScreenArrow(bool IsVisible);
    void UpdateMainText(void* Text);
    void Show(bool IsShow);
    void SetArrowAngle(float Angle);
    void UpdateParentAngle(float ParentAngle);
    void UpdateMapRotate(float Angle);
    void SetScaleUsingSize(float IpScale);
    void ExecuteUbergraph_W_RadarIcon_Player(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
