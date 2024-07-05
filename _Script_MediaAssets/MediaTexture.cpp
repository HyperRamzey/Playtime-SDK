#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "MediaPlayer.hpp"
#include "MediaTexture.hpp"
void* _Script_MediaAssets::MediaTexture::get_AddressY() {
    return (void*)((uintptr_t)this + 0x179);
}
void* _Script_MediaAssets::MediaTexture::get_AddressX() {
    return (void*)((uintptr_t)this + 0x178);
}
void _Script_MediaAssets::MediaTexture::set_AutoClear(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17a + 0);
    *(uint8_t*)((uintptr_t)this + 0x17a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MediaAssets::MediaTexture::get_AutoClear() {
    return (*(uint8_t*)((uintptr_t)this + 0x17a + 0)) & 1 != 0;
}
void* _Script_MediaAssets::MediaTexture::get_CurrentOrientation() {
    return (void*)((uintptr_t)this + 0x194);
}
void* _Script_MediaAssets::MediaTexture::get_ClearColor() {
    return (void*)((uintptr_t)this + 0x17c);
}
bool _Script_MediaAssets::MediaTexture::get_EnableGenMips() {
    return (*(uint8_t*)((uintptr_t)this + 0x18c + 0)) & 1 != 0;
}
void _Script_MediaAssets::MediaTexture::set_EnableGenMips(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18c + 0);
    *(uint8_t*)((uintptr_t)this + 0x18c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MediaAssets::MediaTexture::get_NumMips() {
    return (void*)((uintptr_t)this + 0x18d);
}
bool _Script_MediaAssets::MediaTexture::get_NewStyleOutput() {
    return (*(uint8_t*)((uintptr_t)this + 0x18e + 0)) & 1 != 0;
}
_Script_MediaAssets::MediaPlayer* _Script_MediaAssets::MediaTexture::GetMediaPlayer() {
    return;
}
void _Script_MediaAssets::MediaTexture::set_NewStyleOutput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18e + 0);
    *(uint8_t*)((uintptr_t)this + 0x18e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t _Script_MediaAssets::MediaTexture::GetWidth() {
    return;
}
void* _Script_MediaAssets::MediaTexture::get_OutputFormat() {
    return (void*)((uintptr_t)this + 0x18f);
}
float& _Script_MediaAssets::MediaTexture::get_CurrentAspectRatio() {
    return *(float*)((uintptr_t)this + 0x190);
}
_Script_MediaAssets::MediaPlayer*& _Script_MediaAssets::MediaTexture::get_MediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x198);
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaTexture");
    return result;
}
void _Script_MediaAssets::MediaTexture::SetMediaPlayer(_Script_MediaAssets::MediaPlayer* NewMediaPlayer) {
    return;
}
int32_t _Script_MediaAssets::MediaTexture::GetTextureNumMips() {
    return;
}
int32_t _Script_MediaAssets::MediaTexture::GetHeight() {
    return;
}
float _Script_MediaAssets::MediaTexture::GetAspectRatio() {
    return;
}
