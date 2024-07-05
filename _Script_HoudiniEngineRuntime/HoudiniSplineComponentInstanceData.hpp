#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponentInstanceData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniSplineComponentInstanceData : public _Script_Engine::ActorComponentInstanceData {
    private: char pad_68[0x30]; public:
    void* get_CurvePoints();
    void* get_DisplayPoints();
    void* get_DisplayPointIndexDivider();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
