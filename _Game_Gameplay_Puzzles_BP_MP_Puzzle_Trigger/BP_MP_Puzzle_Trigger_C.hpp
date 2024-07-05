#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal {
struct BP_MP_Puzzle_EndGoal_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Misc_UI_PuzzleNametag {
struct UI_PuzzleNametag_C;
}
namespace _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger {
#pragma pack(push, 1)
struct BP_MP_Puzzle_Trigger_C : public _Script_Engine::Actor {
    private: char pad_220[0x40]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetComponent*& get_Widget();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    bool get_Solved();
    void set_Solved(bool value);
    _Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal::BP_MP_Puzzle_EndGoal_C*& get_EndGoal();
    int32_t& get_Phase();
    void* get_Name();
    static _Script_CoreUObject::Class* static_class();
    void SetWidgetSolve(bool Condition);
    _Game_Interface_Misc_UI_PuzzleNametag::UI_PuzzleNametag_C* Get_Puzzle_Name_Tag();
    void SetWidgetDistance(float InFloat);
    void Check_All_Goals();
    void OnRep_Solved();
    void ReceiveTick0(float DeltaSeconds);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_MP_Puzzle_Trigger(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
}
