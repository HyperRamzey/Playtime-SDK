#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture.hpp"
#include "Texture2D.hpp"
void* _Script_Engine::Texture2D::get_AddressX() {
    return (void*)((uintptr_t)this + 0x181);
}
int32_t& _Script_Engine::Texture2D::get_FirstResourceMemMip() {
    return *(int32_t*)((uintptr_t)this + 0x17c);
}
int32_t& _Script_Engine::Texture2D::get_LevelIndex() {
    return *(int32_t*)((uintptr_t)this + 0x178);
}
bool _Script_Engine::Texture2D::get_bTemporarilyDisableStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 1 != 0;
}
void _Script_Engine::Texture2D::set_bTemporarilyDisableStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Texture2D::get_AddressY() {
    return (void*)((uintptr_t)this + 0x182);
}
void* _Script_Engine::Texture2D::get_ImportedSize() {
    return (void*)((uintptr_t)this + 0x184);
}
_Script_CoreUObject::Class* _Script_Engine::Texture2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Texture2D");
    return result;
}
int32_t _Script_Engine::Texture2D::Blueprint_GetSizeY() {
    return;
}
int32_t _Script_Engine::Texture2D::Blueprint_GetSizeX() {
    return;
}
