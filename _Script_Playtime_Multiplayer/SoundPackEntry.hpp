#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_Playtime_Multiplayer {
struct SoundPack;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct SoundPackEntry : public _Script_Engine::TableRowBase {
    private: char pad_8[0x40]; public:
    void* get_Name();
    void* get_Type();
    _Script_Playtime_Multiplayer::SoundPack*& get_SoundPack();
    void* get_Description();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
