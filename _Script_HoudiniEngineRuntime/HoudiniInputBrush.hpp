#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniInputActor.hpp"
namespace _Script_Engine {
struct Model;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniInputBrush : public HoudiniInputActor {
    private: char pad_110[0x20]; public:
    void* get_BrushesInfo();
    _Script_Engine::Model*& get_CombinedModel();
    bool get_bIgnoreInputObject();
    void set_bIgnoreInputObject(bool value);
    void* get_CachedInputBrushType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
