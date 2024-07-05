#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Party {
struct SocialUser;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct SocialGroupChannel : public _Script_CoreUObject::Object {
    private: char pad_28[0x68]; public:
    _Script_Party::SocialUser*& get_SocialUser();
    void* get_GroupID();
    void* get_DisplayName();
    void* get_Members();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
