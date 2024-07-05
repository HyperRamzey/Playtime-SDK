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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_Widgets_UI_TeaserButton {
#pragma pack(push, 1)
struct UI_TeaserButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x48]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HighlightFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Border*& get_Border_59();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Button*& get_TeaserButton();
    void* get_TeaserButtonPressed();
    _Script_Engine::MaterialInstanceDynamic*& get_BackgroundMaterial();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_TeaserButton_TeaserButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_TeaserButton_TeaserButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_TeaserButton_TeaserButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_TeaserButton(int32_t EntryPoint);
    void TeaserButtonPressed__DelegateSignature();
}; // Size: 0x2a8
#pragma pack(pop)
}