#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapController {
#pragma pack(push, 1)
struct MagicLeapTouchpadGesturesComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x90]; public:
    void* get_OnTouchpadGestureStart();
    void* get_OnTouchpadGestureContinue();
    void* get_OnTouchpadGestureEnd();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
