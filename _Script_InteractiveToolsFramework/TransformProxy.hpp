#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct TransformProxy : public _Script_CoreUObject::Object {
    private: char pad_28[0xc8]; public:
    bool get_bRotatePerObject();
    void set_bRotatePerObject(bool value);
    bool get_bSetPivotMode();
    void set_bSetPivotMode(bool value);
    void* get_SharedTransform();
    void* get_InitialSharedTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
