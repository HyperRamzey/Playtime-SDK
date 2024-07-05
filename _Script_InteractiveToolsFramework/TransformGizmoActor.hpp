#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GizmoActor.hpp"
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct TransformGizmoActor : public GizmoActor {
    private: char pad_220[0x80]; public:
    _Script_Engine::PrimitiveComponent*& get_TranslateX();
    _Script_Engine::PrimitiveComponent*& get_TranslateY();
    _Script_Engine::PrimitiveComponent*& get_TranslateZ();
    _Script_Engine::PrimitiveComponent*& get_TranslateYZ();
    _Script_Engine::PrimitiveComponent*& get_TranslateXZ();
    _Script_Engine::PrimitiveComponent*& get_TranslateXY();
    _Script_Engine::PrimitiveComponent*& get_RotateX();
    _Script_Engine::PrimitiveComponent*& get_RotateY();
    _Script_Engine::PrimitiveComponent*& get_RotateZ();
    _Script_Engine::PrimitiveComponent*& get_UniformScale();
    _Script_Engine::PrimitiveComponent*& get_AxisScaleX();
    _Script_Engine::PrimitiveComponent*& get_AxisScaleY();
    _Script_Engine::PrimitiveComponent*& get_AxisScaleZ();
    _Script_Engine::PrimitiveComponent*& get_PlaneScaleYZ();
    _Script_Engine::PrimitiveComponent*& get_PlaneScaleXZ();
    _Script_Engine::PrimitiveComponent*& get_PlaneScaleXY();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2a0
#pragma pack(pop)
}
