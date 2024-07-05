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
struct MagicLeapARPinSaveGame : public _Script_Engine::SaveGame {
    private: char pad_28[0x88]; public:
    void* get_PinnedID();
    void* get_ComponentWorldTransform();
    void* get_PinTransform();
    bool get_bShouldPinActor();
    void set_bShouldPinActor(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
