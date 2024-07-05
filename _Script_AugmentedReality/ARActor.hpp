#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Guid;
}
namespace _Script_AugmentedReality {
struct ARComponent;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARActor : public _Script_Engine::Actor {
    static _Script_CoreUObject::Class* static_class();
    _Script_AugmentedReality::ARComponent* AddARComponent(void* InComponentClass, _Script_CoreUObject::Guid& NativeID);
}; // Size: 0x220
#pragma pack(pop)
}
