#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapPrivileges {
#pragma pack(push, 1)
struct MagicLeapPrivilegesFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool RequestPrivilegeAsync(void* Privilege, void*& ResultDelegate);
    bool RequestPrivilege(void* Privilege);
    bool CheckPrivilege(void* Privilege);
}; // Size: 0x28
#pragma pack(pop)
}
