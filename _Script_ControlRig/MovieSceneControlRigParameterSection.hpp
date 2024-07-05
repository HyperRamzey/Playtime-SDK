#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieSceneTracks\MovieSceneParameterSection.hpp"
namespace _Script_ControlRig {
struct ControlRig;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct MovieSceneControlRigParameterSection : public _Script_MovieSceneTracks::MovieSceneParameterSection {
    private: char pad_148[0x1a0]; public:
    _Script_ControlRig::ControlRig*& get_ControlRig();
    void* get_ControlRigClass();
    void* get_ControlsMask();
    void* get_TransformMask();
    void* get_Weight();
    void* get_ControlChannelMap();
    void* get_EnumParameterNamesAndCurves();
    void* get_IntegerParameterNamesAndCurves();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2e8
#pragma pack(pop)
}
