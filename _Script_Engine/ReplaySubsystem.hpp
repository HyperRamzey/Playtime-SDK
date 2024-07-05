#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GameInstanceSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ReplaySubsystem : public GameInstanceSubsystem {
    private: char pad_30[0x10]; public:
    bool get_bLoadDefaultMapOnStop();
    void set_bLoadDefaultMapOnStop(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
