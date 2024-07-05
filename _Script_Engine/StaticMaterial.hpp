#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StaticMaterial {
    private: char pad_0[0x30]; public:
    _Script_Engine::MaterialInterface*& get_MaterialInterface();
    void* get_MaterialSlotName();
    void* get_ImportedMaterialSlotName();
    void* get_UVChannelData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
