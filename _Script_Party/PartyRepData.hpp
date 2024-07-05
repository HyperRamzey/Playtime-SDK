#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "OnlinePartyRepDataBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct PartyRepData : public OnlinePartyRepDataBase {
    private: char pad_18[0x68]; public:
    void* get_PrivacySettings();
    void* get_PlatformSessions();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
