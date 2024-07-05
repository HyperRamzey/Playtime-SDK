#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigVMBaseOp.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RigVM {
#pragma pack(push, 1)
struct RigVMBinaryOp : public RigVMBaseOp {
    private: char pad_1[0xd]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe
#pragma pack(pop)
}
