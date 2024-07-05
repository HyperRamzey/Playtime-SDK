#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_BP_PuzzlePillar {
struct BP_PuzzlePillar_C;
}
namespace _Game_Gameplay_Puzzles_AC_PuzzleHighlight {
#pragma pack(push, 1)
struct AC_PuzzleHighlight_C : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x30]; public:
    void* get_UberGraphFrame();
    void* get_PuzzlePillars();
    int32_t& get_MaxHighlights();
    bool get_ForceHighlightOff();
    void set_ForceHighlightOff(bool value);
    void* get_OnPuzzleHighlightsOff();
    static _Script_CoreUObject::Class* static_class();
    void GetNearestPuzzle(void*& Puzzles, _Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C*& Puzzle);
    void GetNumHighlights(void*& Puzzles);
    void ClearHighlights();
    void IsLocal(bool& Value);
    void SetForceHighlightOff(bool Value);
    void ReceiveBeginPlay0();
    void TogglePuzzleHighlight();
    void ExecuteUbergraph_AC_PuzzleHighlight(int32_t EntryPoint);
    void OnPuzzleHighlightsOff__DelegateSignature();
}; // Size: 0xe0
#pragma pack(pop)
}
