#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Party {
struct SocialUser;
}
namespace _Script_Engine {
struct LocalPlayer;
}
namespace _Script_Party {
struct SocialChatManager;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct SocialToolkit : public _Script_CoreUObject::Object {
    private: char pad_28[0x1d0]; public:
    _Script_Party::SocialUser*& get_LocalUser();
    void* get_AllUsers();
    _Script_Engine::LocalPlayer*& get_LocalPlayerOwner();
    _Script_Party::SocialChatManager*& get_SocialChatManager();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1f8
#pragma pack(pop)
}
