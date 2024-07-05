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
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton_New {
#pragma pack(push, 1)
struct UI_MP_N_MenuButton_New_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x58]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Hover();
    _Script_UMG::Image*& get_BG_Image();
    _Script_UMG::Button*& get_Button_54();
    _Script_UMG::TextBlock*& get_Text();
    void* get_Label();
    int32_t& get_Size();
    void* get_OnReleased();
    static _Script_CoreUObject::Class* static_class();
    void UpdateName();
    void BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_MP_N_MenuButton_New(int32_t EntryPoint);
    void OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C* Caller);
}; // Size: 0x2b8
#pragma pack(pop)
}
