#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARBaseAsyncTaskBlueprintProxy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARSaveWorldAsyncTaskBlueprintProxy : public ARBaseAsyncTaskBlueprintProxy {
    private: char pad_50[0x30]; public:
    void* get_OnSuccess();
    void* get_OnFailed();
    static _Script_CoreUObject::Class* static_class();
    _Script_AugmentedReality::ARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(_Script_CoreUObject::Object* WorldContextObject);
}; // Size: 0x80
#pragma pack(pop)
}
