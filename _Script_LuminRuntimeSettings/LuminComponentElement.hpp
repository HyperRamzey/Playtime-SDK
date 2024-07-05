#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LuminRuntimeSettings {
#pragma pack(push, 1)
struct LuminComponentElement {
    private: char pad_0[0x48]; public:
    void* get_Name();
    void* get_VisibleName();
    void* get_ExecutableName();
    void* get_ComponentType();
    void* get_ExtraComponentSubElements();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
