#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCache {
#pragma pack(push, 1)
struct GeometryCache : public _Script_CoreUObject::Object {
    private: char pad_28[0x48]; public:
    void* get_Materials();
    void* get_Tracks();
    int32_t& get_StartFrame();
    int32_t& get_EndFrame();
    void* get_Hash();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}