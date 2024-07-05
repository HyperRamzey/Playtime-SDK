#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigGizmoLibrary : public _Script_CoreUObject::Object {
    private: char pad_28[0xb8]; public:
    void* get_DefaultGizmo();
    void* get_DefaultMaterial();
    void* get_MaterialColorParameter();
    void* get_Gizmos();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
