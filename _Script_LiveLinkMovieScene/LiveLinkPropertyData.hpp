#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkMovieScene {
#pragma pack(push, 1)
struct LiveLinkPropertyData {
    private: char pad_0[0x58]; public:
    void* get_PropertyName();
    void* get_FloatChannel();
    void* get_StringChannel();
    void* get_IntegerChannel();
    void* get_BoolChannel();
    void* get_ByteChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
