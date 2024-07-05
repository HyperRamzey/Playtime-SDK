#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ControlRigDrawContainer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigDrawInterface : public ControlRigDrawContainer {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
