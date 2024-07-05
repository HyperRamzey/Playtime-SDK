#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GizmoBaseTransformSource.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct GizmoComponentWorldTransformSource : public GizmoBaseTransformSource {
    private: char pad_48[0x10]; public:
    _Script_Engine::SceneComponent*& get_Component();
    bool get_bModifyComponentOnTransform();
    void set_bModifyComponentOnTransform(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
