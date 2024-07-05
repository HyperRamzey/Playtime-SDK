#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Interface_NavSystem_Blueprints_Structures_S_NavDirectionInfo\S_NavDirectionInfo.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Overlay;
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
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass {
#pragma pack(push, 1)
struct W_NavCompass_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_Arrow();
    _Script_UMG::Image*& get_Image_CompassBG();
    _Script_UMG::Overlay*& get_Overlay_Compass();
    _Script_UMG::TextBlock*& get_Text_CurrentAngle();
    void* get_DirectionWidgetAry();
    void* get_CompassMarkWidgetAry();
    bool get_IsShow();
    void set_IsShow(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetScaleDesiredSize(_Script_CoreUObject::Vector2D& Result);
    void Toggle();
    void ShowF(bool IsShow);
    _Script_UMG::UserWidget* AddIcon(void* UserWidgetClass);
    void AddDirectionIcon(_Game_Interface_NavSystem_Blueprints_Structures_S_NavDirectionInfo::S_NavDirectionInfo Info, _Script_UMG::UserWidget*& RetturnValue);
    void UpdateDistance(float Distance);
    void UpdateIndicatorOffScreenAngle(float Angle);
    void ShowOffScreenArrow(bool IsVisible);
    void UpdateMainText(void* Text);
    void Show(bool IsShow);
    void SetArrowAngle(float Angle);
    void UpdateParentAngle(float ParentAngle);
    void UpdateMapRotate(float Angle);
    void SetScaleUsingSize(float IpScale);
    void Construct0();
    void UpdateCompassCurrentAngle(float Angle);
    void ExecuteUbergraph_W_NavCompass(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
