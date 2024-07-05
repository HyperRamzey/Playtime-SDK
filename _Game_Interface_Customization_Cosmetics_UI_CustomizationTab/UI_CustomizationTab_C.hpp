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
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CustomizationTab {
#pragma pack(push, 1)
struct UI_CustomizationTab_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x48]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Retract();
    _Script_UMG::Button*& get_Button_27();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::Image*& get_Image();
    void* get_TabReleased();
    _Script_Engine::Texture2D*& get_IconImage();
    bool get_Retracted();
    void set_Retracted(bool value);
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_CustomizationTab_Button_27_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_CustomizationTab_Button_27_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_CustomizationTab_Button_27_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Animate(bool Retract_);
    void ExecuteUbergraph_UI_CustomizationTab(int32_t EntryPoint);
    void TabReleased__DelegateSignature();
}; // Size: 0x2a8
#pragma pack(pop)
}
