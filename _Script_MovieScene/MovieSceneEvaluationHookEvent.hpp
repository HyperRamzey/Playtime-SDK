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
struct MovieSceneEvaluationHookEvent {
    private: char pad_0[0x38]; public:
    void* get_Hook();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
