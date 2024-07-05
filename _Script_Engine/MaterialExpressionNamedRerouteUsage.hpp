#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionNamedRerouteBase.hpp"
namespace _Script_Engine {
struct MaterialExpressionNamedRerouteDeclaration;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionNamedRerouteUsage : public MaterialExpressionNamedRerouteBase {
    private: char pad_40[0x18]; public:
    _Script_Engine::MaterialExpressionNamedRerouteDeclaration*& get_Declaration();
    void* get_DeclarationGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
