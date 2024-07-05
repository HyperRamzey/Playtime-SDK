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
struct HoudiniOutputObjectIdentifier {
    private: char pad_0[0x40]; public:
    int32_t& get_ObjectId();
    int32_t& get_GeoId();
    int32_t& get_PartId();
    void* get_SplitIdentifier();
    void* get_PartName();
    int32_t& get_PrimitiveIndex();
    int32_t& get_PointIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
