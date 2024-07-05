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
struct CRSimPointConstraint {
    private: char pad_0[0x24]; public:
    void* get_Type();
    int32_t& get_SubjectA();
    int32_t& get_SubjectB();
    void* get_DataA();
    void* get_DataB();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
