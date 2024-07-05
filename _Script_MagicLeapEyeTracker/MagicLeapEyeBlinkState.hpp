#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapEyeTracker {
#pragma pack(push, 1)
struct MagicLeapEyeBlinkState {
    private: char pad_0[0x2]; public:
    bool get_LeftEyeBlinked();
    void set_LeftEyeBlinked(bool value);
    bool get_RightEyeBlinked();
    void set_RightEyeBlinked(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2
#pragma pack(pop)
}
