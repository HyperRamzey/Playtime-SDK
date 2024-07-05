#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MediaCapture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaIOCore {
#pragma pack(push, 1)
struct FileMediaCapture : public MediaCapture {
    private: char pad_108[0x68]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
