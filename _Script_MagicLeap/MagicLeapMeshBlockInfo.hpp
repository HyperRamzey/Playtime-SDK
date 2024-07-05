#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct MagicLeapMeshBlockInfo {
    private: char pad_0[0x48]; public:
    void* get_BlockID();
    void* get_BlockPosition();
    void* get_BlockOrientation();
    void* get_BlockDimensions();
    void* get_Timestamp();
    void* get_BlockState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}