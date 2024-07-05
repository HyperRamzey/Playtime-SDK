#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneCompiledSequenceFlagStruct {
    private: char pad_0[0x1]; public:
    bool get_bParentSequenceRequiresLowerFence();
    void set_bParentSequenceRequiresLowerFence(bool value);
    bool get_bParentSequenceRequiresUpperFence();
    void set_bParentSequenceRequiresUpperFence(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1
#pragma pack(pop)
}
