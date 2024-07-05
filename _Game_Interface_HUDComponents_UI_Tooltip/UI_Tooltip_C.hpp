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
namespace _Game_Interface_HUDComponents_UI_Tooltip {
#pragma pack(push, 1)
struct UI_Tooltip_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_130();
    _Script_UMG::TextBlock*& get_T_Tooltip();
    void* get_Tooltip();
    void* get_OnTooltipConstructed();
    static _Script_CoreUObject::Class* static_class();
    void* Get_T_Tooltip_Text_0();
    void SetupTooltip(void* Tooltip);
    void Construct0();
    void ExecuteUbergraph_UI_Tooltip(int32_t EntryPoint);
    void OnTooltipConstructed__DelegateSignature();
}; // Size: 0x298
#pragma pack(pop)
}
