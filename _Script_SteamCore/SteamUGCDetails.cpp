#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamUGCDetails.hpp"
void* _Script_SteamCore::SteamUGCDetails::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::SteamUGCDetails::get_Description() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_SteamCore::SteamUGCDetails::get_CreatorAppID() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void* _Script_SteamCore::SteamUGCDetails::get_Result() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::SteamUGCDetails::get_Title() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_SteamCore::SteamUGCDetails::get_FileType() {
    return (void*)((uintptr_t)this + 0x9);
}
void* _Script_SteamCore::SteamUGCDetails::get_SteamIDOwner() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_SteamCore::SteamUGCDetails::get_ConsumerAppID() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_SteamCore::SteamUGCDetails::get_TimeCreated() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_SteamCore::SteamUGCDetails::get_TimeUpdated() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
int32_t& _Script_SteamCore::SteamUGCDetails::get_TimeAddedToUserList() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
void* _Script_SteamCore::SteamUGCDetails::get_Visibility() {
    return (void*)((uintptr_t)this + 0x4c);
}
bool _Script_SteamCore::SteamUGCDetails::get_bBanned() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d + 0)) & 1 != 0;
}
void _Script_SteamCore::SteamUGCDetails::set_bBanned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_SteamCore::SteamUGCDetails::get_VotesUp() {
    return *(int32_t*)((uintptr_t)this + 0x98);
}
bool _Script_SteamCore::SteamUGCDetails::get_bAcceptedForUse() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e + 0)) & 1 != 0;
}
void _Script_SteamCore::SteamUGCDetails::set_bAcceptedForUse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::SteamUGCDetails::get_bTagsTruncated() {
    return (*(uint8_t*)((uintptr_t)this + 0x4f + 0)) & 1 != 0;
}
void _Script_SteamCore::SteamUGCDetails::set_bTagsTruncated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4f + 0);
    *(uint8_t*)((uintptr_t)this + 0x4f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SteamCore::SteamUGCDetails::get_Tags() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_SteamCore::SteamUGCDetails::get_File() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_SteamCore::SteamUGCDetails::get_PreviewFile() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SteamCore::SteamUGCDetails::get_Filename() {
    return (void*)((uintptr_t)this + 0x70);
}
int32_t& _Script_SteamCore::SteamUGCDetails::get_FileSize() {
    return *(int32_t*)((uintptr_t)this + 0x80);
}
int32_t& _Script_SteamCore::SteamUGCDetails::get_PreviewFileSize() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
void* _Script_SteamCore::SteamUGCDetails::get_URL() {
    return (void*)((uintptr_t)this + 0x88);
}
int32_t& _Script_SteamCore::SteamUGCDetails::get_VotesDown() {
    return *(int32_t*)((uintptr_t)this + 0x9c);
}
float& _Script_SteamCore::SteamUGCDetails::get_Score() {
    return *(float*)((uintptr_t)this + 0xa0);
}
int32_t& _Script_SteamCore::SteamUGCDetails::get_NumChildren() {
    return *(int32_t*)((uintptr_t)this + 0xa4);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamUGCDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamUGCDetails");
    return result;
}
