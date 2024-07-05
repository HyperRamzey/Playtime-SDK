#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_BigmapIcon_Waypoint {
#pragma pack(push, 1)
struct W_BigmapIcon_Waypoint_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_Icon();
    _Script_UMG::TextBlock*& get_TextBlock_Distance();
    int32_t& get_MaxDisplayedDistance();
    void* get_OriginSize();
    float& get_FScaleDesiredSize();
    static _Script_CoreUObject::Class* static_class();
    void GetScaleDesiredSize(_Script_CoreUObject::Vector2D& Result);
    void UpdateIndicatorOffScreenAngle(float Angle);
    void ShowOffScreenArrow(bool IsVisible);
    void UpdateMainText(void* Text);
    void Show(bool IsShow);
    void SetArrowAngle(float Angle);
    void UpdateParentAngle(float ParentAngle);
    void UpdateMapRotate(float Angle);
    void Construct0();
    void UpdateDistance(float Distance);
    void SetScaleUsingSize(float IpScale);
    void ExecuteUbergraph_W_BigmapIcon_Waypoint(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
}
