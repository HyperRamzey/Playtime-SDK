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
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_OnScreenError {
#pragma pack(push, 1)
struct UI_OnScreenError_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x60]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::Image*& get_Image_41();
    _Script_UMG::Image*& get_Image_129();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::TextBlock*& get_TextBlock_185();
    _Script_UMG::TextBlock*& get_Time();
    void* get_Text();
    bool get_Error();
    void set_Error(bool value);
    _Script_CoreUObject::Object*& get_From();
    static _Script_CoreUObject::Class* static_class();
    void SetStyle();
    void PrintInfoToLog();
    void HandleColor();
    void Construct0();
    void ExecuteUbergraph_UI_OnScreenError(int32_t EntryPoint);
}; // Size: 0x2c0
#pragma pack(pop)
}
