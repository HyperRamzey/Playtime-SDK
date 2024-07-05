#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Puzzles_FPillarSaveStruct\FPillarSaveStruct.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_AIModule {
struct AIPerceptionStimuliSourceComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Game_Interface_BPC_Tooltip {
struct BPC_Tooltip_C;
}
namespace _Script_Engine {
struct RectLightComponent;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct Character;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavPillarIndicator {
struct BP_NavPillarIndicator_C;
}
namespace _Game_Gameplay_Game_ToyData_BP_ToyPart {
struct BP_ToyPart_C;
}
namespace _Script_Playtime_Multiplayer {
struct PuzzleList;
}
namespace _Game_Gameplay_Puzzles_BP_ToyPuzzle {
struct BP_ToyPuzzle_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_BP_PuzzlePillar {
#pragma pack(push, 1)
struct BP_PuzzlePillar_C : public _Script_Engine::Actor {
    private: char pad_220[0x2b0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_Puzzle3Anchor();
    _Script_Engine::SceneComponent*& get_Puzzle2Anchor();
    _Script_Engine::SceneComponent*& get_Puzzle1Anchor();
    _Script_Engine::StaticMeshComponent*& get_TopLights();
    _Script_Engine::StaticMeshComponent*& get_MidLights();
    _Script_Engine::StaticMeshComponent*& get_BottomLights();
    _Script_Engine::StaticMeshComponent*& get_CompletionIndicator();
    _Script_Engine::SplineComponent*& get_Spline_ToyPart();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip1();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip3();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip2();
    _Script_Engine::SceneComponent*& get_Tooltips_HandPanels();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip();
    _Script_Engine::SceneComponent*& get_Tooltips();
    _Script_AIModule::AIPerceptionStimuliSourceComponent*& get_AIPerceptionStimuliSource();
    _Script_Engine::RectLightComponent*& get_RectLight5();
    _Script_Engine::RectLightComponent*& get_RectLight4();
    _Script_Engine::RectLightComponent*& get_RectLight3();
    _Script_Engine::StaticMeshComponent*& get_SM_PuzzlePillarLights();
    _Script_Engine::StaticMeshComponent*& get_PuzzlePillar();
    _Script_Engine::SceneComponent*& get_MonsterPivot_3();
    _Script_Engine::SceneComponent*& get_MonsterPivot_2();
    _Script_Engine::ArrowComponent*& get_Arrow_MonsterPivot_3();
    _Script_Engine::TextRenderComponent*& get_Text_MonsterPivot_3();
    _Script_Engine::ArrowComponent*& get_Arrow_MonsterPivot_2();
    _Script_Engine::TextRenderComponent*& get_Text_MonsterPivot_2();
    _Script_Engine::SceneComponent*& get_MonsterPivot_1();
    _Script_Engine::ArrowComponent*& get_Arrow_MonsterPivot_1();
    _Script_Engine::TextRenderComponent*& get_Text_MonsterPivot_1();
    _Script_Engine::ArrowComponent*& get_Arrow_ToySpawn();
    _Script_Engine::TextRenderComponent*& get_Text_ToySpawn();
    _Script_Engine::SceneComponent*& get_ToySpawnPoint();
    _Script_Engine::TextRenderComponent*& get_Text_Puzzle_3();
    _Script_Engine::TextRenderComponent*& get_Text_Puzzle_2();
    _Script_Engine::TextRenderComponent*& get_Text_Puzzle_1();
    _Script_Engine::SceneComponent*& get_PuzzleSpawn_3();
    _Script_Engine::SceneComponent*& get_PuzzleSpawn_2();
    _Script_Engine::SceneComponent*& get_PuzzleSpawn_1();
    _Script_Engine::SceneComponent*& get_PuzzleSpawns();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_TL_ToyPart_Alpha_0C66EC3B4D15A77348AF689ED9FBC2BC();
    void* get_TL_ToyPart__Direction_0C66EC3B4D15A77348AF689ED9FBC2BC();
    _Script_Engine::TimelineComponent*& get_TL_ToyPart();
    float& get_TL_PuzzleDoor_Alpha_D5BA772E4845E8DC9A41E8B333B1CE04();
    void* get_TL_PuzzleDoor__Direction_D5BA772E4845E8DC9A41E8B333B1CE04();
    _Script_Engine::TimelineComponent*& get_TL_PuzzleDoor();
    void* get_Light_Color();
    void* get_Puzzles();
    void* get_MonsterPivots();
    bool get_Highlighted();
    void set_Highlighted(bool value);
    void* get_SabotageTimer();
    int32_t& get_Hits();
    void* get_WireBoards();
    _Script_Engine::Character*& get_Monster();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavPillarIndicator::BP_NavPillarIndicator_C*& get_NavIndicator();
    bool get_IsBoobyTrapped();
    void set_IsBoobyTrapped(bool value);
    int32_t& get_Puzzle1MaxStreak();
    int32_t& get_Puzzle2MaxStreak();
    int32_t& get_Puzzle3MaxStreak();
    int32_t& get_FinalPuzzleSolved();
    int32_t& get_MostRecentlySolvedPuzzle();
    _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C*& get_Spawned_Toy_Part();
    bool get_TestMode();
    void set_TestMode(bool value);
    bool get_Solved_();
    void set_Solved_(bool value);
    void* get_SolvedPuzzles();
    void* get_PuzzleProgress();
    _Script_Playtime_Multiplayer::PuzzleList*& get_PuzzleList();
    void* get_LocalPuzzleList();
    void* get_PuzzleToRemove();
    bool get_IsTutorial();
    void set_IsTutorial(bool value);
    void* get_PuzzleTypes();
    void* get_Stream();
    int32_t& get_Progress_Iterator();
    void* get_CustomRenderMeshes();
    void* get_PuzzleAnchors();
    _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& get_Puzzle3();
    _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& get_Puzzle2();
    _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& get_Puzzle1();
    bool get_PuzzlesRandomized();
    void set_PuzzlesRandomized(bool value);
    void* get_ToyPartSpawned();
    static _Script_CoreUObject::Class* static_class();
    void DestroyPuzzle();
    void GetPuzzleTypes();
    void OnRep_Puzzles();
    void RandomizePuzzles();
    void OnRep_DoorMatSetter();
    void UpdatePuzzleData();
    void OnRep_FinalPuzzleSolved();
    void LoadPillarFromSaveStruct(_Game_Gameplay_Puzzles_FPillarSaveStruct::FPillarSaveStruct Save);
    void GetPillarSaveStruct(_Game_Gameplay_Puzzles_FPillarSaveStruct::FPillarSaveStruct& State);
    void Sabotage_Boobytrap(float unused);
    void AllPuzzlesActive_(bool& Value);
    void AnyPuzzlesActive_(bool& Value);
    void Num_Puzzles_Active(int32_t& Num);
    void NumPuzzlesSolved(int32_t& Num);
    void AllPuzzlesSolved_(bool& Value);
    void UserConstructionScript0();
    void TL_PuzzleDoor__FinishedFunc();
    void TL_PuzzleDoor__UpdateFunc();
    void TL_ToyPart__FinishedFunc();
    void TL_ToyPart__UpdateFunc();
    void CheckSolved(int32_t PuzzleIndex);
    void ReceiveBeginPlay0();
    void SetHighlight(bool Highlight);
    void UpdatePlayersIndicator();
    void CheckForSabotaged();
    void OnOpenDoor();
    void BindPuzzleEvents();
    void MulticastUpdateLights();
    void Multicast_Set_Final_Puzzle(int32_t Puzzle_Index);
    void ExecuteUbergraph_BP_PuzzlePillar(int32_t EntryPoint);
    void ToyPartSpawned__DelegateSignature();
}; // Size: 0x4d0
#pragma pack(pop)
}
