#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkSourceSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x78]; public:
    void* get_Mode();
    void* get_BufferSettings();
    void* get_ConnectionString();
    void* get_Factory();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
