#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapARPin {
#pragma pack(push, 1)
struct MagicLeapARPinObjectIdList {
    private: char pad_0[0x50]; public:
    void* get_ObjectIdList();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}