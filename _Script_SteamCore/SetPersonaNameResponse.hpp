#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SetPersonaNameResponse {
    private: char pad_0[0x3]; public:
    void* get_Result();
    bool get_bSuccess();
    void set_bSuccess(bool value);
    bool get_bLocalSuccess();
    void set_bLocalSuccess(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3
#pragma pack(pop)
}
