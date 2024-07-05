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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Default_W_EscapeText {
#pragma pack(push, 1)
struct W_EscapeText_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x18]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::TextBlock*& get_TextBlock_131();
    static _Script_CoreUObject::Class* static_class();
    void Localization();
    void Construct0();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_W_EscapeText(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
