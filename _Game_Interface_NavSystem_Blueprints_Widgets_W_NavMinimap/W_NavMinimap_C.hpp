#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem {
struct BPC_NavSystem_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap {
#pragma pack(push, 1)
struct W_NavMinimap_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button_ZoomIn();
    _Script_UMG::Button*& get_Button_ZoomOut();
    _Script_UMG::Image*& get_Image_Minimap();
    _Script_UMG::Overlay*& get_Overlay_Minimap();
    float& get_Dimentions();
    float& get_Zoom();
    _Script_Engine::MaterialInstanceDynamic*& get_MiniMapMatInst();
    _Script_Engine::Texture*& get_MapImage();
    bool get_IsShow();
    void set_IsShow(bool value);
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& get_NavSystem();
    static _Script_CoreUObject::Class* static_class();
    void GetMinimapSize(float& ResultSize);
    void Toggle();
    void Show(bool IsShow);
    _Script_UMG::UserWidget* AddPlayerIcon(void* PlayerIconWidgetClass);
    _Script_UMG::UserWidget* AddIcon(void* WidgetClass);
    void Init(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C* NavSystem, _Script_Engine::Texture* MapImage, float Dimentions, float Zoom);
    void BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void UpdateRotate(float Angle);
    void Construct0();
    void ExecuteUbergraph_W_NavMinimap(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
