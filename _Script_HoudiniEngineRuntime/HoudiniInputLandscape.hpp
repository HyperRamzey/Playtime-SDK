#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniInputActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniInputLandscape : public HoudiniInputActor {
    private: char pad_110[0x40]; public:
    void* get_CachedInputLandscapeTraqnsform();
    int32_t& get_CachedNumLandscapeComponents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
