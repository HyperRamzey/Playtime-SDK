#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct GizmoComponentAxisSource : public _Script_CoreUObject::Object {
    private: char pad_28[0x18]; public:
    _Script_Engine::SceneComponent*& get_Component();
    int32_t& get_AxisIndex();
    bool get_bLocalAxes();
    void set_bLocalAxes(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
