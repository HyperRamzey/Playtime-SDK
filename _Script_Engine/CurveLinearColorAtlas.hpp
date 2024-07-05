#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Texture2D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct CurveLinearColor;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CurveLinearColorAtlas : public Texture2D {
    private: char pad_1a0[0x20]; public:
    void* get_TextureSize();
    bool get_bSquareResolution();
    void set_bSquareResolution(bool value);
    void* get_TextureHeight();
    void* get_GradientCurves();
    static _Script_CoreUObject::Class* static_class();
    bool GetCurvePosition(_Script_Engine::CurveLinearColor* InCurve, float& Position);
}; // Size: 0x1c0
#pragma pack(pop)
}
