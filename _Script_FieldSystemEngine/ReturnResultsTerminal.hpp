#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FieldNodeBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct ReturnResultsTerminal : public FieldNodeBase {
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::ReturnResultsTerminal* SetReturnResultsTerminal();
}; // Size: 0xb0
#pragma pack(pop)
}
