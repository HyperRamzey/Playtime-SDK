#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\MaterialInstance.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "HandMagnetComponent.hpp"
#include "PuzzleBase.hpp"
#include "PuzzleMaze.hpp"
#include "PuzzleMazeComponent.hpp"
_Script_Playtime_Multiplayer::PuzzleMazeComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_Maze2() {
    return *(_Script_Playtime_Multiplayer::PuzzleMazeComponent**)((uintptr_t)this + 0x488);
}
_Script_Engine::SplineComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_WinSpline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x4c8);
}
_Script_Playtime_Multiplayer::PuzzleMazeComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_Maze1() {
    return *(_Script_Playtime_Multiplayer::PuzzleMazeComponent**)((uintptr_t)this + 0x480);
}
float& _Script_Playtime_Multiplayer::PuzzleMaze::get_PreviousBallExitSpeed() {
    return *(float*)((uintptr_t)this + 0x478);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PuzzleMaze::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PuzzleMaze");
    return result;
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_TopLights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x498);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_Ball() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x490);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_BottomLights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x4a0);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_CurrentlyFlashingLights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x4a8);
}
_Script_Engine::MaterialInstance*& _Script_Playtime_Multiplayer::PuzzleMaze::get_LightOffMat() {
    return *(_Script_Engine::MaterialInstance**)((uintptr_t)this + 0x4b0);
}
_Script_Engine::AudioComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_BallRollingSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x4b8);
}
_Script_Engine::SplineComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_TransitionSpline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x4c0);
}
_Script_Engine::TimelineComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_MoveThroughTransition() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4d0);
}
_Script_Engine::TimelineComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_MoveToEnd() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4d8);
}
_Script_Engine::TimelineComponent*& _Script_Playtime_Multiplayer::PuzzleMaze::get_FlashLights() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4e0);
}
void _Script_Playtime_Multiplayer::PuzzleMaze::TriggerProgressIncrement(float BallExitSpeed) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMaze::SolvedButtonGlow() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMaze::SetBallPosition(_Script_CoreUObject::Vector Position) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMaze::RotateMaze(_Script_Playtime_Multiplayer::HandMagnetComponent* Button, _Script_Playtime_Multiplayer::PuzzleMazeComponent* MazeComponent, bool Clockwise) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMaze::PlaySolvedSound() {
    return;
}
