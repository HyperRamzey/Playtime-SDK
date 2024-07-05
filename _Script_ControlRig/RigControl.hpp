#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigElement.hpp"
namespace _Script_CoreUObject {
struct Enum;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigControl : public RigElement {
    private: char pad_18[0x2d8]; public:
    void* get_ControlType();
    void* get_DisplayName();
    void* get_ParentName();
    int32_t& get_ParentIndex();
    void* get_SpaceName();
    int32_t& get_SpaceIndex();
    void* get_OffsetTransform();
    void* get_InitialValue();
    void* get_Value();
    void* get_PrimaryAxis();
    bool get_bIsCurve();
    void set_bIsCurve(bool value);
    bool get_bAnimatable();
    void set_bAnimatable(bool value);
    bool get_bLimitTranslation();
    void set_bLimitTranslation(bool value);
    bool get_bLimitRotation();
    void set_bLimitRotation(bool value);
    bool get_bLimitScale();
    void set_bLimitScale(bool value);
    bool get_bDrawLimits();
    void set_bDrawLimits(bool value);
    void* get_MinimumValue();
    void* get_MaximumValue();
    bool get_bGizmoEnabled();
    void set_bGizmoEnabled(bool value);
    bool get_bGizmoVisible();
    void set_bGizmoVisible(bool value);
    void* get_GizmoName();
    void* get_GizmoTransform();
    void* get_GizmoColor();
    void* get_Dependents();
    bool get_bIsTransientControl();
    void set_bIsTransientControl(bool value);
    _Script_CoreUObject::Enum*& get_ControlEnum();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2f0
#pragma pack(pop)
}
