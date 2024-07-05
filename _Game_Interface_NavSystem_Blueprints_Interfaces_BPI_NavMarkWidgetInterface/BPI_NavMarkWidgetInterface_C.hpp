#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Game_Interface_NavSystem_Blueprints_Interfaces_BPI_NavMarkWidgetInterface {
#pragma pack(push, 1)
struct BPI_NavMarkWidgetInterface_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void GetScaleDesiredSize(_Script_CoreUObject::Vector2D& Result);
    void SetScaleUsingSize(float IpScale);
    void UpdateMapRotate(float Angle);
    void UpdateParentAngle(float ParentAngle);
    void SetArrowAngle(float Angle);
    void Show(bool IsShow);
    void UpdateMainText(void* Text);
    void ShowOffScreenArrow(bool IsVisible);
    void UpdateIndicatorOffScreenAngle(float Angle);
    void UpdateDistance(float Distance);
}; // Size: 0x28
#pragma pack(pop)
}
