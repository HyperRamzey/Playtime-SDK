#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NetConnection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ReplayNetConnection : public NetConnection {
    private: char pad_1ba8[0x800]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x23a8
#pragma pack(pop)
}
