#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PuzzleBase.hpp"
namespace _Script_Playtime_Multiplayer {
struct PuzzleMazeComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct MaterialInstance;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Playtime_Multiplayer {
struct HandMagnetComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzleMaze : public PuzzleBase {
    private: char pad_478[0x78]; public:
    float& get_PreviousBallExitSpeed();
    _Script_Playtime_Multiplayer::PuzzleMazeComponent*& get_Maze1();
    _Script_Playtime_Multiplayer::PuzzleMazeComponent*& get_Maze2();
    _Script_Engine::StaticMeshComponent*& get_Ball();
    _Script_Engine::StaticMeshComponent*& get_TopLights();
    _Script_Engine::StaticMeshComponent*& get_BottomLights();
    _Script_Engine::StaticMeshComponent*& get_CurrentlyFlashingLights();
    _Script_Engine::MaterialInstance*& get_LightOffMat();
    _Script_Engine::AudioComponent*& get_BallRollingSound();
    _Script_Engine::SplineComponent*& get_TransitionSpline();
    _Script_Engine::SplineComponent*& get_WinSpline();
    _Script_Engine::TimelineComponent*& get_MoveThroughTransition();
    _Script_Engine::TimelineComponent*& get_MoveToEnd();
    _Script_Engine::TimelineComponent*& get_FlashLights();
    static _Script_CoreUObject::Class* static_class();
    void TriggerProgressIncrement(float BallExitSpeed);
    void SolvedButtonGlow();
    void SetBallPosition(_Script_CoreUObject::Vector Position);
    void RotateMaze(_Script_Playtime_Multiplayer::HandMagnetComponent* Button, _Script_Playtime_Multiplayer::PuzzleMazeComponent* MazeComponent, bool Clockwise);
    void PlaySolvedSound();
}; // Size: 0x4f0
#pragma pack(pop)
}
