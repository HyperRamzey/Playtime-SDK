#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct HidingSpotAnimation {
    private: char pad_0[0x10]; public:
    _Script_Engine::AnimMontage*& get_Montage();
    bool get_UsingRootMotion();
    void set_UsingRootMotion(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
