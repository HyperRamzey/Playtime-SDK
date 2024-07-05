#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleEventBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleEventReceiverBase : public ParticleModuleEventBase {
    private: char pad_30[0x10]; public:
    void* get_EventGeneratorType();
    void* get_EventName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
