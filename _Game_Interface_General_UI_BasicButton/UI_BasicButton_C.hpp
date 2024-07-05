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
struct Button;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_General_UI_BasicButton {
#pragma pack(push, 1)
struct UI_BasicButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Button*& get_Button_509();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::TextBlock*& get_Label();
    _Script_UMG::SizeBox*& get_SizeBox();
    void* get_OnPressed();
    void* get_OnReleased();
    void* get_OnHovered();
    void* get_OnUnhovered();
    bool get_BeginActivated();
    void set_BeginActivated(bool value);
    void* get_ButtonText();
    float& get_ButtonWidth();
    float& get_ButtonHeight();
    _Script_Engine::Texture2D*& get_ActiveTexture();
    _Script_Engine::Texture2D*& get_InactiveTexture();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void ActivateButton();
    void DeactivateButton();
    void BndEvt__UI_BasicButton_Button_509_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void UpdateLabel(void* InText);
    void BndEvt__UI_BasicButton_Button_509_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BasicButton_Button_509_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BasicButton(int32_t EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature();
    void OnReleased__DelegateSignature();
    void OnPressed__DelegateSignature();
}; // Size: 0x308
#pragma pack(pop)
}
