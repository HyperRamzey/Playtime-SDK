#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\EventReply.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct CanvasPanelSlot;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem {
struct BPC_NavSystem_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
struct PointerEvent;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap {
#pragma pack(push, 1)
struct W_NavOnlyBigMap_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x140]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_Map();
    _Script_UMG::Overlay*& get_Overlay_Map();
    float& get_Dimentions();
    _Script_Engine::Texture2D*& get_MapTexture();
    bool get_IsShow();
    void set_IsShow(bool value);
    bool get_IsMouseButtonDown();
    void set_IsMouseButtonDown(bool value);
    bool get_IsDrag();
    void set_IsDrag(bool value);
    float& get_SaftyZoneX();
    float& get_SaftyZoneY();
    void* get_DetectDragReturnValue();
    void* get_LastMousePosition();
    void* get_MouseDelta();
    bool get_DragEnabled();
    void set_DragEnabled(bool value);
    _Script_UMG::CanvasPanelSlot*& get_OverlayMapSlot();
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& get_NavSystem();
    void* get_TotalIncreaseSize();
    void* get_OriginOverlayMapSize();
    float& get_OverlayMapZoom();
    void* get_OverlayMapAlignment();
    _Script_UMG::CanvasPanelSlot*& get_SelfSlot();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector2D CalculateAlignment(_Script_CoreUObject::Vector2D IpMouseWidgetSpaceLoc);
    _Script_UMG::EventReply OnMouseMove0(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent);
    _Script_UMG::EventReply OnMouseWheel0(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent);
    void GetScreenHalfSize(_Script_CoreUObject::Vector2D& Result);
    void GetScreenSize(_Script_CoreUObject::Vector2D& Result);
    _Script_UMG::EventReply OnMouseButtonUp0(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent);
    _Script_UMG::EventReply OnMouseButtonDown0(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent);
    void ToggleShow();
    void Show(bool IsShow);
    _Script_UMG::UserWidget* AddIcon(void* UserWidgetClass);
    _Script_UMG::UserWidget* AddPlayerIcon(void* PlayerMarkClass);
    void Init(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C* NavSystem, _Script_Engine::Texture2D* MapImage, float Dimentions);
    void Construct0();
    void ExecuteUbergraph_W_NavOnlyBigMap(int32_t EntryPoint);
}; // Size: 0x3a0
#pragma pack(pop)
}
