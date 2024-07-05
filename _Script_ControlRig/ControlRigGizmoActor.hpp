#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigGizmoActor : public _Script_Engine::Actor {
    private: char pad_220[0x28]; public:
    _Script_Engine::SceneComponent*& get_ActorRootComponent();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent();
    void* get_ControlRigIndex();
    void* get_ControlName();
    void* get_ColorParameterName();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    bool get_bSelected();
    void set_bSelected(bool value);
    bool get_bSelectable();
    void set_bSelectable(bool value);
    bool get_bHovered();
    void set_bHovered(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetSelected(bool bInSelected);
    void SetSelectable(bool bInSelectable);
    void SetHovered(bool bInHovered);
    void SetGlobalTransform(_Script_CoreUObject::Transform& InTransform);
    void SetEnabled(bool bInEnabled);
    void OnTransformChanged(_Script_CoreUObject::Transform& NewTransform);
    void OnSelectionChanged(bool bIsSelected);
    void OnManipulatingChanged(bool bIsManipulating);
    void OnHoveredChanged(bool bIsSelected);
    void OnEnabledChanged(bool BIsEnabled);
    bool IsSelectedInEditor();
    bool IsHovered();
    bool IsEnabled();
    _Script_CoreUObject::Transform GetGlobalTransform();
}; // Size: 0x248
#pragma pack(pop)
}
