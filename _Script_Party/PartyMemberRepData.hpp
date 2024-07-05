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
struct PartyMemberRepData : public OnlinePartyRepDataBase {
    private: char pad_18[0x160]; public:
    void* get_Platform();
    void* get_PlatformUniqueId();
    void* get_PlatformSessionId();
    void* get_CrossplayPreference();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x178
#pragma pack(pop)
}
