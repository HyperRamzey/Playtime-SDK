#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneEntitySystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TemplateSequence {
#pragma pack(push, 1)
struct TemplateSequencePropertyScalingInstantiatorSystem : public _Script_MovieScene::MovieSceneEntitySystem {
    private: char pad_40[0x58]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
