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
namespace _Game_Interface_HUDComponents_UI_MonsterReleased {
#pragma pack(push, 1)
struct UI_MonsterReleased_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x28]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Play();
    _Script_UMG::Image*& get_Image_37();
    _Script_UMG::TextBlock*& get_TextBlock_116();
    void* get_Monster();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void RemoveSelf();
    void ExecuteUbergraph_UI_MonsterReleased(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
}
