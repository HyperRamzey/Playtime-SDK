#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RootMotionExtractionStep {
    private: char pad_0[0x10]; public:
    _Script_Engine::AnimSequence*& get_AnimSequence();
    float& get_StartPosition();
    float& get_EndPosition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}