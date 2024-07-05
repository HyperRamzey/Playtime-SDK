#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MediaAssets\BaseMediaSource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_ImgMedia {
#pragma pack(push, 1)
struct ImgMediaSource : public _Script_MediaAssets::BaseMediaSource {
    private: char pad_88[0x40]; public:
    bool get_IsPathRelativeToProjectRoot();
    void set_IsPathRelativeToProjectRoot(bool value);
    void* get_FrameRateOverride();
    void* get_ProxyOverride();
    void* get_SequencePath();
    static _Script_CoreUObject::Class* static_class();
    void SetSequencePath(void* Path);
    void SetMipLevelDistance(float Distance);
    void RemoveTargetObject(_Script_Engine::Actor* InActor);
    void RemoveGlobalCamera(_Script_Engine::Actor* InActor);
    void* GetSequencePath();
    void GetProxies(void*& OutProxies);
    void AddTargetObject(_Script_Engine::Actor* InActor, float Width);
    void AddGlobalCamera(_Script_Engine::Actor* InActor);
}; // Size: 0xc8
#pragma pack(pop)
}
