#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InteractiveGizmo.hpp"
namespace _Script_InteractiveToolsFramework {
struct GizmoTransformChangeStateTarget;
}
namespace _Script_InteractiveToolsFramework {
struct TransformProxy;
}
namespace _Script_InteractiveToolsFramework {
struct GizmoComponentAxisSource;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct IntervalGizmo : public InteractiveGizmo {
    private: char pad_38[0xf8]; public:
    _Script_InteractiveToolsFramework::GizmoTransformChangeStateTarget*& get_StateTarget();
    _Script_InteractiveToolsFramework::TransformProxy*& get_TransformProxy();
    void* get_ActiveComponents();
    void* get_ActiveGizmos();
    _Script_InteractiveToolsFramework::GizmoComponentAxisSource*& get_AxisYSource();
    _Script_InteractiveToolsFramework::GizmoComponentAxisSource*& get_AxisZSource();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
