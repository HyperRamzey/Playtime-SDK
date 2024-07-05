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
struct RichTextBlock;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Interface_Content_UI_PlaytimeButton {
struct UI_PlaytimeButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_Error {
#pragma pack(push, 1)
struct UI_MP_Error_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x70]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_100();
    _Script_UMG::RichTextBlock*& get_RichLabel();
    _Script_UMG::TextBlock*& get_TopText();
    _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C*& get_UI_PlaytimeButton();
    void* get_Header();
    void* get_Text();
    bool get_OriginalShowMouseCursor();
    void set_OriginalShowMouseCursor(bool value);
    void* get_ClickedOK();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void OnEscapeInputCapture();
    void BndEvt__UI_MP_Error_UI_PlaytimeButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_MP_Error(int32_t EntryPoint);
    void ClickedOK__DelegateSignature();
}; // Size: 0x2d0
#pragma pack(pop)
}
