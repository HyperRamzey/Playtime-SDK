#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AITask.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AITask_LockLogic : public AITask {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
