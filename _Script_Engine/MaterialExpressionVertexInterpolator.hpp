#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionCustomOutput.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionVertexInterpolator : public MaterialExpressionCustomOutput {
    private: char pad_40[0x20]; public:
    void* get_Input();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
