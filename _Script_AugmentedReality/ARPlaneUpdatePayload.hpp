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
struct ARPlaneUpdatePayload {
    private: char pad_0[0x80]; public:
    void* get_SessionPayload();
    void* get_WorldTransform();
    void* get_Center();
    void* get_Extents();
    void* get_BoundaryVertices();
    void* get_ObjectClassification();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
