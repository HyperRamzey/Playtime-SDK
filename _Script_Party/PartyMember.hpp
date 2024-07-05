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
struct PartyMember : public _Script_CoreUObject::Object {
    private: char pad_28[0xc8]; public:
    _Script_Party::SocialUser*& get_SocialUser();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
