#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionLogarithm2 : public MaterialExpression {
    private: char pad_40[0x18]; public:
    void* get_X();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}