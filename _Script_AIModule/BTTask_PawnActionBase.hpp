#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTTask_PawnActionBase : public BTTaskNode {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}