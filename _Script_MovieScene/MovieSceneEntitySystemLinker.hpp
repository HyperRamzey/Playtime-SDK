#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneEntitySystemLinker : public _Script_CoreUObject::Object {
    private: char pad_28[0x4c8]; public:
    void* get_SystemGraph();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4f0
#pragma pack(pop)
}