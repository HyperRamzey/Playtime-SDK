#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ObjectPropertyBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct SoftObjectProperty : public ObjectPropertyBase {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}