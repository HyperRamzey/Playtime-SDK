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
struct BakedCustomAttributePerBoneData {
    private: char pad_0[0x38]; public:
    int32_t& get_BoneTreeIndex();
    void* get_StringAttributes();
    void* get_IntAttributes();
    void* get_FloatAttributes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}