#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ImgMediaSettings.hpp"
_Script_CoreUObject::Class* _Script_ImgMediaFactory::ImgMediaSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ImgMediaFactory.ImgMediaSettings");
    return result;
}
void* _Script_ImgMediaFactory::ImgMediaSettings::get_DefaultFrameRate() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_ImgMediaFactory::ImgMediaSettings::get_CacheBehindPercentage() {
    return *(float*)((uintptr_t)this + 0x30);
}
void _Script_ImgMediaFactory::ImgMediaSettings::set_UseGlobalCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_ImgMediaFactory::ImgMediaSettings::get_CacheThreads() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
float& _Script_ImgMediaFactory::ImgMediaSettings::get_CacheSizeGB() {
    return *(float*)((uintptr_t)this + 0x34);
}
int32_t& _Script_ImgMediaFactory::ImgMediaSettings::get_CacheThreadStackSizeKB() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
float& _Script_ImgMediaFactory::ImgMediaSettings::get_GlobalCacheSizeGB() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Script_ImgMediaFactory::ImgMediaSettings::get_UseGlobalCache() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void* _Script_ImgMediaFactory::ImgMediaSettings::get_ExrDecoderThreads() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_ImgMediaFactory::ImgMediaSettings::get_DefaultProxy() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_ImgMediaFactory::ImgMediaSettings::get_UseDefaultProxy() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_ImgMediaFactory::ImgMediaSettings::set_UseDefaultProxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
