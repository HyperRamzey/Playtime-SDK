#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapARPin {
#pragma pack(push, 1)
struct MagicLeapARPinState {
    private: char pad_0[0x14]; public:
    float& get_Confidence();
    float& get_ValidRadius();
    float& get_RotationError();
    float& get_TranslationError();
    void* get_PinType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
