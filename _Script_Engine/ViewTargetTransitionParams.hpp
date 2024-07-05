#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ViewTargetTransitionParams {
    private: char pad_0[0x10]; public:
    float& get_BlendTime();
    void* get_BlendFunction();
    float& get_BlendExp();
    bool get_bLockOutgoing();
    void set_bLockOutgoing(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}