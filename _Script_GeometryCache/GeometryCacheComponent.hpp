#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_GeometryCache {
struct GeometryCache;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCache {
#pragma pack(push, 1)
struct GeometryCacheComponent : public _Script_Engine::MeshComponent {
    private: char pad_480[0x60]; public:
    _Script_GeometryCache::GeometryCache*& get_GeometryCache();
    bool get_bRunning();
    void set_bRunning(bool value);
    bool get_bLooping();
    void set_bLooping(bool value);
    bool get_bExtrapolateFrames();
    void set_bExtrapolateFrames(bool value);
    float& get_StartTimeOffset();
    float& get_PlaybackSpeed();
    float& get_MotionVectorScale();
    int32_t& get_NumTracks();
    float& get_ElapsedTime();
    float& get_Duration();
    bool get_bManualTick();
    void set_bManualTick(bool value);
    static _Script_CoreUObject::Class* static_class();
    void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    void Stop();
    void SetStartTimeOffset(float NewStartTimeOffset);
    void SetPlaybackSpeed(float NewPlaybackSpeed);
    void SetMotionVectorScale(float NewMotionVectorScale);
    void SetLooping(bool bNewLooping);
    bool SetGeometryCache(_Script_GeometryCache::GeometryCache* NewGeomCache);
    void SetExtrapolateFrames(bool bNewExtrapolating);
    void PlayReversedFromEnd();
    void PlayReversed();
    void PlayFromStart();
    void Play();
    void Pause();
    bool IsPlayingReversed();
    bool IsPlaying();
    bool IsLooping();
    bool IsExtrapolatingFrames();
    float GetStartTimeOffset();
    float GetPlaybackSpeed();
    float GetPlaybackDirection();
    int32_t GetNumberOfFrames();
    float GetMotionVectorScale();
    float GetDuration();
    float GetAnimationTime();
}; // Size: 0x4e0
#pragma pack(pop)
}