#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SaveGame.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapARPin {
#pragma pack(push, 1)
struct MagicLeapARPinContentBindings : public _Script_Engine::SaveGame {
    private: char pad_28[0x50]; public:
    void* get_AllContentBindings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
