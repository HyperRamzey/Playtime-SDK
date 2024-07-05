#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MediaIOCore\MediaCapture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RemoteSession {
#pragma pack(push, 1)
struct RemoteSessionMediaCapture : public _Script_MediaIOCore::MediaCapture {
    private: char pad_108[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
