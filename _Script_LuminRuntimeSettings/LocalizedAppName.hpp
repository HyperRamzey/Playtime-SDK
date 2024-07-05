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
struct LocalizedAppName {
    private: char pad_0[0x20]; public:
    void* get_LanguageCode();
    void* get_AppName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
