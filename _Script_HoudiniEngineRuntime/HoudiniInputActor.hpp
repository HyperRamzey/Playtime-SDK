#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniInputObject.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniInputActor : public HoudiniInputObject {
    private: char pad_b0[0x60]; public:
    void* get_ActorComponents();
    void* get_ActorSceneComponents();
    int32_t& get_LastUpdateNumComponentsAdded();
    int32_t& get_LastUpdateNumComponentsRemoved();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x110
#pragma pack(pop)
}
