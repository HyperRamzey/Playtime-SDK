#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PreviewAttachedObjectPair {
    private: char pad_0[0x38]; public:
    void* get_AttachedObject();
    _Script_CoreUObject::Object*& get_Object();
    void* get_AttachedTo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
