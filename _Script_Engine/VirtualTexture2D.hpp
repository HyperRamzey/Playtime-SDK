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
#pragma pack(push, 1)
struct VirtualTexture2D : public Texture2D {
    private: char pad_1a0[0x10]; public:
    void* get_Settings();
    bool get_bContinuousUpdate();
    void set_bContinuousUpdate(bool value);
    bool get_bSinglePhysicalSpace();
    void set_bSinglePhysicalSpace(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b0
#pragma pack(pop)
}
