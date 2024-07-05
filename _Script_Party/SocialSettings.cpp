#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SocialSettings.hpp"
void* _Script_Party::SocialSettings::get_OssNamesWithEnvironmentIdPrefix() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Party::SocialSettings::get_DefaultMaxPartySize() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
bool _Script_Party::SocialSettings::get_bPreferPlatformInvites() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
bool _Script_Party::SocialSettings::get_bMustSendPrimaryInvites() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d + 0)) & 1 != 0;
}
void _Script_Party::SocialSettings::set_bPreferPlatformInvites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Party::SocialSettings::set_bMustSendPrimaryInvites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Party::SocialSettings::get_bLeavePartyOnDisconnect() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e + 0)) & 1 != 0;
}
void _Script_Party::SocialSettings::set_bLeavePartyOnDisconnect(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Party::SocialSettings::get_bSetDesiredPrivacyOnLocalPlayerBecomesLeader() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f + 0)) & 1 != 0;
}
void _Script_Party::SocialSettings::set_bSetDesiredPrivacyOnLocalPlayerBecomesLeader(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Party::SocialSettings::get_UserListAutoUpdateRate() {
    return *(float*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Party::SocialSettings::get_MinNicknameLength() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
int32_t& _Script_Party::SocialSettings::get_MaxNicknameLength() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
void* _Script_Party::SocialSettings::get_SocialPlatformDescriptions() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Party::SocialSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.SocialSettings");
    return result;
}
