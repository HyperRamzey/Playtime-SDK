#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TextureRenderTarget.hpp"
#include "TextureRenderTargetVolume.hpp"
void _Script_Engine::TextureRenderTargetVolume::set_bForceLinearGamma(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19d + 0);
    *(uint8_t*)((uintptr_t)this + 0x19d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::TextureRenderTargetVolume::get_SizeX() {
    return *(int32_t*)((uintptr_t)this + 0x180);
}
int32_t& _Script_Engine::TextureRenderTargetVolume::get_SizeY() {
    return *(int32_t*)((uintptr_t)this + 0x184);
}
void _Script_Engine::TextureRenderTargetVolume::set_bHDR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19d + 0);
    *(uint8_t*)((uintptr_t)this + 0x19d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::TextureRenderTargetVolume::get_SizeZ() {
    return *(int32_t*)((uintptr_t)this + 0x188);
}
bool _Script_Engine::TextureRenderTargetVolume::get_bForceLinearGamma() {
    return (*(uint8_t*)((uintptr_t)this + 0x19d + 0)) & 2 != 0;
}
void* _Script_Engine::TextureRenderTargetVolume::get_ClearColor() {
    return (void*)((uintptr_t)this + 0x18c);
}
void* _Script_Engine::TextureRenderTargetVolume::get_OverrideFormat() {
    return (void*)((uintptr_t)this + 0x19c);
}
bool _Script_Engine::TextureRenderTargetVolume::get_bHDR() {
    return (*(uint8_t*)((uintptr_t)this + 0x19d + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::TextureRenderTargetVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextureRenderTargetVolume");
    return result;
}