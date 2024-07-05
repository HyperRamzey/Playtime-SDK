#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct GizmoVec2ParameterSource : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void SetParameter(_Script_CoreUObject::Vector2D& NewValue);
    _Script_CoreUObject::Vector2D GetParameter();
    void EndModify();
    void BeginModify();
}; // Size: 0x28
#pragma pack(pop)
}
