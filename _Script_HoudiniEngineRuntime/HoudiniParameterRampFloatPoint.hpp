#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_HoudiniEngineRuntime {
struct HoudiniParameterFloat;
}
namespace _Script_HoudiniEngineRuntime {
struct HoudiniParameterChoice;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniParameterRampFloatPoint : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    float& get_Position();
    float& get_Value();
    void* get_Interpolation();
    int32_t& get_InstanceIndex();
    _Script_HoudiniEngineRuntime::HoudiniParameterFloat*& get_PositionParentParm();
    _Script_HoudiniEngineRuntime::HoudiniParameterFloat*& get_ValueParentParm();
    _Script_HoudiniEngineRuntime::HoudiniParameterChoice*& get_InterpolationParentParm();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}