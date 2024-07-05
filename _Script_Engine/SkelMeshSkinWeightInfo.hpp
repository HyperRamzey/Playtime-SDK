#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkelMeshSkinWeightInfo {
    private: char pad_0[0x3c]; public:
    int32_t& get_Bones();
    void* get_Weights();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c
#pragma pack(pop)
}