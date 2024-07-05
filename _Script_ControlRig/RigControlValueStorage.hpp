#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigControlValueStorage {
    private: char pad_0[0x44]; public:
    float& get_Float00();
    float& get_Float01();
    float& get_Float02();
    float& get_Float03();
    float& get_Float10();
    float& get_Float11();
    float& get_Float12();
    float& get_Float13();
    float& get_Float20();
    float& get_Float21();
    float& get_Float22();
    float& get_Float23();
    float& get_Float30();
    float& get_Float31();
    float& get_Float32();
    float& get_Float33();
    bool get_bValid();
    void set_bValid(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x44
#pragma pack(pop)
}
