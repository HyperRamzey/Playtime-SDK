#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Party {
struct SocialDebugTools;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct SocialManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x180]; public:
    void* get_SocialToolkits();
    _Script_Party::SocialDebugTools*& get_SocialDebugTools();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a8
#pragma pack(pop)
}
