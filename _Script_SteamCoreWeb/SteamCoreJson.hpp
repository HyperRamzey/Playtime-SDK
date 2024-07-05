#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct SteamCoreJson {
    private: char pad_0[0x28]; public:
    void* get_Key();
    void* get_String();
    int32_t& get_Number();
    bool get_Bool();
    void set_Bool(bool value);
    void* get_Type();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
