#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TickableWorldSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AutoDestroySubsystem : public TickableWorldSubsystem {
    private: char pad_40[0x10]; public:
    void* get_ActorsToPoll();
    static _Script_CoreUObject::Class* static_class();
    void OnActorEndPlay(_Script_Engine::Actor* Actor, void* EndPlayReason);
}; // Size: 0x50
#pragma pack(pop)
}
