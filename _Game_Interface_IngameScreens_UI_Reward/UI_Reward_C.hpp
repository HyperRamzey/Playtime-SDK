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
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_Reward {
#pragma pack(push, 1)
struct UI_Reward_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::Button*& get_Button();
    _Script_UMG::Image*& get_Image_109();
    _Script_UMG::TextBlock*& get_Label();
    _Script_UMG::TextBlock*& get_Label_1();
    static _Script_CoreUObject::Class* static_class();
    void* Get_Label_Text_0();
    void Construct0();
    void ExecuteUbergraph_UI_Reward(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
}
