#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniAssetParameter.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniAssetInput : public HoudiniAssetParameter {
    private: char pad_80[0x120]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
