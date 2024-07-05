#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct UNetworkGrabComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x28]; public:
    void* get_OnAttachmentStateChange();
    float& get_Padding();
    int32_t& get_MaxAttachedHands();
    int32_t& get_CurrentAttachedHands();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
