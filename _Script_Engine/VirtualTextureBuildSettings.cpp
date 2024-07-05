#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VirtualTextureBuildSettings.hpp"
void _Script_Engine::VirtualTextureBuildSettings::set_bEnableCompressZlib(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::VirtualTextureBuildSettings::get_TileSize() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::VirtualTextureBuildSettings::get_TileBorderSize() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
bool _Script_Engine::VirtualTextureBuildSettings::get_bEnableCompressCrunch() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::VirtualTextureBuildSettings::set_bEnableCompressCrunch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::VirtualTextureBuildSettings::get_bEnableCompressZlib() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::VirtualTextureBuildSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.VirtualTextureBuildSettings");
    return result;
}
