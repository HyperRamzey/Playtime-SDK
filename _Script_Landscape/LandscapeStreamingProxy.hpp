#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LandscapeProxy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeStreamingProxy : public LandscapeProxy {
    private: char pad_598[0x20]; public:
    void* get_LandscapeActor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x5b8
#pragma pack(pop)
}
