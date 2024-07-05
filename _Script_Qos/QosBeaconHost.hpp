#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_OnlineSubsystemUtils\OnlineBeaconHostObject.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Qos {
#pragma pack(push, 1)
struct QosBeaconHost : public _Script_OnlineSubsystemUtils::OnlineBeaconHostObject {
    private: char pad_248[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x258
#pragma pack(pop)
}
