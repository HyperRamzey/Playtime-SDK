#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PhonyPhysicsComponent.hpp"
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PhonyPhysicsRailComponent : public PhonyPhysicsComponent {
    private: char pad_280[0x20]; public:
    void* get_TargetTag();
    bool get_bAffectTargetRotation();
    void set_bAffectTargetRotation(bool value);
    float& get_StartingDistance();
    _Script_Engine::SplineComponent*& get_Spline();
    bool get_bDoDistanceDebug();
    void set_bDoDistanceDebug(bool value);
    float& get_SplineLength();
    static _Script_CoreUObject::Class* static_class();
    void SnapTargetToSpline();
    void SetSpeed(float& Speed);
    void SetDistance(float& Distance);
}; // Size: 0x2a0
#pragma pack(pop)
}
