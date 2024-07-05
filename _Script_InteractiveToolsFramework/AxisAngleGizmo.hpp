#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InteractiveGizmo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct AxisAngleGizmo : public InteractiveGizmo {
    private: char pad_38[0xb8]; public:
    void* get_AxisSource();
    void* get_AngleSource();
    void* get_HitTarget();
    void* get_StateTarget();
    bool get_bInInteraction();
    void set_bInInteraction(bool value);
    void* get_RotationOrigin();
    void* get_RotationAxis();
    void* get_RotationPlaneX();
    void* get_RotationPlaneY();
    void* get_InteractionStartPoint();
    void* get_InteractionCurPoint();
    float& get_InteractionStartAngle();
    float& get_InteractionCurAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
