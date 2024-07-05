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
struct LocalizedIconInfo {
    private: char pad_0[0x30]; public:
    void* get_LanguageCode();
    void* get_IconModelPath();
    void* get_IconPortalPath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
