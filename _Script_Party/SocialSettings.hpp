#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Party {
#pragma pack(push, 1)
struct SocialSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    void* get_OssNamesWithEnvironmentIdPrefix();
    int32_t& get_DefaultMaxPartySize();
    bool get_bPreferPlatformInvites();
    void set_bPreferPlatformInvites(bool value);
    bool get_bMustSendPrimaryInvites();
    void set_bMustSendPrimaryInvites(bool value);
    bool get_bLeavePartyOnDisconnect();
    void set_bLeavePartyOnDisconnect(bool value);
    bool get_bSetDesiredPrivacyOnLocalPlayerBecomesLeader();
    void set_bSetDesiredPrivacyOnLocalPlayerBecomesLeader(bool value);
    float& get_UserListAutoUpdateRate();
    int32_t& get_MinNicknameLength();
    int32_t& get_MaxNicknameLength();
    void* get_SocialPlatformDescriptions();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
