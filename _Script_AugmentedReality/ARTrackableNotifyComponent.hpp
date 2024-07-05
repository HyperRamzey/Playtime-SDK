#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARTrackableNotifyComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x150]; public:
    void* get_OnAddTrackedGeometry();
    void* get_OnUpdateTrackedGeometry();
    void* get_OnRemoveTrackedGeometry();
    void* get_OnAddTrackedPlane();
    void* get_OnUpdateTrackedPlane();
    void* get_OnRemoveTrackedPlane();
    void* get_OnAddTrackedPoint();
    void* get_OnUpdateTrackedPoint();
    void* get_OnRemoveTrackedPoint();
    void* get_OnAddTrackedImage();
    void* get_OnUpdateTrackedImage();
    void* get_OnRemoveTrackedImage();
    void* get_OnAddTrackedFace();
    void* get_OnUpdateTrackedFace();
    void* get_OnRemoveTrackedFace();
    void* get_OnAddTrackedEnvProbe();
    void* get_OnUpdateTrackedEnvProbe();
    void* get_OnRemoveTrackedEnvProbe();
    void* get_OnAddTrackedObject();
    void* get_OnUpdateTrackedObject();
    void* get_OnRemoveTrackedObject();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x200
#pragma pack(pop)
}
