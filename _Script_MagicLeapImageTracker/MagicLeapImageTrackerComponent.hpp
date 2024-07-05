#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapImageTracker {
#pragma pack(push, 1)
struct MagicLeapImageTrackerComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x70]; public:
    _Script_Engine::Texture2D*& get_TargetImageTexture();
    void* get_Name();
    float& get_LongerDimension();
    bool get_bIsStationary();
    void set_bIsStationary(bool value);
    bool get_bUseUnreliablePose();
    void set_bUseUnreliablePose(bool value);
    void* get_AxisOrientation();
    void* get_OnSetImageTargetSucceeded();
    void* get_OnSetImageTargetFailed();
    void* get_OnImageTargetFound();
    void* get_OnImageTargetLost();
    void* get_OnImageTargetUnreliableTracking();
    static _Script_CoreUObject::Class* static_class();
    bool SetTargetAsync(_Script_Engine::Texture2D* ImageTarget);
    bool RemoveTargetAsync();
}; // Size: 0x270
#pragma pack(pop)
}
