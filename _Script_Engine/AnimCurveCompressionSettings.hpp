#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct AnimCurveCompressionCodec;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimCurveCompressionSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    _Script_Engine::AnimCurveCompressionCodec*& get_Codec();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}