#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PresetSlot {
    private: char pad_0[0x58]; public:
    int32_t& get_LeftHand();
    int32_t& get_LeftHandColor();
    int32_t& get_RightHand();
    int32_t& get_RightHandColor();
    int32_t& get_Grabpack();
    int32_t& get_GrabpackColor();
    int32_t& get_Skin();
    int32_t& get_SkinColor();
    int32_t& get_Hat();
    int32_t& get_HatColor();
    int32_t& get_Face();
    int32_t& get_FaceColor();
    int32_t& get_Shirt();
    int32_t& get_ShirtColor();
    int32_t& get_Pants();
    int32_t& get_PantsColor();
    int32_t& get_Shoes();
    int32_t& get_ShoesColor();
    void* get_Emotes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
