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
struct MagicLeapARPinInfoActorBase : public _Script_Engine::Actor {
    private: char pad_220[0x18]; public:
    void* get_PinId();
    bool get_bVisibilityOverride();
    void set_bVisibilityOverride(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnUpdateARPinState();
}; // Size: 0x238
#pragma pack(pop)
}
