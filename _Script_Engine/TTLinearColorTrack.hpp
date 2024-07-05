#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TTPropertyTrack.hpp"
namespace _Script_Engine {
struct CurveLinearColor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TTLinearColorTrack : public TTPropertyTrack {
    private: char pad_20[0x8]; public:
    _Script_Engine::CurveLinearColor*& get_CurveLinearColor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}