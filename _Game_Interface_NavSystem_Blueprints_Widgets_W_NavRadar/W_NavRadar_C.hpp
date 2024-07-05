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
struct Overlay;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem {
struct BPC_NavSystem_C;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar {
#pragma pack(push, 1)
struct W_NavRadar_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x70]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_Minimap();
    _Script_UMG::Image*& get_Image_PlayerFrustum();
    _Script_UMG::Image*& get_Image_RadarBG();
    _Script_UMG::Overlay*& get_Overlay_Radar();
    _Script_UMG::TextBlock*& get_TextBlock_E();
    _Script_UMG::TextBlock*& get_TextBlock_N();
    _Script_UMG::TextBlock*& get_TextBlock_S();
    _Script_UMG::TextBlock*& get_TextBlock_W();
    bool get_IsShow();
    void set_IsShow(bool value);
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& get_NavSystem();
    _Script_Engine::MaterialInstanceDynamic*& get_MiniMapMatInst();
    _Script_Engine::Texture*& get_MapImage();
    float& get_Dimentions();
    float& get_Zoom();
    static _Script_CoreUObject::Class* static_class();
    void SetAngle(float Angle);
    void Toggle();
    void Show(bool IsShow);
    _Script_UMG::UserWidget* AddPlayerIcon(void* PlayerIconClass);
    _Script_UMG::UserWidget* AddIcon(void* WidgetClass);
    void Init(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C* NavSystem, _Script_Engine::Texture* MapImage, float Dimentions, float Zoom);
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_W_NavRadar(int32_t EntryPoint);
}; // Size: 0x2d0
#pragma pack(pop)
}
