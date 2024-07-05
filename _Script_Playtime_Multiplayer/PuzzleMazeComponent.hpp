#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\SplinePoint.hpp"
namespace _Script_Playtime_Multiplayer {
struct MazeData;
}
namespace _Script_Playtime_Multiplayer {
struct MazeMeshes;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzleMazeComponent : public _Script_Engine::SplineComponent {
    private: char pad_550[0x160]; public:
    int32_t& get_BallTargetIndex();
    float& get_BallPositionTarget();
    float& get_BallPosition();
    float& get_BallSpeed();
    float& get_Acceleration();
    float& get_BallMaxSpeed();
    float& get_Deceleration();
    void* get_CurrentMaze();
    _Script_Playtime_Multiplayer::MazeData*& get_MazeData();
    _Script_Playtime_Multiplayer::MazeMeshes*& get_MazeMeshes();
    void* get_Meshes();
    void* get_OnMazeComplete();
    void* get_OnBallPositionChanged();
    float& get_RotationDuration();
    _Script_Engine::CurveFloat*& get_CurveFloat();
    int32_t& get_Orientation();
    float& get_RingSize();
    int32_t& get_MazeChoice();
    int32_t& get_PreviewedMaze();
    void* get_TangentLengths();
    bool get_bIsComplete();
    void set_bIsComplete(bool value);
    void* get_RotateHistory();
    static _Script_CoreUObject::Class* static_class();
    void TimelineProgress(float Value);
    void TimelineEnded();
    void StartMaze(float InitialSpeed);
    void SetBallAcceleration(float NewAccel);
    void Rotate(bool Clockwise);
    void OnRep_Orientation();
    void OnRep_MazeChoice();
    void OnRep_IsComplete();
    void Multicast_ResetMaze();
    void MoveBallPhysics(float DeltaTime);
    bool IsInProgress();
    _Script_Engine::SplinePoint GetSplinePointAt(int32_t Index);
    float GetScaledBallSpeed();
    bool GetMeshDataFor(int32_t Index, void*& Type, int32_t& Ring, float& Rotation, bool& Flipped, bool& ShouldMakeCurve, float& CurveRotation);
    _Script_CoreUObject::Vector GetLocationOfIndex(int32_t Index);
    bool GetIsComplete();
    _Script_CoreUObject::IntPoint GetDesiredPosition();
    _Script_CoreUObject::Vector GetBallPosition();
    void FullReset();
    void FindBallTarget();
    void BP_Rotate_Sound_Trigger();
    void Authority_ResetMaze();
}; // Size: 0x6b0
#pragma pack(pop)
}
