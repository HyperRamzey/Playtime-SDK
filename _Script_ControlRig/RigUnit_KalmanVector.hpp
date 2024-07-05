#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_SimBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_KalmanVector : public RigUnit_SimBase {
    private: char pad_8[0x38]; public:
    void* get_Value();
    int32_t& get_BufferSize();
    void* get_Result();
    void* get_Buffer();
    int32_t& get_LastInsertIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
