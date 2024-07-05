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
namespace _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger {
struct BP_MP_Puzzle_Trigger_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Misc_UI_PuzzleNametag {
#pragma pack(push, 1)
struct UI_PuzzleNametag_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x28]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::TextBlock*& get_Label();
    _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C*& get_Parent();
    static _Script_CoreUObject::Class* static_class();
    void Start_Next_Phase(int32_t NewPhase);
    void AnimFadeOut();
    void Set_Distance(float InFloat);
    void Solve(bool Condition);
    void Construct0();
    void ExecuteUbergraph_UI_PuzzleNametag(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
}
