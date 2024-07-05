#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniBakedOutputObject {
    private: char pad_0[0xb8]; public:
    void* get_Actor();
    void* get_Blueprint();
    void* get_ActorBakeName();
    void* get_BakedObject();
    void* get_BakedComponent();
    void* get_InstancedActors();
    void* get_InstancedComponents();
    void* get_LandscapeLayers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
