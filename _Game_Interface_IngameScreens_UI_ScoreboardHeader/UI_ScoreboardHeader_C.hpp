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
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_ScoreboardHeader {
#pragma pack(push, 1)
struct UI_ScoreboardHeader_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x60]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::TextBlock*& get_Column();
    _Script_UMG::TextBlock*& get_Column_1();
    _Script_UMG::TextBlock*& get_Column_2();
    _Script_UMG::Image*& get_TicketIcon();
    void* get_Column1Text();
    void* get_Column2Text();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_ScoreboardHeader(int32_t EntryPoint);
}; // Size: 0x2c0
#pragma pack(pop)
}
