#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InteractiveGizmo.hpp"
namespace _Script_InteractiveToolsFramework {
struct TransformProxy;
}
namespace _Script_InteractiveToolsFramework {
struct GizmoConstantFrameAxisSource;
}
namespace _Script_InteractiveToolsFramework {
struct GizmoComponentAxisSource;
}
namespace _Script_InteractiveToolsFramework {
struct GizmoScaledTransformSource;
}
namespace _Script_InteractiveToolsFramework {
struct GizmoTransformChangeStateTarget;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct TransformGizmo : public InteractiveGizmo {
    private: char pad_38[0x168]; public:
    _Script_InteractiveToolsFramework::TransformProxy*& get_ActiveTarget();
    bool get_bSnapToWorldGrid();
    void set_bSnapToWorldGrid(bool value);
    bool get_bGridSizeIsExplicit();
    void set_bGridSizeIsExplicit(bool value);
    void* get_ExplicitGridSize();
    bool get_bRotationGridSizeIsExplicit();
    void set_bRotationGridSizeIsExplicit(bool value);
    void* get_ExplicitRotationGridSize();
    bool get_bSnapToWorldRotGrid();
    void set_bSnapToWorldRotGrid(bool value);
    bool get_bUseContextCoordinateSystem();
    void set_bUseContextCoordinateSystem(bool value);
    void* get_CurrentCoordinateSystem();
    void* get_ActiveComponents();
    void* get_NonuniformScaleComponents();
    void* get_ActiveGizmos();
    _Script_InteractiveToolsFramework::GizmoConstantFrameAxisSource*& get_CameraAxisSource();
    _Script_InteractiveToolsFramework::GizmoComponentAxisSource*& get_AxisXSource();
    _Script_InteractiveToolsFramework::GizmoComponentAxisSource*& get_AxisYSource();
    _Script_InteractiveToolsFramework::GizmoComponentAxisSource*& get_AxisZSource();
    _Script_InteractiveToolsFramework::GizmoComponentAxisSource*& get_UnitAxisXSource();
    _Script_InteractiveToolsFramework::GizmoComponentAxisSource*& get_UnitAxisYSource();
    _Script_InteractiveToolsFramework::GizmoComponentAxisSource*& get_UnitAxisZSource();
    _Script_InteractiveToolsFramework::GizmoTransformChangeStateTarget*& get_StateTarget();
    _Script_InteractiveToolsFramework::GizmoScaledTransformSource*& get_ScaledTransformSource();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
