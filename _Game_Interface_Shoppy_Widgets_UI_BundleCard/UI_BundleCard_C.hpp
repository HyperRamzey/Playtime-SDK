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
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_Widgets_UI_BundleCard {
#pragma pack(push, 1)
struct UI_BundleCard_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x80]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HighlightFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Border*& get_Border_59();
    _Script_UMG::Button*& get_BundleButton();
    _Script_UMG::Image*& get_Divider();
    _Script_UMG::Image*& get_Fade();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Image*& get_PLaycoinIcon();
    _Script_UMG::Image*& get_Render();
    _Script_UMG::Image*& get_TicketIcon();
    void* get_BundleCardPressed();
    _Script_Engine::MaterialInstanceDynamic*& get_BackgroundMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_RenderMaterial();
    _Script_Engine::Texture*& get_BundleRender();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_BundleCard_BundleButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BundleCard_BundleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BundleCard_BundleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void UpdateVisuals();
    void ExecuteUbergraph_UI_BundleCard(int32_t EntryPoint);
    void BundleCardPressed__DelegateSignature();
}; // Size: 0x2e0
#pragma pack(pop)
}
