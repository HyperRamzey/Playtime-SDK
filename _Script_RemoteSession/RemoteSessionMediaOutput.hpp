#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MediaIOCore\MediaOutput.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RemoteSession {
#pragma pack(push, 1)
struct RemoteSessionMediaOutput : public _Script_MediaIOCore::MediaOutput {
    private: char pad_30[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
