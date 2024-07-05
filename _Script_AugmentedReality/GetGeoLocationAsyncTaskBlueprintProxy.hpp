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
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct GetGeoLocationAsyncTaskBlueprintProxy : public ARBaseAsyncTaskBlueprintProxy {
    private: char pad_50[0x50]; public:
    void* get_OnSuccess();
    void* get_OnFailed();
    static _Script_CoreUObject::Class* static_class();
    _Script_AugmentedReality::GetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& WorldPosition);
}; // Size: 0xa0
#pragma pack(pop)
}
