#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDebugHudTextOptions {
    private: char pad_0[0x10]; public:
    void* get_Font();
    void* get_HorizontalAlignment();
    void* get_VerticalAlignment();
    void* get_ScreenOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
