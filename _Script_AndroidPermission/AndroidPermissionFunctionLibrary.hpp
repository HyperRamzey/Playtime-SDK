#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AndroidPermission {
struct AndroidPermissionCallbackProxy;
}
namespace _Script_AndroidPermission {
#pragma pack(push, 1)
struct AndroidPermissionFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool CheckPermission(void* permission);
    _Script_AndroidPermission::AndroidPermissionCallbackProxy* AcquirePermissions(void*& Permissions);
}; // Size: 0x28
#pragma pack(pop)
}
