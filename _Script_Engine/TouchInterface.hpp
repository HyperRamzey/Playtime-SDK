#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TouchInterface : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    void* get_Controls();
    float& get_ActiveOpacity();
    float& get_InactiveOpacity();
    float& get_TimeUntilDeactive();
    float& get_TimeUntilReset();
    float& get_ActivationDelay();
    bool get_bPreventRecenter();
    void set_bPreventRecenter(bool value);
    float& get_StartupDelay();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
