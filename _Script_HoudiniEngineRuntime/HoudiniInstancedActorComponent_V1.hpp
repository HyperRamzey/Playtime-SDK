#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniInstancedActorComponent_V1 : public _Script_Engine::SceneComponent {
    private: char pad_200[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x210
#pragma pack(pop)
}