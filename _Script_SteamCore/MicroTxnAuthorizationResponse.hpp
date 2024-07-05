#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct MicroTxnAuthorizationResponse {
    private: char pad_0[0x20]; public:
    int32_t& get_AppID();
    void* get_OrderId();
    bool get_bAuthorized();
    void set_bAuthorized(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
