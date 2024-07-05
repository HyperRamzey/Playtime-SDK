#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_HUDComponents_UI_ActionPrompt {
#pragma pack(push, 1)
struct UI_ActionPrompt_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_Button();
    _Script_UMG::Image*& get_Core();
    _Script_UMG::Image*& get_Left();
    _Script_UMG::TextBlock*& get_Prefix();
    _Script_UMG::Image*& get_Right();
    _Script_UMG::TextBlock*& get_Suffix();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void SetPromptText(void* Prefix, void* Suffix);
    void ExecuteUbergraph_UI_ActionPrompt(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
