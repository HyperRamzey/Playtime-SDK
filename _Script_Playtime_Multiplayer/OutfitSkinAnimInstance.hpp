#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct OutfitSkinAnimInstance : public _Script_Engine::AnimInstance {
    void* get_SkinType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c0
#pragma pack(pop)
}
