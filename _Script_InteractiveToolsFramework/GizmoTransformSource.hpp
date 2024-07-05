#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct GizmoTransformSource : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void SetTransform(_Script_CoreUObject::Transform& NewTransform);
    _Script_CoreUObject::Transform GetTransform();
}; // Size: 0x28
#pragma pack(pop)
}
