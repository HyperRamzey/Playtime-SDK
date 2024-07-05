#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniInputObject.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniInputHoudiniAsset : public HoudiniInputObject {
    int32_t& get_AssetOutputIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
