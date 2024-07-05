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
struct AxisPositionGizmo : public InteractiveGizmo {
    private: char pad_38[0xa0]; public:
    void* get_AxisSource();
    void* get_ParameterSource();
    void* get_HitTarget();
    void* get_StateTarget();
    bool get_bEnableSignedAxis();
    void set_bEnableSignedAxis(bool value);
    bool get_bInInteraction();
    void set_bInInteraction(bool value);
    void* get_InteractionOrigin();
    void* get_InteractionAxis();
    void* get_InteractionStartPoint();
    void* get_InteractionCurPoint();
    float& get_InteractionStartParameter();
    float& get_InteractionCurParameter();
    float& get_ParameterSign();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
