#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeap {
struct MagicLeapRaycastQueryParams;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct MagicLeapRaycastComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x68]; public:
    static _Script_CoreUObject::Class* static_class();
    bool RequestRaycast(_Script_MagicLeap::MagicLeapRaycastQueryParams& RequestParams, void*& ResultDelegate);
}; // Size: 0x118
#pragma pack(pop)
}
