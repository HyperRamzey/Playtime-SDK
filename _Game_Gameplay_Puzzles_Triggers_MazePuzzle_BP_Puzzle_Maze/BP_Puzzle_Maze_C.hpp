#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Maze_Puzzle_Component {
struct BP_Maze_Puzzle_Component_C;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Puzzle_Maze {
#pragma pack(push, 1)
struct BP_Puzzle_Maze_C : public _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C {
    private: char pad_3e0[0xc8]; public:
    void* get_UberGraphFrame0();
    _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Maze_Puzzle_Component::BP_Maze_Puzzle_Component_C*& get_MazeTwo();
    _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Maze_Puzzle_Component::BP_Maze_Puzzle_Component_C*& get_MazeOne();
    _Script_Engine::SceneComponent*& get_SecondPortion();
    _Script_Engine::SceneComponent*& get_FirstPortion();
    _Script_Engine::AudioComponent*& get_BallRollingSound();
    _Script_Engine::StaticMeshComponent*& get_Bottom_Maze_Lights();
    _Script_Engine::StaticMeshComponent*& get_Top_Maze_Lights();
    _Script_Engine::SplineComponent*& get_WinSpline();
    _Script_Engine::SplineComponent*& get_TransitionSpline();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_CCWButtonHandMagnet();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_CWButtonHandMagnet();
    _Script_Engine::StaticMeshComponent*& get_Ball();
    _Script_Engine::SkeletalMeshComponent*& get_Hand1();
    _Script_Engine::SkeletalMeshComponent*& get_Hand_0();
    _Script_Engine::BoxComponent*& get_CWBoxCollision();
    _Script_Engine::BoxComponent*& get_CCWBoxCollision();
    void* get_Flash_Lights__Direction_37B990CC49547DCA387A5B97D4BD6BB4();
    _Script_Engine::TimelineComponent*& get_Flash_Lights();
    float& get_MoveToEnd_Progress_A391DB8343730811AF2661AE067BB8F1();
    void* get_MoveToEnd__Direction_A391DB8343730811AF2661AE067BB8F1();
    _Script_Engine::TimelineComponent*& get_MoveToEnd();
    float& get_MoveThroughTransition_Progress_23C2222C43541DF46C4B7799C8666387();
    void* get_MoveThroughTransition__Direction_23C2222C43541DF46C4B7799C8666387();
    _Script_Engine::TimelineComponent*& get_MoveThroughTransition();
    float& get_PreviousBallExitSpeed();
    _Script_Engine::StaticMeshComponent*& get_Currently_Flashing_Maze_Lights();
    static _Script_CoreUObject::Class* static_class();
    void ResetPuzzle0();
    void OnRep_Progress_Implementation0();
    void OnRep_State_Implementation0();
    void ToSolved0();
    void ToIdle0();
    void DoIncrement0(bool& ShouldComplete_);
    void IdleToInProgress0();
    void MoveThroughTransition__FinishedFunc();
    void MoveThroughTransition__UpdateFunc();
    void MoveToEnd__FinishedFunc();
    void MoveToEnd__UpdateFunc();
    void Flash_Lights__FinishedFunc();
    void Flash_Lights__UpdateFunc();
    void Flash_Lights__Off__EventFunc();
    void Flash_Lights__On__EventFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_Puzzle_Maze_CCWButtonHandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_Puzzle_Maze_CWButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void Event_Increment_Progress(float Ball_Exit_Speed);
    void SetBallPosition(_Script_CoreUObject::Vector Position);
    void BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_2_OnBallPositionChanged__DelegateSignature(_Script_CoreUObject::Vector BallPosition);
    void BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_3_OnBallPositionChanged__DelegateSignature(_Script_CoreUObject::Vector BallPosition);
    void BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_4_OnMazeComplete__DelegateSignature(float BallSpeed);
    void BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_5_OnMazeComplete__DelegateSignature(float BallSpeed);
    void ExecuteUbergraph_BP_Puzzle_Maze(int32_t EntryPoint);
}; // Size: 0x4a8
#pragma pack(pop)
}
