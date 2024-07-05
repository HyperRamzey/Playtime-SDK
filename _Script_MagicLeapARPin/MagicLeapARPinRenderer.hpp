#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapARPin {
#pragma pack(push, 1)
struct MagicLeapARPinRenderer : public _Script_Engine::Actor {
    private: char pad_220[0x68]; public:
    bool get_bInfoActorsVisibilityOverride();
    void set_bInfoActorsVisibilityOverride(bool value);
    void* get_AllInfoActors();
    void* get_ClassToSpawn();
    static _Script_CoreUObject::Class* static_class();
    void SetVisibilityOverride(bool InVisibilityOverride);
}; // Size: 0x288
#pragma pack(pop)
}
