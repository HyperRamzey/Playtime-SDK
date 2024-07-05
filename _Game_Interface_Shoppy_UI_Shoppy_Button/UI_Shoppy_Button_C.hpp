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
struct TextBlock;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_Shoppy_UI_Shoppy {
struct UI_Shoppy_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_UI_Shoppy_Button {
#pragma pack(push, 1)
struct UI_Shoppy_Button_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x98]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Hover();
    _Script_UMG::Image*& get_BG_Image();
    _Script_UMG::Image*& get_Border();
    _Script_UMG::Image*& get_Lock();
    _Script_UMG::Overlay*& get_Overlay_0();
    _Script_UMG::Button*& get_ShoppyButton();
    _Script_UMG::TextBlock*& get_Text();
    int32_t& get_Size();
    void* get_Label();
    void* get_DisplayName();
    _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C*& get_Parent();
    bool get_DisableButton();
    void set_DisableButton(bool value);
    bool get_EventButton();
    void set_EventButton(bool value);
    _Script_Engine::Texture2D*& get_Alt_Texture_Icon();
    bool get_IsActive();
    void set_IsActive(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetActive(bool Condition);
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_Shoppy_Button_Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Shoppy_Button_Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Shoppy_Button_Button_54_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Shoppy_Button(int32_t EntryPoint);
}; // Size: 0x2f8
#pragma pack(pop)
}
