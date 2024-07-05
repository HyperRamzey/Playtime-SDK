#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARMeshUpdatePayload {
    private: char pad_0[0x60]; public:
    void* get_SessionPayload();
    void* get_WorldTransform();
    void* get_ObjectClassification();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
