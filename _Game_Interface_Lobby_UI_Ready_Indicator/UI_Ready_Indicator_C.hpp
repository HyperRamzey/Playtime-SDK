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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Lobby_UI_Ready_Indicator {
#pragma pack(push, 1)
struct UI_Ready_Indicator_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x48]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Changed();
    _Script_UMG::Image*& get_AnimatingOutline();
    _Script_UMG::Image*& get_Body();
    _Script_UMG::Image*& get_Outline();
    _Script_UMG::TextBlock*& get_TextBlock_36();
    void* get_Text();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void SetReady(bool Ready_, bool Animate_);
    void ExecuteUbergraph_UI_Ready_Indicator(int32_t EntryPoint);
}; // Size: 0x2a8
#pragma pack(pop)
}
