#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct GizmoAxisSource : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    bool HasTangentVectors();
    void GetTangentVectors(_Script_CoreUObject::Vector& TangentXOut, _Script_CoreUObject::Vector& TangentYOut);
    _Script_CoreUObject::Vector GetOrigin();
    _Script_CoreUObject::Vector GetDirection();
}; // Size: 0x28
#pragma pack(pop)
}
