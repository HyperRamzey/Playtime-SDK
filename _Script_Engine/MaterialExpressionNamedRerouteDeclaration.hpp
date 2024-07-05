#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionNamedRerouteBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionNamedRerouteDeclaration : public MaterialExpressionNamedRerouteBase {
    private: char pad_40[0x30]; public:
    void* get_Input();
    void* get_Name();
    void* get_VariableGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
