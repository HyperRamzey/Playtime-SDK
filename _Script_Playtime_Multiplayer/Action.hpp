#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct Action : public _Script_Engine::TableRowBase {
    private: char pad_8[0xc8]; public:
    void* get_Name();
    bool get_bIsGesture();
    void set_bIsGesture(bool value);
    int32_t& get_Price();
    void* get_Rarity();
    void* get_CharacterType();
    void* get_RightHandGesture();
    void* get_LeftHandGesture();
    void* get_FirstPersonEmote();
    void* get_ThirdPersonEmote();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
