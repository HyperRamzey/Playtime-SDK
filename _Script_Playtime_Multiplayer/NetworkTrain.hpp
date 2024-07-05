#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct NetworkTrain : public _Script_Engine::Actor {
    private: char pad_220[0x110]; public:
    bool get_bUseNewTrainSystem();
    void set_bUseNewTrainSystem(bool value);
    void* get_Timer_SummonTrain();
    int32_t& get_StartStation();
    int32_t& get_EndStation();
    float& get_TrainDistance();
    float& get_Speed();
    float& get_TrackLength();
    void* get_TrainHandles();
    void* get_TrainStationClass();
    void* get_GeneratedStations();
    float& get_CartOffset();
    float& get_TrainAlpha();
    void* get_TrainCarts();
    bool get_bIsMoving();
    void set_bIsMoving(bool value);
    _Script_Engine::CurveFloat*& get_CurveFloat();
    static _Script_CoreUObject::Class* static_class();
    void TimelineProgress(float Value);
    void TimelineEnded();
    void Tick(float DeltaSeconds);
    void SummonTrain(int32_t Station);
    void SetupTimeline();
    void ReconstructTrainStations();
    void OnTrainStopped();
    void OnTrainStarted();
    void OnPassengerExit(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComponent);
    void OnPassengerEnter(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComponent);
    void Multi_StartTrain(float PlaybackPosition);
    void MoveTrain(float Alpha, _Script_Engine::SceneComponent* Cart, int32_t CartIndex);
    void BeginPlay();
}; // Size: 0x330
#pragma pack(pop)
}
