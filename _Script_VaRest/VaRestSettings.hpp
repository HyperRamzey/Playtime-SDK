#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VaRest {
#pragma pack(push, 1)
struct VaRestSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    bool get_bExtendedLog();
    void set_bExtendedLog(bool value);
    bool get_bUseChunkedParser();
    void set_bUseChunkedParser(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
