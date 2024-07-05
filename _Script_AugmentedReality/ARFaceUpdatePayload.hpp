#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARFaceUpdatePayload {
    private: char pad_0[0x40]; public:
    void* get_SessionPayload();
    void* get_LeftEyePosition();
    void* get_RightEyePosition();
    void* get_LookAtTarget();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
