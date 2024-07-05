#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
namespace _Script_AugmentedReality {
struct ARTrackedGeometry;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_CoreUObject {
struct LinearColor;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARPin : public _Script_CoreUObject::Object {
    private: char pad_28[0xc8]; public:
    _Script_AugmentedReality::ARTrackedGeometry*& get_TrackedGeometry();
    _Script_Engine::SceneComponent*& get_PinnedComponent();
    void* get_LocalToTrackingTransform();
    void* get_LocalToAlignedTrackingTransform();
    void* get_TrackingState();
    void* get_OnARTrackingStateChanged();
    void* get_OnARTransformUpdated();
    static _Script_CoreUObject::Class* static_class();
    void* GetTrackingState();
    _Script_AugmentedReality::ARTrackedGeometry* GetTrackedGeometry();
    _Script_Engine::SceneComponent* GetPinnedComponent();
    _Script_CoreUObject::Transform GetLocalToWorldTransform();
    _Script_CoreUObject::Transform GetLocalToTrackingTransform();
    void* GetDebugName();
    void DebugDraw(_Script_Engine::World* World, _Script_CoreUObject::LinearColor& Color, float Scale, float PersistForSeconds);
}; // Size: 0xf0
#pragma pack(pop)
}
