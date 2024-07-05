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
struct MaterialCachedParameterEntry {
    private: char pad_0[0x30]; public:
    void* get_NameHashes();
    void* get_ParameterInfos();
    void* get_ExpressionGuids();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
