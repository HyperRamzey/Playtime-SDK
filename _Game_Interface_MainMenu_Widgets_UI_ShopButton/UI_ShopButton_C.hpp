#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Widgets_UI_ShopButton {
#pragma pack(push, 1)
struct UI_ShopButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x98]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HighlightFrame();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Border*& get_Border_196();
    _Script_UMG::Image*& get_BundleImage();
    _Script_UMG::Button*& get_Button_213();
    _Script_UMG::Image*& get_Fade();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::Image*& get_ShopRender();
    _Script_Engine::Texture2D*& get_ButtonBackground();
    void* get_ButtonText();
    _Script_Engine::Texture2D*& get_ButtonIcon();
    _Script_Engine::Texture2D*& get_ButtonFrame();
    void* get_ShopButtonPressed();
    _Script_Engine::MaterialInstanceDynamic*& get_RenderMaterial();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_ShopButton_Button_213_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_ShopButton_Button_213_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_ShopButton_Button_213_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_ShopButton(int32_t EntryPoint);
    void ShopButtonPressed__DelegateSignature();
}; // Size: 0x2f8
#pragma pack(pop)
}
