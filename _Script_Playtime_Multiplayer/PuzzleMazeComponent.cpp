#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\SplinePoint.hpp"
#include "MazeData.hpp"
#include "MazeMeshes.hpp"
#include "PuzzleMazeComponent.hpp"
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::Multicast_ResetMaze() {
    return;
}
int32_t& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_BallTargetIndex() {
    return *(int32_t*)((uintptr_t)this + 0x548);
}
float& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_RotationDuration() {
    return *(float*)((uintptr_t)this + 0x5b8);
}
float& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_BallPositionTarget() {
    return *(float*)((uintptr_t)this + 0x54c);
}
float& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_BallMaxSpeed() {
    return *(float*)((uintptr_t)this + 0x55c);
}
_Script_CoreUObject::IntPoint _Script_Playtime_Multiplayer::PuzzleMazeComponent::GetDesiredPosition() {
    return;
}
float& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_BallPosition() {
    return *(float*)((uintptr_t)this + 0x550);
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::Authority_ResetMaze() {
    return;
}
void* _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_CurrentMaze() {
    return (void*)((uintptr_t)this + 0x568);
}
float& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_BallSpeed() {
    return *(float*)((uintptr_t)this + 0x554);
}
float& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_Acceleration() {
    return *(float*)((uintptr_t)this + 0x558);
}
float& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_Deceleration() {
    return *(float*)((uintptr_t)this + 0x560);
}
_Script_Playtime_Multiplayer::MazeData*& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_MazeData() {
    return *(_Script_Playtime_Multiplayer::MazeData**)((uintptr_t)this + 0x578);
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::FindBallTarget() {
    return;
}
_Script_Playtime_Multiplayer::MazeMeshes*& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_MazeMeshes() {
    return *(_Script_Playtime_Multiplayer::MazeMeshes**)((uintptr_t)this + 0x580);
}
void* _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_Meshes() {
    return (void*)((uintptr_t)this + 0x588);
}
void* _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_OnMazeComplete() {
    return (void*)((uintptr_t)this + 0x598);
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::TimelineEnded() {
    return;
}
void* _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_OnBallPositionChanged() {
    return (void*)((uintptr_t)this + 0x5a8);
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_CurveFloat() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x658);
}
int32_t& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_Orientation() {
    return *(int32_t*)((uintptr_t)this + 0x660);
}
float& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_RingSize() {
    return *(float*)((uintptr_t)this + 0x674);
}
int32_t& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_MazeChoice() {
    return *(int32_t*)((uintptr_t)this + 0x678);
}
int32_t& _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_PreviewedMaze() {
    return *(int32_t*)((uintptr_t)this + 0x67c);
}
void* _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_TangentLengths() {
    return (void*)((uintptr_t)this + 0x680);
}
bool _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_bIsComplete() {
    return (*(uint8_t*)((uintptr_t)this + 0x690 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::set_bIsComplete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x690 + 0);
    *(uint8_t*)((uintptr_t)this + 0x690 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::PuzzleMazeComponent::get_RotateHistory() {
    return (void*)((uintptr_t)this + 0x698);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PuzzleMazeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PuzzleMazeComponent");
    return result;
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::TimelineProgress(float Value) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::StartMaze(float InitialSpeed) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::SetBallAcceleration(float NewAccel) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::Rotate(bool Clockwise) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::OnRep_Orientation() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::OnRep_MazeChoice() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::OnRep_IsComplete() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::MoveBallPhysics(float DeltaTime) {
    return;
}
bool _Script_Playtime_Multiplayer::PuzzleMazeComponent::IsInProgress() {
    return;
}
_Script_Engine::SplinePoint _Script_Playtime_Multiplayer::PuzzleMazeComponent::GetSplinePointAt(int32_t Index) {
    return;
}
float _Script_Playtime_Multiplayer::PuzzleMazeComponent::GetScaledBallSpeed() {
    return;
}
bool _Script_Playtime_Multiplayer::PuzzleMazeComponent::GetMeshDataFor(int32_t Index, void*& Type, int32_t& Ring, float& Rotation, bool& Flipped, bool& ShouldMakeCurve, float& CurveRotation) {
    return;
}
_Script_CoreUObject::Vector _Script_Playtime_Multiplayer::PuzzleMazeComponent::GetLocationOfIndex(int32_t Index) {
    return;
}
bool _Script_Playtime_Multiplayer::PuzzleMazeComponent::GetIsComplete() {
    return;
}
_Script_CoreUObject::Vector _Script_Playtime_Multiplayer::PuzzleMazeComponent::GetBallPosition() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::FullReset() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleMazeComponent::BP_Rotate_Sound_Trigger() {
    return;
}
