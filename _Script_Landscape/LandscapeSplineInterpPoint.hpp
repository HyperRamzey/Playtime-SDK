#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeSplineInterpPoint {
    private: char pad_0[0x70]; public:
    void* get_Center();
    void* get_Left();
    void* get_Right();
    void* get_FalloffLeft();
    void* get_FalloffRight();
    void* get_LayerLeft();
    void* get_LayerRight();
    void* get_LayerFalloffLeft();
    void* get_LayerFalloffRight();
    float& get_StartEndFalloff();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
