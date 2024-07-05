#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TextureRenderTarget.hpp"
#include "TextureRenderTarget2D.hpp"
int32_t& _Script_Engine::TextureRenderTarget2D::get_SizeX() {
    return *(int32_t*)((uintptr_t)this + 0x180);
}
int32_t& _Script_Engine::TextureRenderTarget2D::get_SizeY() {
    return *(int32_t*)((uintptr_t)this + 0x184);
}
void _Script_Engine::TextureRenderTarget2D::set_bGPUSharedFlag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19a + 0);
    *(uint8_t*)((uintptr_t)this + 0x19a + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::TextureRenderTarget2D::get_AddressX() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_Engine::TextureRenderTarget2D::get_ClearColor() {
    return (void*)((uintptr_t)this + 0x188);
}
bool _Script_Engine::TextureRenderTarget2D::get_bHDR() {
    return (*(uint8_t*)((uintptr_t)this + 0x19a + 0)) & 2 != 0;
}
void* _Script_Engine::TextureRenderTarget2D::get_AddressY() {
    return (void*)((uintptr_t)this + 0x199);
}
void _Script_Engine::TextureRenderTarget2D::set_bForceLinearGamma(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19a + 0);
    *(uint8_t*)((uintptr_t)this + 0x19a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::TextureRenderTarget2D::get_bForceLinearGamma() {
    return (*(uint8_t*)((uintptr_t)this + 0x19a + 0)) & 1 != 0;
}
void _Script_Engine::TextureRenderTarget2D::set_bHDR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19a + 0);
    *(uint8_t*)((uintptr_t)this + 0x19a + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::TextureRenderTarget2D::get_bGPUSharedFlag() {
    return (*(uint8_t*)((uintptr_t)this + 0x19a + 0)) & 4 != 0;
}
void* _Script_Engine::TextureRenderTarget2D::get_RenderTargetFormat() {
    return (void*)((uintptr_t)this + 0x19b);
}
bool _Script_Engine::TextureRenderTarget2D::get_bAutoGenerateMips() {
    return (*(uint8_t*)((uintptr_t)this + 0x19c + 0)) & 1 != 0;
}
void _Script_Engine::TextureRenderTarget2D::set_bAutoGenerateMips(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19c + 0);
    *(uint8_t*)((uintptr_t)this + 0x19c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::TextureRenderTarget2D::get_MipsSamplerFilter() {
    return (void*)((uintptr_t)this + 0x19d);
}
void* _Script_Engine::TextureRenderTarget2D::get_MipsAddressU() {
    return (void*)((uintptr_t)this + 0x19e);
}
void* _Script_Engine::TextureRenderTarget2D::get_MipsAddressV() {
    return (void*)((uintptr_t)this + 0x19f);
}
void* _Script_Engine::TextureRenderTarget2D::get_OverrideFormat() {
    return (void*)((uintptr_t)this + 0x1a0);
}
_Script_CoreUObject::Class* _Script_Engine::TextureRenderTarget2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextureRenderTarget2D");
    return result;
}
