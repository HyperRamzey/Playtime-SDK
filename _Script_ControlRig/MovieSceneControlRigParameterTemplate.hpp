#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieSceneTracks\MovieSceneParameterSectionTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct MovieSceneControlRigParameterTemplate : public _Script_MovieSceneTracks::MovieSceneParameterSectionTemplate {
    private: char pad_80[0x20]; public:
    void* get_Enums();
    void* get_Integers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
