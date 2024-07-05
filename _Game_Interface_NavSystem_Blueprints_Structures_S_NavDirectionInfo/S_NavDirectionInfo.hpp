#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Structures_S_NavDirectionInfo {
#pragma pack(push, 1)
struct S_NavDirectionInfo {
    private: char pad_0[0x28]; public:
    void* get_Name_2_276902A34F4ACF03CFAC72A02D830611();
    int32_t& get_Rotation_5_1B4B68DA484B3F2FA234D19060B1265C();
    void* get_MarkWidgetClass_9_1FA05BFE499B6C763C3170BC1B205AC7();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
