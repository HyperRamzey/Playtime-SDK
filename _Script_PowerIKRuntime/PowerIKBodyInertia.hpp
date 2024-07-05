#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PowerIKRuntime {
#pragma pack(push, 1)
struct PowerIKBodyInertia {
    private: char pad_0[0x14]; public:
    bool get_ApplyInertiaToBody();
    void set_ApplyInertiaToBody(bool value);
    float& get_SmoothFactor();
    bool get_UseSpring();
    void set_UseSpring(bool value);
    float& get_SpringStrength();
    float& get_SpringDamping();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
