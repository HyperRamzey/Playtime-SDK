#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniLandscapeEditLayer : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    void* get_LandscapeSoftPtr();
    void* get_LayerName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
