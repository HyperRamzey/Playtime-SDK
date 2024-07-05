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
struct Overlay;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_HUDComponents_UI_InteractPrompt {
#pragma pack(push, 1)
struct UI_InteractPrompt_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x28]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_194();
    _Script_UMG::Image*& get_Image_394();
    _Script_UMG::TextBlock*& get_TextBlock_310();
    _Script_UMG::Overlay*& get_UI_HitHatch();
    static _Script_CoreUObject::Class* static_class();
    void SetPrompt(void* DataTableRowName);
    void ExecuteUbergraph_UI_InteractPrompt(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
}
